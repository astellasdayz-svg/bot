modded class MissionServer
{
	void MissionServer()
	{
		DiscordChat.GetInstance();
	}
	
	override void OnEvent( EventType eventTypeId, Param params )
	{
		if( eventTypeId == ChatMessageEventTypeID ) 
		{
			ChatMessageEventParams chat_params = ChatMessageEventParams.Cast( params );
			int chatChannel = chat_params.param1;
			string playerName = chat_params.param2;
			string message = chat_params.param3;
			
			if ( chatChannel & CCDirect || !chatChannel )
			{
				bool isGlobal;
				
				if ( message.LengthUtf8() && message.SubstringUtf8( 0, 2 ) == "ᐅ " ) // @SchanaModGlobalChat
				{
					isGlobal = true;
					message = message.Substring( 4, message.Length() - 4 );
				}
				
				DiscordChat.GetInstance().HandleData( isGlobal, playerName, message );
			}
			#ifdef EXPANSIONMOD
			else if ( chatChannel & ExpansionChatChannels.CCGlobal )
			{
				DiscordChat.GetInstance().HandleData( true, playerName, message );
			}
			#endif
		}
		
		super.OnEvent( eventTypeId, params );
	}
}