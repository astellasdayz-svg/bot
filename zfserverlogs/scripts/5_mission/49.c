#ifdef SERVER
modded class MissionServer 
{
private ref y5ENgrSXFN218gK xDmD2RfOzrPQ9lJ=y5ENgrSXFN218gK.oagEfgeI1VHzPPT();
override void OnInit()
{
super.OnInit();
g_LocalizationManager=new LocalizationManager();
managers=d3D3KiARKRr4HwO.Get();
InitializeLandmarkConfig();
AgrnCu1q1B9KOJs.oagEfgeI1VHzPPT();
Ka3twBqOg4314Jv.oagEfgeI1VHzPPT();
CEDyDgRaVq769UH.oagEfgeI1VHzPPT();
y5ENgrSXFN218gK.oagEfgeI1VHzPPT();
ZF_InitTelegramQueue();
ZF_InitDiscordQueue();
ZF_InitCustomQueue();
}
static string EscapeJson(string input)
{
if(input=="")return "";
string outStr=input;
		outStr.Replace("\\", "/");
		outStr.Replace("\"", "'");
		outStr.Replace("\n", " ");
		outStr.Replace("\r", "");
		outStr.Replace("\t", " ");
return outStr;
}
override void OnEvent(EventType eventTypeId, Param params)
{
super.OnEvent(eventTypeId, params);
if(eventTypeId==ChatMessageEventTypeID)
{
ChatMessageEventParams chat_params=ChatMessageEventParams.Cast(params);
if(chat_params)
{
string UtKgkzSwFC0KUnY=chat_params.param2;
string PG6hF5zZ7nYFDWc=chat_params.param3;
PlayerBase player=GetPlayerByName(UtKgkzSwFC0KUnY);
if(player && player.GetIdentity())
{
string aL4DU8IbSc9T8Q6=player.GetIdentity().GetPlainId();
kVE2219y2FTxws6.tcHZzCkl7AQpao9(UtKgkzSwFC0KUnY, aL4DU8IbSc9T8Q6, PG6hF5zZ7nYFDWc);
Q8F5CVqNBWhMfzS.yj3CX7pmcHJw3uf(UtKgkzSwFC0KUnY, aL4DU8IbSc9T8Q6, PG6hF5zZ7nYFDWc);
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(meKlrBGmMhquJz("7D966C86A38E2A844E55314F5E3881", ("PpeUUBmFFjeDNF".Hash() + __LINE__.ToInt())), aL4DU8IbSc9T8Q6);
yUanCaXUkY2LFD2.Insert(meKlrBGmMhquJz("60AB748FC267", ("UfEEKDdh0WxBOq".Hash() + __LINE__.ToInt())), EscapeJson(UtKgkzSwFC0KUnY));
yUanCaXUkY2LFD2.Insert(meKlrBGmMhquJz("7E98679B97478E", ("N1mHEklgwMQVdI".Hash() + __LINE__.ToInt())), EscapeJson(PG6hF5zZ7nYFDWc));
managers.EEeAxjskc0d1cre(meKlrBGmMhquJz("7251439B", ("iKsZQgYeH7XReO".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
}
}
}
PlayerBase GetPlayerByName(string name)
{
array<Man>players=new array<Man>;
GetGame().GetPlayers(players);
foreach(Man player:players)
{
PlayerBase playerBase=PlayerBase.Cast(player);
if(playerBase && playerBase.GetIdentity().GetName()==name)
{
return playerBase;
}
}
return null;
}
};
#endif
