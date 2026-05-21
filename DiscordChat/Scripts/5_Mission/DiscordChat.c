class DiscordChat
{
	static const string pathProfile = "$profile:DiscordChat/";
	static const string dirLogs = "Logs/";
	static const string fileConfig = "Config";
	static const string extConfig = ".json";
	
	static ref DiscordChat instance;
	static string pathLog;
	ref DiscordChatConfig config;

	static DiscordChat GetInstance()
	{
		if (!instance) instance = new DiscordChat;
		return instance;
	}

	void DiscordChat()
	{
		GetNewLogPath();
		
		if ( !FileExist( pathProfile ) )
		{
			MakeDirectory( pathProfile );
		}
		
		string profiles = "";
		GetCLIParam( "profiles", profiles );
		
		config = new DiscordChatConfig;
		
		if ( !FileExist( pathProfile + fileConfig + extConfig ) )
		{
			Print( "[DiscordChat] Creating new config in \"" + profiles + "/DiscordChat/" + fileConfig + extConfig + "\"" );
			JsonFileLoader<DiscordChatConfig>.JsonSaveFile( pathProfile + fileConfig + extConfig, config );
		}
		else
		{
			Print( "[DiscordChat] Loading config from \"" + profiles + "/DiscordChat/" + fileConfig + extConfig + "\"" );
			JsonFileLoader<DiscordChatConfig>.JsonLoadFile( pathProfile + fileConfig + extConfig, config );
		}
	}
	
	void HandleData( bool isGlobal, string playerName, string message )
	{
		string channel = "";
		if ( !isGlobal ) channel = "[Direct] ";
		
		if ( !isGlobal && config.logDirect )
		{
			this.Log( channel + playerName + ": " + message );
		}
		else if ( isGlobal && config.logGlobal )
		{
			this.Log( "[Global] " + playerName + ": " + message ); // only explicitly state "Global" in logs
		}
		
		foreach ( DiscordChatServerSettings serverSettings: config.Servers )
		{
			if ( isGlobal && !serverSettings.sendGlobal ) continue;
			if ( !isGlobal && !serverSettings.sendDirect ) continue;
			
			string content = channel + playerName + ": " + message;
			RestContext Ctx = GetRestApi().GetRestContext( "https://discord.com/api/webhooks/" );
			Ctx.SetHeader( "application/json" );
			Ctx.POST( new RestCallback, serverSettings.id + "/" + serverSettings.token, "{\"content\": \"" + content + "\"}");
		}
	}
	
	static void GetNewLogPath()
	{
		pathLog = pathProfile + dirLogs + "/" + GetDate( true ) + ".log";
	}
	
	static void Log( string toLog )
	{
		if ( !FileExist( pathProfile + dirLogs ) )
		{
			MakeDirectory( pathProfile + dirLogs );
		}
		
		FileHandle logFile = OpenFile( pathLog, FileMode.APPEND );
		
		if ( !logFile )
		{
			Print( "!!![DiscordChat]: Could not create/access log file in \"" + pathLog + "\"" );
			Print( "!!![DiscordChat]: Attempting to create new log." );
			GetNewLogPath();
		}
		
		FPrintln( logFile, "[" + GetDate() + "]:\t" + toLog );
		CloseFile( logFile );
	}
	
	static string GetDate( bool fileFriendly = false )
	{
		int year, month, day, hour, minute, second;

		GetYearMonthDay( year, month, day );
		GetHourMinuteSecond( hour, minute, second );

		string date = day.ToStringLen(2) + "." + month.ToStringLen(2) + "." + year.ToStringLen(4) + " " + hour.ToStringLen(2) + ":" + minute.ToStringLen(2) + ":" + second.ToStringLen(2);
		if ( fileFriendly )
		{
			date.Replace(" ", "_");
			date.Replace(".", "-");
			date.Replace(":", "-");
		}

		return date;
	}
}
