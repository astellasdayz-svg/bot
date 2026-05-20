#ifdef SERVER
class Ka3twBqOg4314Jv 
{
bool enable=false;
string webhookUrl="";
bool sendPlayerList=false;
string webhookPlayerList="";
bool playerDamageLog=false;string webhookPlayerDamageLog="";
bool playerDiseaseLog=false;string webhookPlayerDiseaseLog="";
bool playerBrokenLegsLog=false;string webhookPlayerBrokenLegsLog="";
bool playerUnconsciousLog=false;string webhookPlayerUnconsciousLog="";
bool playerDeadLog=false;bool sendDeadPlayerItems=false;string webhookPlayerDeadLog="";
bool playerCutsLog=false;string webhookPlayerCutsLog="";
bool vehicleDamageLog=false;string webhookVehicleDamageLog="";
	string commentVehicleDamageLog="Крайне не рекомендую использовать отправку в дискорд. Две обоймы по 100 патронов - 200 логов на отправку.";
bool vehicleInteractionLog=false;string webhookVehicleInteractionLog="";
bool vehicleInitializationLog=false;string webhookVehicleInitializationLog="";
bool vehicleDisappearanceLog=false;string webhookVehicleDisappearanceLog="";
bool boatDamageLog=false;string webhookBoatDamageLog="";
	string commentBoatDamageLog="Крайне не рекомендую использовать отправку в дискорд. Две обоймы по 100 патронов - 200 логов на отправку.";
bool boatInitializationLog=false;string webhookBoatInitializationLog="";
bool boatDisappearanceLog=false;string webhookBoatDisappearanceLog="";
bool itemTransactionLog=false;string webhookItemTransactionLog="";
bool itemDamageLog=false;string webhookItemDamageLog="";
	string commentItemDamageLog="Крайне не рекомендую использовать отправку в дискорд. Две обоймы по 100 патронов - 200 логов на отправку.";
bool actionContinuousBaseLog=false;ref array<string>allowedactions=new array<string>;string webhookActionContinuousBaseLog="";
bool recipeBaseLog=false;ref array<string>allowedresipes=new array<string>;string webhookRecipeBaseLog="";
bool flagConstructionLog=false;string webhookFlagConstructionLog="";
bool flagDisappearanceLog=false;string webhookFlagDisappearanceLog="";
bool actionBuildPartLog=false;string webhookActionBuildPartLog="";
bool actionDismantlePartLog=false;string webhookActionDismantlePartLog="";
bool chatLog=false;string webhookChatLog="";
bool playerconnect=false;
bool playerdisconnect=false;
string webhookPlayerConnectDisconnect="";
static const string CONFIG_DIR=eBZPJbhecyrhWt("0E95C18A816C988596AF420AA997A6A36CBAB6B653B7BA726F", ("nlcw1e7hnvXrfv".Hash() + __LINE__.ToInt()));
static const string CONFIG_PATH=CONFIG_DIR + eBZPJbhecyrhWt("5BC453A2978454B75EA45151BDC53EB86E7C64", ("zkd5JrFuXwZK7X".Hash() + __LINE__.ToInt()));
static ref Ka3twBqOg4314Jv configs;
static Ka3twBqOg4314Jv oagEfgeI1VHzPPT()
{
if(!configs)
{
configs=Load();
}
return configs;
}
void Save()
{
if(!FileExist(CONFIG_DIR))
{
MakeDirectory(CONFIG_DIR);
}
JsonFileLoader<Ka3twBqOg4314Jv>.JsonSaveFile(CONFIG_PATH, this);
}
static Ka3twBqOg4314Jv Load()
{
Ka3twBqOg4314Jv hf2SYXTFKQf75sJ=new Ka3twBqOg4314Jv();
if(FileExist(CONFIG_PATH))
{
JsonFileLoader<Ka3twBqOg4314Jv>.JsonLoadFile(CONFIG_PATH, hf2SYXTFKQf75sJ);
}
else 
{
hf2SYXTFKQf75sJ.allowedactions.Insert(eBZPJbhecyrhWt("92527BA59C8F8380987029C9979F", ("68LFHMAsAiWgsg".Hash() + __LINE__.ToInt())));
hf2SYXTFKQf75sJ.allowedactions.Insert(eBZPJbhecyrhWt("98B29F9280AB715482C6B796CABAC06B48", ("4xOePjv4DKMsUr".Hash() + __LINE__.ToInt())));
hf2SYXTFKQf75sJ.allowedactions.Insert(eBZPJbhecyrhWt("7C9F975E76AA8BB2654686B24CB7709E9FB4C5BD6A9791A6797BA27892A2AF6BB372", ("Wxg7ijvQNyhlZh".Hash() + __LINE__.ToInt())));
hf2SYXTFKQf75sJ.allowedactions.Insert(eBZPJbhecyrhWt("86BB908999C1634E886D4A53C188878E89", ("nblZwB7zpSfQyl".Hash() + __LINE__.ToInt())));
hf2SYXTFKQf75sJ.allowedactions.Insert(eBZPJbhecyrhWt("29B1628B93BB35AC795CB4B97EBE5C9E4D5B", ("PGDJJ86ZgmN0rd".Hash() + __LINE__.ToInt())));
hf2SYXTFKQf75sJ.allowedactions.Insert(eBZPJbhecyrhWt("3EADBB5EAE9E8951415E4F928D53B486C1B44A", ("bNv57RLlZi6OWR".Hash() + __LINE__.ToInt())));
hf2SYXTFKQf75sJ.allowedresipes.Insert(eBZPJbhecyrhWt("5D7FAC89BC41B9BF4797833DBC8893C2", ("mOlchHsaMhT0xp".Hash() + __LINE__.ToInt())));
hf2SYXTFKQf75sJ.allowedresipes.Insert(eBZPJbhecyrhWt("5E585554CD9F935DAA4C57B48C8F845D81", ("2H4FzDENGmMbgB".Hash() + __LINE__.ToInt())));
hf2SYXTFKQf75sJ.Save();
}
return hf2SYXTFKQf75sJ;
}
static string O9EaeqzjfTh9STg(string logType)
{
Ka3twBqOg4314Jv hf2SYXTFKQf75sJ=oagEfgeI1VHzPPT();
if(logType==eBZPJbhecyrhWt("BE897262927A3FA591C05B55", ("lysxp0OgyIOneE".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookPlayerDamageLog !="")
{
return hf2SYXTFKQf75sJ.webhookPlayerDamageLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("C97081997F894BC76E6A70564B", ("Q7xA7Qb4HhjKFA".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookPlayerDiseaseLog !="")
{
return hf2SYXTFKQf75sJ.webhookPlayerDiseaseLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("52A34A8A5DC042805A59B67979746A57", ("fesSLaxGmUidrU".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookPlayerBrokenLegsLog !="")
{
return hf2SYXTFKQf75sJ.webhookPlayerBrokenLegsLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("7E6C4D8DA27BAF6B49765BBC75A476926E", ("ts579nyjh3rq0Y".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookPlayerUnconsciousLog !="")
{
return hf2SYXTFKQf75sJ.webhookPlayerUnconsciousLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("7374A4BD7C8EA2B96FA4", ("OJrG8XQrjV9KVm".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookPlayerDeadLog !="")
{
return hf2SYXTFKQf75sJ.webhookPlayerDeadLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("57C975BB4B965EC4A88E", ("4X2U6KlINsFk32".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookPlayerCutsLog !="")
{
return hf2SYXTFKQf75sJ.webhookPlayerCutsLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("C04F7E83C27A82357D89A470B5", ("fE1cyRCC3ss4xP".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookVehicleDamageLog !="")
{
return hf2SYXTFKQf75sJ.webhookVehicleDamageLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("AF707EADB297AC9479A9C47C866F906952BA", ("KwKbAfESEoUCYv".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookVehicleInteractionLog !="")
{
return hf2SYXTFKQf75sJ.webhookVehicleInteractionLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("785C9ABE5BBBA0986491848B6AB95A7783C468895D", ("1Ebn8zgvmABD3B".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookVehicleInitializationLog !="")
{
return hf2SYXTFKQf75sJ.webhookVehicleInitializationLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("935A92BBAE804D5A9A7A637889B65F7F6D99B0B6", ("oVi1R2lePY1Z23".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookVehicleDisappearanceLog !="")
{
return hf2SYXTFKQf75sJ.webhookVehicleDisappearanceLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("60AE6E6D95B0799F6BAE", ("wyhJLs5FQCNeFk".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookBoatDamageLog !="")
{
return hf2SYXTFKQf75sJ.webhookBoatDamageLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("5D605E5D3E7E9ED07593A59ECF54634BB985", ("J5EhpUmTNpuKYi".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookBoatInitializationLog !="")
{
return hf2SYXTFKQf75sJ.webhookBoatInitializationLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("8E869DCA4AC6C14A7EC8717D729B81638E", ("prNeujbxbT0NTH".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookBoatDisappearanceLog !="")
{
return hf2SYXTFKQf75sJ.webhookBoatDisappearanceLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("56AC98ABB29487B0A9546C837BAFA2", ("6STF6aJyoB3WcB".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookItemTransactionLog !="")
{
return hf2SYXTFKQf75sJ.webhookItemTransactionLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("BB9682AA2D78777467BD", ("fJUTqnkNFMWPgx".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookItemDamageLog !="")
{
return hf2SYXTFKQf75sJ.webhookItemDamageLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("5F96C06FA396688E9CAF6BBA9465A362A053C69B", ("f1gwOuAWbViIi1".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookActionContinuousBaseLog !="")
{
return hf2SYXTFKQf75sJ.webhookActionContinuousBaseLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("5F6863BF659928AAA74540B663", ("mT8kO6lQzc4jJp".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookRecipeBaseLog !="")
{
return hf2SYXTFKQf75sJ.webhookRecipeBaseLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("B8BA757595658D9D5BA79ABC7E4DBE71", ("eZGpJAyY8eyCoS".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookFlagConstructionLog !="")
{
return hf2SYXTFKQf75sJ.webhookFlagConstructionLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("A79C4B9BA189645CBBC27E7BCE7FB5A247", ("BGqsNyELsS5Xjl".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookFlagDisappearanceLog !="")
{
return hf2SYXTFKQf75sJ.webhookFlagDisappearanceLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("C3A79A5CB4A3448598AD62BA9E72", ("kNKOmdxOfH0bE8".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookPlayerConnectDisconnect !="")
{
return hf2SYXTFKQf75sJ.webhookPlayerConnectDisconnect;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("81C7B3716E36528876", ("NZiFTtHQ5E86m1".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookActionBuildPartLog !="")
{
return hf2SYXTFKQf75sJ.webhookActionBuildPartLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("9B4CCC514B79A2B3AD5789536C", ("IItT9HLE0biDGG".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookActionDismantlePartLog !="")
{
return hf2SYXTFKQf75sJ.webhookActionDismantlePartLog;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
else if(logType==eBZPJbhecyrhWt("78B2BFD67BCC5CC2CC5F", ("emODSIv8Cpv4hq".Hash() + __LINE__.ToInt())))
{
if(hf2SYXTFKQf75sJ.webhookPlayerList !="")
{
return hf2SYXTFKQf75sJ.webhookPlayerList;
}
else 
{
return hf2SYXTFKQf75sJ.webhookUrl;
}
}
return hf2SYXTFKQf75sJ.webhookUrl;
}
};
class QFYH3HzFjRVMbpX
{
static bool qDWMD9yCW9aFGls(array<string>arr, string value)
{
for(int i=0;i<arr.Count();i++)
{
if(arr.Get(i)==value)
{
return true;
}
}
return false;
}
};
#endif
