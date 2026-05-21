class DiscordChatConfig
{
	bool logDirect = false;
	bool logGlobal = false;
	
	ref array<ref DiscordChatServerSettings> Servers;
	
	void DiscordChatConfig()
	{
		Servers = new array<ref DiscordChatServerSettings>;
		Servers.Insert( new DiscordChatServerSettings );
	}
}

class DiscordChatServerSettings
{
	string id = "";
	string token = "";
	bool sendDirect = false;
	bool sendGlobal = true;
}