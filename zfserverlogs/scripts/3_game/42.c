#ifdef SERVER
class y5ENgrSXFN218gK
{
bool customLogEnable=false;
int logPerSecond=10;
string customLogUrl="";
private static ref y5ENgrSXFN218gK s_Instance;
static const string CONFIG_DIR =CcbcDbgCoVslUm("51B5C47452B4844B51A76C018D9095A3BD995ABA7C52678B85", ("bHYzhCAia8grGw".Hash() + __LINE__.ToInt()));
static const string CONFIG_PATH=CONFIG_DIR + CcbcDbgCoVslUm("7F8A99AEA6A87374C48A7BC0B91389BD6668", ("ozWbY84jjjWNoX".Hash() + __LINE__.ToInt()));
void y5ENgrSXFN218gK(){}
static y5ENgrSXFN218gK oagEfgeI1VHzPPT()
{
if(!s_Instance){
Load();
}
return s_Instance;
}
protected static void Load()
{
if(!FileExist(CONFIG_DIR)){
MakeDirectory(CONFIG_DIR);
}
if(FileExist(CONFIG_PATH))
{
s_Instance=new y5ENgrSXFN218gK();
JsonFileLoader<y5ENgrSXFN218gK>.JsonLoadFile(CONFIG_PATH, s_Instance);
}
else 
{
s_Instance=new y5ENgrSXFN218gK();
s_Instance.customLogEnable=false;
s_Instance.logPerSecond=10;
s_Instance.customLogUrl="";
Save();
}
}
static void Save()
{
if(!s_Instance)return;
JsonFileLoader<y5ENgrSXFN218gK>.JsonSaveFile(CONFIG_PATH, s_Instance);
}
bool dDfagoQF78YtXqI()
{
return customLogEnable && customLogUrl !="";
}
}
#endif
