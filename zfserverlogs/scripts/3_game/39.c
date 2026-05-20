#ifdef SERVER
class CEDyDgRaVq769UH
{
static const string CONFIG_DIR =tGEZsnymZzDsbR("28C8B6967657927C4D95542EA96B609083587EC99F82578D3C", ("CTM1mafHFCWg8l".Hash() + __LINE__.ToInt()));
static const string CONFIG_PATH=CONFIG_DIR + tGEZsnymZzDsbR("894C5189A2698CA27ABFC0957789B34DA8739070", ("FJDO3xFZeNc8k9".Hash() + __LINE__.ToInt()));
bool enable=false;
string botToken="";
string defaultChatId="";
bool sendPlayerList=false;
string ChatIdSendPlayerList="";
int ThreadIdSendPlayerList=0;
bool playerDamageLog=false;
string ChatIdPlayerDamageLog="";
int ThreadIdPlayerDamageLog=0;
bool playerDiseaseLog=false;
string ChatIdPlayerDiseaseLog="";
int ThreadIdPlayerDiseaseLog=0;
bool playerBrokenLegsLog=false;
string ChatIdPlayerBrokenLegsLog="";
int ThreadIdPlayerBrokenLegsLog=0;
bool playerUnconsciousLog=false;
string ChatIdPlayerUnconsciousLog="";
int ThreadIdPlayerUnconsciousLog=0;
bool playerDeadLog=false;
bool sendDeadPlayerItems=false;
string ChatIdPlayerDeadLog="";
int ThreadIdPlayerDeadLog=0;
bool playerCutsLog=false;
string ChatIdPlayerCutsLog="";
int ThreadIdPlayerCutsLog=0;
bool vehicleDamageLog=false;
string ChatIdVehicleDamageLog="";
int ThreadIdVehicleDamageLog=0;
bool vehicleInteractionLog=false;
string ChatIdVehicleInteractionLog="";
int ThreadIdVehicleInteractionLog=0;
bool vehicleInitializationLog=false;
string ChatIdVehicleInitializationLog="";
int ThreadIdVehicleInitializationLog=0;
bool vehicleDisappearanceLog=false;
string ChatIdVehicleDisappearanceLog="";
int ThreadIdVehicleDisappearanceLog=0;
bool boatDamageLog=false;
string ChatIdBoatDamageLog="";
int ThreadIdBoatDamageLog=0;
bool boatInitializationLog=false;
string ChatIdBoatInitializationLog="";
int ThreadIdBoatInitializationLog=0;
bool boatDisappearanceLog=false;
string ChatIdBoatDisappearanceLog="";
int ThreadIdBoatDisappearanceLog=0;
bool itemTransactionLog=false;
string ChatIdItemTransactionLog="";
int ThreadIdItemTransactionLog=0;
bool itemDamageLog=false;
string ChatIdItemDamageLog="";
int ThreadIdItemDamageLog=0;
bool actionContinuousBaseLog=false;
string ChatIdActionContinuousBaseLog="";
int ThreadIdActionContinuousBaseLog=0;
ref array<string>allowedactions;
bool recipeBaseLog=false;
string ChatIdRecipeBaseLog="";
int ThreadIdRecipeBaseLog=0;
ref array<string>allowedresipes;
bool flagConstructionLog=false;
string ChatIdFlagConstructionLog="";
int ThreadIdFlagConstructionLog=0;
bool flagDisappearanceLog=false;
string ChatIdFlagDisappearanceLog="";
int ThreadIdFlagDisappearanceLog=0;
bool actionBuildPartLog=false;
string ChatIdBuildPartLog="";
int ThreadIdBuildPartLog=0;
bool actionDismantlePartLog=false;
string ChatIdDismantlePartLog="";
int ThreadIdDismantlePartLog=0;
bool chatLog=false;
string ChatIdChatLog="";
int ThreadIdChatLog=0;
bool playerconnect=false;
bool playerdisconnect=false;
string ChatIdPlayerConnectDisconnect="";
int ThreadIdPlayerConnectDisconnect=0;
protected static ref CEDyDgRaVq769UH me8RIlXrd1Ym260;
static CEDyDgRaVq769UH oagEfgeI1VHzPPT()
{
if(!me8RIlXrd1Ym260)
{
me8RIlXrd1Ym260=new CEDyDgRaVq769UH();
me8RIlXrd1Ym260.LoadOrCreateDefault();
}
return me8RIlXrd1Ym260;
}
void CEDyDgRaVq769UH()
{
allowedactions =new array<string>();
allowedresipes =new array<string>();
}
bool IsGlobalReady()
{
if(!enable)return false;
if(botToken=="")return false;
if(defaultChatId !="")return true;
if(HasAnyDedicatedChat())return true;
return false;
}
bool IsEnabledFor(string logType)
{
if(logType==tGEZsnymZzDsbR("7773B1BB8487887E55BE9751", ("y1q2Xt2qbg1naD".Hash() + __LINE__.ToInt())))return playerDamageLog;
if(logType==tGEZsnymZzDsbR("6BA4A7D34DA78961B3684D8688", ("xJNycQrFSGJQpU".Hash() + __LINE__.ToInt())))return playerDiseaseLog;
if(logType==tGEZsnymZzDsbR("5F92B0B485B7655ABB719E856694B96E", ("lz3dKuwflRSWel".Hash() + __LINE__.ToInt())))return playerBrokenLegsLog;
if(logType==tGEZsnymZzDsbR("B88C52A15F828ABE8A7FAE7CB9BDC373D2", ("3pa9iJvGekOu2k".Hash() + __LINE__.ToInt())))return playerUnconsciousLog;
if(logType==tGEZsnymZzDsbR("CD6DA195786F79A7BDB4", ("3WkVAwQI27Ec3H".Hash() + __LINE__.ToInt())))return playerDeadLog;
if(logType==tGEZsnymZzDsbR("B19F9162C189836F966C", ("r3qtIet8VyCPIR".Hash() + __LINE__.ToInt())))return playerCutsLog;
if(logType==tGEZsnymZzDsbR("B0875EAD8A95A176AC7B4CB4C1", ("WmM7T4Boq951m4".Hash() + __LINE__.ToInt())))return vehicleDamageLog;
if(logType==tGEZsnymZzDsbR("A59E9BB271B59F5BAFB9A17948A0544E748B", ("WbMMP8OWW8aYrI".Hash() + __LINE__.ToInt())))return vehicleInteractionLog;
if(logType==tGEZsnymZzDsbR("C27EB87F8E65728C5E98635D67C380CCBDCD909DC5", ("gxyfH67D7drBaP".Hash() + __LINE__.ToInt())))return vehicleInitializationLog;
if(logType==tGEZsnymZzDsbR("8E556C50949ABE82806B7C9FB1A1A663AC75564F", ("4CAqnx15oxFM01".Hash() + __LINE__.ToInt())))return vehicleDisappearanceLog;
if(logType==tGEZsnymZzDsbR("93526E5639B7A484C383", ("hA5E67wcFM6uqR".Hash() + __LINE__.ToInt())))return boatDamageLog;
if(logType==tGEZsnymZzDsbR("94534CB27065B77261B579916B77625FC658", ("VQfyAefrTf694b".Hash() + __LINE__.ToInt())))return boatInitializationLog;
if(logType==tGEZsnymZzDsbR("83B7A25448A9B884C39C7045C09E67B64B", ("cRa34KUxKhhuy6".Hash() + __LINE__.ToInt())))return boatDisappearanceLog;
if(logType==tGEZsnymZzDsbR("A1D3AB9FA2737C5D6896718786B283", ("1nIYHk3qhVNdAj".Hash() + __LINE__.ToInt())))return itemTransactionLog;
if(logType==tGEZsnymZzDsbR("78B2C3C2926C6E48A960", ("AcIa8LJ2mPgQu0".Hash() + __LINE__.ToInt())))return itemDamageLog;
if(logType==tGEZsnymZzDsbR("75637D857A9B556AA77197BBC98AC5612CBE8D68", ("sCFoINQGsz1AeE".Hash() + __LINE__.ToInt())))return actionContinuousBaseLog;
if(logType==tGEZsnymZzDsbR("6F718A7EAFBD2688A54E", ("sdOr7AwDvJBkr3".Hash() + __LINE__.ToInt())))return recipeBaseLog;
if(logType==tGEZsnymZzDsbR("9DB4BC634787AFCBBAAD9D4E787F81BE", ("HqqOT0PcGAU9SS".Hash() + __LINE__.ToInt())))return flagConstructionLog;
if(logType==tGEZsnymZzDsbR("5CB75F4D9577B9C057A57B75BE4E608D61", ("kRtfwR8XBEF5Db".Hash() + __LINE__.ToInt())))return flagDisappearanceLog;
if(logType==tGEZsnymZzDsbR("A7BA6B56", ("UGYsFAmyDOsAed".Hash() + __LINE__.ToInt())))return chatLog;
if(logType==tGEZsnymZzDsbR("685D8375A0C956528D6F7FAF61", ("fbzkBp0BILTZ80".Hash() + __LINE__.ToInt())))return playerconnect;
if(logType==tGEZsnymZzDsbR("77646BBF5F854283C27FA5A166BD4382", ("mvTVNBpUvQ3OZA".Hash() + __LINE__.ToInt())))return playerdisconnect;
if(logType==tGEZsnymZzDsbR("77CA93519F64AA9057", ("Eotjr6QPf1mLYI".Hash() + __LINE__.ToInt())))return actionBuildPartLog;
if(logType==tGEZsnymZzDsbR("827992A26B725691C38955586C", ("IAIaACosPtH5pk".Hash() + __LINE__.ToInt())))return actionDismantlePartLog;
if(logType==tGEZsnymZzDsbR("73758AD16D579A5AC092", ("IvmiEoTeQUoLcE".Hash() + __LINE__.ToInt())))return sendPlayerList;
return false;
}
string GetChatIdFor(string logType)
{
string id="";
if(logType==tGEZsnymZzDsbR("C79A546950C989ACC586BA86", ("uEPzwSJr2xEWXd".Hash() + __LINE__.ToInt())))id=ChatIdPlayerDamageLog;
else if(logType==tGEZsnymZzDsbR("B5568383AFB982AC9E5F71C4A4", ("Q1JSiWdVi8vLzg".Hash() + __LINE__.ToInt())))id=ChatIdPlayerDiseaseLog;
else if(logType==tGEZsnymZzDsbR("72A374A294B18C5AC0CA59656EB572B9", ("5JZuVjnAWjfGAn".Hash() + __LINE__.ToInt())))id=ChatIdPlayerBrokenLegsLog;
else if(logType==tGEZsnymZzDsbR("B9745D884C5BA1A677C4897C627578945A", ("kd8Xaym0ch6Kl3".Hash() + __LINE__.ToInt())))id=ChatIdPlayerUnconsciousLog;
else if(logType==tGEZsnymZzDsbR("51C28A8F7ED061B18A66", ("STmZCLFvKGs36K".Hash() + __LINE__.ToInt())))id=ChatIdPlayerDeadLog;
else if(logType==tGEZsnymZzDsbR("A1A989BA93AA6F79757A", ("mYqYyHJ2PCQe8n".Hash() + __LINE__.ToInt())))id=ChatIdPlayerCutsLog;
else if(logType==tGEZsnymZzDsbR("856864C7534E8D6F42509B9C5C", ("tkl6DkVOrTVlVG".Hash() + __LINE__.ToInt())))id=ChatIdVehicleDamageLog;
else if(logType==tGEZsnymZzDsbR("B5506E727885A7318765746B6E8583BE83CD", ("vrEpwFExpQsCZW".Hash() + __LINE__.ToInt())))id=ChatIdVehicleInteractionLog;
else if(logType==tGEZsnymZzDsbR("C69472924AA256645273A258AD65A8A663A2715A6E", ("JEbomzsxND6TM2".Hash() + __LINE__.ToInt())))id=ChatIdVehicleInitializationLog;
else if(logType==tGEZsnymZzDsbR("6A965E7AC2536869598980A2BC5B59C186914B83", ("qBXYhQHegTmY06".Hash() + __LINE__.ToInt())))id=ChatIdVehicleDisappearanceLog;
else if(logType==tGEZsnymZzDsbR("51545BCB2B4BC879BA5D", ("q4OxHRAxZ3MVkK".Hash() + __LINE__.ToInt())))id=ChatIdBoatDamageLog;
else if(logType==tGEZsnymZzDsbR("747589588469518378A367688E87B04B6B75", ("2NfN04uQQcE8Yr".Hash() + __LINE__.ToInt())))id=ChatIdBoatInitializationLog;
else if(logType==tGEZsnymZzDsbR("69505F98A196817EC8C4A17378BF50BDAA", ("bQfal6NuzMJpi6".Hash() + __LINE__.ToInt())))id=ChatIdBoatDisappearanceLog;
else if(logType==tGEZsnymZzDsbR("8B7A8D6942B9AF6A69577E76676276", ("juFiJcjTVzEuDU".Hash() + __LINE__.ToInt())))id=ChatIdItemTransactionLog;
else if(logType==tGEZsnymZzDsbR("866261928BBF828E78C0", ("umNNvOOt1orBLl".Hash() + __LINE__.ToInt())))id=ChatIdItemDamageLog;
else if(logType==tGEZsnymZzDsbR("99937482AC69A0AB6BA6A55ACBB7605D83459DAD", ("2lGX35CJBHZhr7".Hash() + __LINE__.ToInt())))id=ChatIdActionContinuousBaseLog;
else if(logType==tGEZsnymZzDsbR("85BBA7A1CC9793568750", ("YRhs1f8sjakCTC".Hash() + __LINE__.ToInt())))id=ChatIdRecipeBaseLog;
else if(logType==tGEZsnymZzDsbR("8A9D9F7D6EB77299C06C78527C8F7DAD", ("Q5i3RW7zsbWs4I".Hash() + __LINE__.ToInt())))id=ChatIdFlagConstructionLog;
else if(logType==tGEZsnymZzDsbR("BFBE5DA77275BD56B2C28745776FC38D64", ("wdg7uipZxlIOkB".Hash() + __LINE__.ToInt())))id=ChatIdFlagDisappearanceLog;
else if(logType==tGEZsnymZzDsbR("56BC755B", ("3ffkLNzYKZFtt6".Hash() + __LINE__.ToInt())))id=ChatIdChatLog;
else if(logType==tGEZsnymZzDsbR("5E7BBBA55DB48A519F7EAA7BC4", ("NUyaGXHr1iik8m".Hash() + __LINE__.ToInt())) || logType==tGEZsnymZzDsbR("56B487BB63B77086BB5B9B946D5F5357", ("Ke0CSeJwkiR9nh".Hash() + __LINE__.ToInt())))id=ChatIdPlayerConnectDisconnect;
else if(logType==tGEZsnymZzDsbR("9B9FA757448645B5A9", ("ue0MLNqEhAwCAN".Hash() + __LINE__.ToInt())))id=ChatIdBuildPartLog;
else if(logType==tGEZsnymZzDsbR("89BEBB52AE776D734698595C58", ("BCo1GnyQu10fwW".Hash() + __LINE__.ToInt())))id=ChatIdDismantlePartLog;
else if(logType==tGEZsnymZzDsbR("A7948B71475D68C8606C", ("UAomA1mautBMJN".Hash() + __LINE__.ToInt())))id=ChatIdSendPlayerList;
if(id=="" && defaultChatId !="")
{
id=defaultChatId;
}
return id;
}
int GetThreadIdFor(string logType)
{
int id=0;
if(logType==tGEZsnymZzDsbR("5DAAA75A5B6793B9A56D9BC2", ("icjbf9LRogyepT".Hash() + __LINE__.ToInt())))return ThreadIdPlayerDamageLog;
if(logType==tGEZsnymZzDsbR("5B88966A90976C8259865456A7", ("uqbBVsrMu38Te7".Hash() + __LINE__.ToInt())))return ThreadIdPlayerDiseaseLog;
if(logType==tGEZsnymZzDsbR("7795B072B98F58827460BAC2445FC1D1", ("68M6woY6KzDI1X".Hash() + __LINE__.ToInt())))return ThreadIdPlayerBrokenLegsLog;
if(logType==tGEZsnymZzDsbR("CC9884C1BB863D9556AC86CA964C6A6A61", ("W8h1bmh7mVAQHv".Hash() + __LINE__.ToInt())))return ThreadIdPlayerUnconsciousLog;
if(logType==tGEZsnymZzDsbR("669BA7AA4B8F287BB27F", ("2CaQ4pH8RwLSaJ".Hash() + __LINE__.ToInt())))return ThreadIdPlayerDeadLog;
if(logType==tGEZsnymZzDsbR("C1B5BBBBC0844872CBBF", ("WU6U7pLsh5gsrx".Hash() + __LINE__.ToInt())))return ThreadIdPlayerCutsLog;
if(logType==tGEZsnymZzDsbR("C5659A545056B34B4E9696C462", ("zVe11QCf23taR4".Hash() + __LINE__.ToInt())))return ThreadIdVehicleDamageLog;
if(logType==tGEZsnymZzDsbR("6F53C3C76684C27E7DBE59AFA559AC5A9764", ("WHduWCnflAvD4i".Hash() + __LINE__.ToInt())))return ThreadIdVehicleInteractionLog;
if(logType==tGEZsnymZzDsbR("616274C8A457715C5B77C17C70757CA6818B5892BA", ("Bb6ePP2xZ60rZb".Hash() + __LINE__.ToInt())))return ThreadIdVehicleInitializationLog;
if(logType==tGEZsnymZzDsbR("B266A3608BA74A9E58CB9B51885261918E607A6B", ("3LIGb3e7tSEUaV".Hash() + __LINE__.ToInt())))return ThreadIdVehicleDisappearanceLog;
if(logType==tGEZsnymZzDsbR("56B0509A746D8B97A75C", ("bPGVW6WaS3Tdk2".Hash() + __LINE__.ToInt())))return ThreadIdBoatDamageLog;
if(logType==tGEZsnymZzDsbR("50847760A85A96688551A48FBA90586851C2", ("DOdVHMTWKBqfC9".Hash() + __LINE__.ToInt())))return ThreadIdBoatInitializationLog;
if(logType==tGEZsnymZzDsbR("7BC58DB9338482A358857E4275709C9478", ("HeoYKn9c2SYOP6".Hash() + __LINE__.ToInt())))return ThreadIdBoatDisappearanceLog;
if(logType==tGEZsnymZzDsbR("82BC9BA05877BC87665AB8D1847773", ("pdxNf6L8KvAnUT".Hash() + __LINE__.ToInt())))return ThreadIdItemTransactionLog;
if(logType==tGEZsnymZzDsbR("7469994D80454F767AAA", ("r3rg7K824WfMuu".Hash() + __LINE__.ToInt())))return ThreadIdItemDamageLog;
if(logType==tGEZsnymZzDsbR("5FB86A5D5FA581596B55AD9068BF9A6C4EA4A55F", ("sSDdgjv6IbGZrK".Hash() + __LINE__.ToInt())))return ThreadIdActionContinuousBaseLog;
if(logType==tGEZsnymZzDsbR("71A07A736D6544AA9C7B", ("HepYP6WPnIKdQI".Hash() + __LINE__.ToInt())))return ThreadIdRecipeBaseLog;
if(logType==tGEZsnymZzDsbR("A6C37DB2938FB463CA74858A5B55966C", ("ZnR8KwxeIiRNdt".Hash() + __LINE__.ToInt())))return ThreadIdFlagConstructionLog;
if(logType==tGEZsnymZzDsbR("A29FBE90877090AD85C3C14A54B8657F49", ("oFkzEkkaa4cyja".Hash() + __LINE__.ToInt())))return ThreadIdFlagDisappearanceLog;
if(logType==tGEZsnymZzDsbR("74A89C82", ("J8fNfyh0lYfGNz".Hash() + __LINE__.ToInt())))return ThreadIdChatLog;
if(logType==tGEZsnymZzDsbR("BB63567159A1476F809FA37C83", ("NhJfui9plYj0Dl".Hash() + __LINE__.ToInt())))return ThreadIdPlayerConnectDisconnect;
if(logType==tGEZsnymZzDsbR("755E7B5FC36830896455B962AF8D4E84", ("fEr7q7EqBS1O5l".Hash() + __LINE__.ToInt())))return ThreadIdPlayerConnectDisconnect;
else if(logType==tGEZsnymZzDsbR("9DD27976983C8E6C86", ("7DiEwVETECOKHL".Hash() + __LINE__.ToInt())))id=ThreadIdBuildPartLog;
else if(logType==tGEZsnymZzDsbR("496F66B7A3689BB56441A6587B", ("4bM1DQlkz0jqVl".Hash() + __LINE__.ToInt())))id=ThreadIdDismantlePartLog;
else if(logType==tGEZsnymZzDsbR("7B9B5C877FA97DB47DAD", ("dU80JXD4rWVltZ".Hash() + __LINE__.ToInt())))id=ThreadIdSendPlayerList;
return id;
}
protected void LoadOrCreateDefault()
{
EnsureConfigDir();
if(FileExist(CONFIG_PATH)){
JsonFileLoader<CEDyDgRaVq769UH>.JsonLoadFile(CONFIG_PATH, this);
if(!allowedactions)allowedactions=new array<string>();
if(!allowedresipes)allowedresipes=new array<string>();
return;
}
enable=false;
botToken="";
defaultChatId="";
sendPlayerList=false;ChatIdSendPlayerList="";ThreadIdSendPlayerList=0;
playerDamageLog=false;ChatIdPlayerDamageLog="";ThreadIdPlayerDamageLog=0;
playerDiseaseLog=false;ChatIdPlayerDiseaseLog="";ThreadIdPlayerDiseaseLog=0;
playerBrokenLegsLog=false;ChatIdPlayerBrokenLegsLog="";ThreadIdPlayerBrokenLegsLog=0;
playerUnconsciousLog=false;ChatIdPlayerUnconsciousLog="";ThreadIdPlayerUnconsciousLog=0;
playerDeadLog=false;sendDeadPlayerItems=false;ChatIdPlayerDeadLog="";ThreadIdPlayerDeadLog=0;
playerCutsLog=false;ChatIdPlayerCutsLog="";ThreadIdPlayerCutsLog=0;
vehicleDamageLog=false;ChatIdVehicleDamageLog="";ThreadIdVehicleDamageLog=0;
vehicleInteractionLog=false;ChatIdVehicleInteractionLog="";ThreadIdVehicleInteractionLog=0;
vehicleInitializationLog=false;ChatIdVehicleInitializationLog="";ThreadIdVehicleInitializationLog=0;
vehicleDisappearanceLog=false;ChatIdVehicleDisappearanceLog="";ThreadIdVehicleDisappearanceLog=0;
boatDamageLog=false;ChatIdBoatDamageLog="";ThreadIdBoatDamageLog=0;
boatInitializationLog=false;ChatIdBoatInitializationLog="";ThreadIdBoatInitializationLog=0;
boatDisappearanceLog=false;ChatIdBoatDisappearanceLog="";ThreadIdBoatDisappearanceLog=0;
itemTransactionLog=false;ChatIdItemTransactionLog="";ThreadIdItemTransactionLog=0;
itemDamageLog=false;ChatIdItemDamageLog="";ThreadIdItemDamageLog=0;
actionContinuousBaseLog=false;ChatIdActionContinuousBaseLog="";ThreadIdActionContinuousBaseLog=0;
if(!allowedactions)allowedactions=new array<string>();
recipeBaseLog=false;ChatIdRecipeBaseLog="";ThreadIdRecipeBaseLog=0;
if(!allowedresipes)allowedresipes=new array<string>();
flagConstructionLog=false;ChatIdFlagConstructionLog="";ThreadIdFlagConstructionLog=0;
flagDisappearanceLog=false;ChatIdFlagDisappearanceLog="";ThreadIdFlagDisappearanceLog=0;
actionBuildPartLog=false;ChatIdBuildPartLog="";ThreadIdBuildPartLog=0;
actionDismantlePartLog=false;ChatIdDismantlePartLog="";ThreadIdDismantlePartLog=0;
chatLog=false;ChatIdChatLog="";ThreadIdChatLog=0;
playerconnect=false;
playerdisconnect=false;
ChatIdPlayerConnectDisconnect="";ThreadIdPlayerConnectDisconnect=0;
Save();
}
protected void EnsureConfigDir()
{
if(!FileExist(CONFIG_DIR)){
MakeDirectory(CONFIG_DIR);
}
}
protected bool HasAnyDedicatedChat()
{
if(ChatIdPlayerDamageLog !="")return true;
if(ChatIdPlayerDiseaseLog !="")return true;
if(ChatIdPlayerBrokenLegsLog !="")return true;
if(ChatIdPlayerUnconsciousLog !="")return true;
if(ChatIdPlayerDeadLog !="")return true;
if(ChatIdPlayerCutsLog !="")return true;
if(ChatIdVehicleDamageLog !="")return true;
if(ChatIdVehicleInteractionLog !="")return true;
if(ChatIdVehicleInitializationLog !="")return true;
if(ChatIdVehicleDisappearanceLog !="")return true;
if(ChatIdBoatDamageLog !="")return true;
if(ChatIdBoatInitializationLog !="")return true;
if(ChatIdBoatDisappearanceLog !="")return true;
if(ChatIdItemTransactionLog !="")return true;
if(ChatIdItemDamageLog !="")return true;
if(ChatIdActionContinuousBaseLog !="")return true;
if(ChatIdRecipeBaseLog !="")return true;
if(ChatIdFlagConstructionLog !="")return true;
if(ChatIdFlagDisappearanceLog !="")return true;
if(ChatIdBuildPartLog !="")return true;
if(ChatIdDismantlePartLog !="")return true;
if(ChatIdChatLog !="")return true;
if(ChatIdPlayerConnectDisconnect !="")return true;
if(ChatIdSendPlayerList !="")return true;
return false;
}
void Save()
{
JsonFileLoader<CEDyDgRaVq769UH>.JsonSaveFile(CONFIG_PATH, this);
}
}
#endif
