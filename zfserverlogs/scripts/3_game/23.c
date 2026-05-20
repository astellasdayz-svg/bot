#ifdef SERVER
class AgrnCu1q1B9KOJs
{
string mapName="";
bool enableCFTools=false;
bool showPlayersList=true;
int playersListIntervalMinutes=5;
bool playerDamageTextLog=true;
bool playerDiseaseTextLog=true;
bool playerBrokenLegsTextLog=true;
bool playerUnconsciousTextLog=true;
bool playerDeadTextLog=true;
bool showDeadPlayerItems=true;
bool playerCutsTextLog=true;
bool vehicleDamageTextLog=true;
bool vehicleInteractionTextLog=true;
bool vehicleInitializationTextLog=true;
bool vehicleDisappearanceTextLog=true;
bool boatDamageTextLog=true;
bool boatInitializationTextLog=true;
bool boatDisappearanceTextLog=true;
bool itemTransactionTextLog=true;
bool itemDamageTextLog=true;
bool actionContinuousBaseTextLog=true;
ref array<string>allowedactions=new array<string>;
bool recipeBaseTextLog=true;
ref array<string>allowedresipes=new array<string>;
bool flagConstructionTextLog=true;
bool flagDisappearanceTextLog=true;
bool actionBuildPartTextLog=true;
bool actionDismantlePartTextLog=true;
static const string CONFIG_DIR=UNCYuYPWJHrRoG("8056758168667B5B9398A8416130396CABAABC53846178B45E", ("hBObgVm0EAwUoP".Hash() + __LINE__.ToInt()));
static const string CONFIG_PATH=CONFIG_DIR + UNCYuYPWJHrRoG("529279548B6E508A6496B0888DCF5758", ("kzi9o7hNOX7L8B".Hash() + __LINE__.ToInt()));
static ref AgrnCu1q1B9KOJs instance;
static AgrnCu1q1B9KOJs oagEfgeI1VHzPPT()
{
if(!instance)
instance=Load();
return instance;
}
void Save()
{
if(!FileExist(CONFIG_DIR))
MakeDirectory(CONFIG_DIR);
JsonFileLoader<AgrnCu1q1B9KOJs>.JsonSaveFile(CONFIG_PATH, this);
}
static AgrnCu1q1B9KOJs Load()
{
AgrnCu1q1B9KOJs cfg=new AgrnCu1q1B9KOJs();
if(FileExist(CONFIG_PATH))
{
JsonFileLoader<AgrnCu1q1B9KOJs>.JsonLoadFile(CONFIG_PATH, cfg);
}
else 
{
cfg.playersListIntervalMinutes=5;
cfg.allowedactions.Insert(UNCYuYPWJHrRoG("4B6DAAB8825B328FB75D71B5BBB2", ("vBDCQ2tm97IOXO".Hash() + __LINE__.ToInt())));
cfg.allowedactions.Insert(UNCYuYPWJHrRoG("746758B8855688ADAD68782F9054A5795D", ("CHaqf9LEWBHkoO".Hash() + __LINE__.ToInt())));
cfg.allowedactions.Insert(UNCYuYPWJHrRoG("98B1CD669A5235946B9EB19E3AA8715E60C05E7193668E93A235CAC79898529C86BA", ("dKS61puvVIY5pM".Hash() + __LINE__.ToInt())));
cfg.allowedactions.Insert(UNCYuYPWJHrRoG("5949A1ADCE9C60CAA58DC47BABB7A46B86", ("pvblJdf8cmuPS4".Hash() + __LINE__.ToInt())));
cfg.allowedactions.Insert(UNCYuYPWJHrRoG("6BB4B79351702587B9B7A1B38D984C8D9D79", ("6Z1YCjjaYuCHW1".Hash() + __LINE__.ToInt())));
cfg.allowedactions.Insert(UNCYuYPWJHrRoG("5D8E64AAB84E9C70AA779B308085927989B4A4", ("SHAH89VRFpE4Lj".Hash() + __LINE__.ToInt())));
cfg.allowedresipes.Insert(UNCYuYPWJHrRoG("9D6354865F6A9FBD514EA64E927D9074", ("DvpCatxOPPu4TW".Hash() + __LINE__.ToInt())));
cfg.allowedresipes.Insert(UNCYuYPWJHrRoG("32594FC47C4C79905124A277B2665AB0C4", ("el7sGoT2kN3Mw0".Hash() + __LINE__.ToInt())));
cfg.Save();
}
return cfg;
}
};
#endif
