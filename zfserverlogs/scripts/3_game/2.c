#ifdef SERVER
static ref d3D3KiARKRr4HwO managers;
class d3D3KiARKRr4HwO 
{
private ref kVE2219y2FTxws6 rsuSYfdfThqoiMm=new kVE2219y2FTxws6();
private string logFolderPath;
private string logFileName;
static bool m_WasLogged=false;
private ref AgrnCu1q1B9KOJs wRTasJwH43kcdVD=AgrnCu1q1B9KOJs.oagEfgeI1VHzPPT();
private ref Ka3twBqOg4314Jv Fe29gzYedsjdJvA=Ka3twBqOg4314Jv.oagEfgeI1VHzPPT();
private ref CEDyDgRaVq769UH aCcT4vkDiTPABcf=CEDyDgRaVq769UH.oagEfgeI1VHzPPT();
private ref y5ENgrSXFN218gK xDmD2RfOzrPQ9lJ=y5ENgrSXFN218gK.oagEfgeI1VHzPPT();
static ref d3D3KiARKRr4HwO managers;
ref map<string, int>TgJkL1LBCuhPatn;
static d3D3KiARKRr4HwO Get()
{
if(!managers)
{
managers=new d3D3KiARKRr4HwO();
}
return managers;
}
void d3D3KiARKRr4HwO()
{
logFolderPath=WhaJaboBYkFwug("307671764BC4A7B576655EA1748755C55BC543584F", ("WiHQ8nhAtKnAQS".Hash() + __LINE__.ToInt()));
if(!FileExist(logFolderPath))
{
MakeDirectory(logFolderPath);
}
logFileName=logFolderPath + WhaJaboBYkFwug("A268B877C0A6A589AA7FB57DA962937A", ("6ahpNYLvyXPugC".Hash() + __LINE__.ToInt())) + GetTimestamp()+ WhaJaboBYkFwug("8972915D", ("bSkNRXClRujlnN".Hash() + __LINE__.ToInt()));
CreateNewLogFile(logFileName);
int interval=1;
if(wRTasJwH43kcdVD && wRTasJwH43kcdVD.playersListIntervalMinutes>0)
{
interval=wRTasJwH43kcdVD.playersListIntervalMinutes;
}
if(wRTasJwH43kcdVD.showPlayersList)
{
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.eRtOHr9YyH1P4Bo,interval * 60000,true);
}
}
private void CreateNewLogFile(string fileName)
{
FileHandle logFile=OpenFile(fileName, FileMode.WRITE);
if(logFile !=0)
{
            FPrintln(logFile, "=== " + g_LocalizationManager.start + " " + GetTimestamp()+ " ===\n=== " + g_LocalizationManager.end + " ===");
CloseFile(logFile);
}
}
static string GetTimestamp()
{
int year, month, day, hour, minute, second;
GetYearMonthDay(year, month, day);
GetHourMinuteSecond(hour, minute, second);
return WhaJaboBYkFwug("46", ("TmP7jE1m6CiH2O".Hash() + __LINE__.ToInt())) + day.ToStringLen(2)+ WhaJaboBYkFwug("2D", ("DHcmP4VsEfIost".Hash() + __LINE__.ToInt())) + month.ToStringLen(2)+ WhaJaboBYkFwug("77", ("scnwQqXj8pA7A7".Hash() + __LINE__.ToInt())) + year.ToStringLen(4)+ WhaJaboBYkFwug("8E695507", ("bGXMQra5FF1FaC".Hash() + __LINE__.ToInt())) + hour.ToStringLen(2)+ WhaJaboBYkFwug("99", ("SSxovkwQMouDpI".Hash() + __LINE__.ToInt())) + minute.ToStringLen(2)+ WhaJaboBYkFwug("26", ("zvvoRar5dMIgzK".Hash() + __LINE__.ToInt())) + second.ToStringLen(2);
}
static void SetLogged(bool state)
{
m_WasLogged=state;
}
static bool WasLogged()
{
return m_WasLogged;
}
static void ResetLogged()
{
m_WasLogged=false;
}
static Man GetPlayerByIdentity(string steamID)
{
if(steamID=="")return null;
array<Man>players=new array<Man>();
GetGame().GetPlayers(players);
foreach(Man m:players){
if(!m)continue;
PlayerIdentity id=m.GetIdentity();
if(!id)continue;
if(id.GetPlainId()==steamID){
return m;
}
}
return null;
}
string rnWtKLKkNRcJpHv()
{
string baseUrl=WhaJaboBYkFwug("BAAD8366C021653A6282D0D031B289C049766D2E", ("q9ILjE4kDbSGgC".Hash() + __LINE__.ToInt()));
switch(wRTasJwH43kcdVD.mapName)
{
case WhaJaboBYkFwug("64A07C95859B879DC0", ("kwPQfbyDZdFggJ".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("24BAA67C677B80B1A840", ("pM23zwYs2FBtAG".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("7B867768C9697F", ("H5t4OyOs9SDASS".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("71B98C8774AA6B118BA0975158B698CD4A", ("XCV7FtLmPFBF6n".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("566F706374A8", ("bmEYKMtc1utsAM".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("5CBA978371505ABD576443636AC8AC89", ("jZ44mFTWFMBNOY".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("8ABC838A724DAD", ("FYGe3t0JAr3WUu".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("77CA58A8A968AE2E6170B9A8904ACB9137", ("JoAh5RvVuzZknh".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("58659860CAA3887C", ("sPHUhr9arBmRNk".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("886C9E82A8AC834721BEC6B49DB1B7929B51", ("2CmyA79CIvbtg0".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("7672B67F5C987C", ("wpcLhHFTCulDQB".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("C071A96CB6904B7253B258A8846691AB78", ("wEF4IIZaqdaCRU".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("4D62CCCB4F7C9EAABD", ("9jg1rgSpDDyzkD".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("C085D2AC95A19D695572937CB14A82C17B8A3D", ("FeOomxkTa0AYAF".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("5ECCB47F527C", ("sJsVzNgFgeVLzc".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("AFCB516083A70FCBC95B72B05D558254", ("gY9H0BlxauDyHh".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("47959B91B68E", ("ZLMD6GUwC6obDi".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("4FA579845B6E69747A64717B5355A542", ("mWzWDJ2VycxUHO".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("7855BE4F64", ("Di5uHbf81zvLPm".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("587C6393B13BAB7178AF85AF888943", ("rDHLWlCzJkK5vx".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("96938C6883B77F7771C3", ("8ro2KxIfF7aiPh".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("AC877F8BB3AB7C5477982BBD6A5052CD8D505E27", ("v8UGsex9wyX50G".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("27B58558945B7151", ("F6JWhO50Akckj8".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("B69D9956776FBB962378B09B69739F7B6A3D", ("34l349Ijhv0RGo".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("77B16B5BC3757A89", ("6Cm0siGStthsW2".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("4E87A99A50B857885362936C478D8290608F", ("YxLMyyckEp3TgT".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("3669C47D606662B5", ("fvDEIoATbGawxn".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("697CA4B08AD1629E276E996670774D697D6E", ("dUfGgRT62oQ6VU".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("606973C4B3AC6E", ("yQ69TSFdAYIxgG".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("50A8C84C9690C00CBFC16F488B5A859496", ("aRMT9ezGh5t8Dv".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("4CB25BA299", ("PnNtqZT5XQMH15".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("888956C35515BFBF70B3CD76B5B872", ("zAAhOkOktb7UvO".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("45A8D25F946D4E4066C4A2A47A9489", ("DFveoMO1IJqzNK".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("8CB8795E6F4E5B037067875666C17CA57B", ("bhzlRfKmVWQofQ".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("3982AEC76FD07D", ("uP4eG78PNitWfj".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("909251C5569C7B23A7BD80BA86B694A284", ("75vFbSUzH9fxpy".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("79917A684F5760", ("LSsjrjexO24VG4".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("5CA57168BFC45203A18D5179BE77737083", ("y7TrOkkrWafsNh".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("5E2859968367B4A4C3A8C18D", ("1FbGwkG6dA8nld".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("8E9449B18463AE6B949BC95F694F76B8A692865D7D", ("rRnUH01HEUBBHe".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("7B7184966CADC186BF", ("lRPaPRkl9OoDiK".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("5A7FA5A384B9B1535228724F90A1A652C16A2C", ("xGtTYWxmnA0q0T".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("87558A6495A96D", ("TAGl2HCodzL7Ad".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("CB7D4D7682B899077E6F4648D171C0B794", ("fBdVG2H0DFhe7q".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("A37943", ("mqPWWGPaIZpt15".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("61A29C74AC6BA94EC388B68A2D", ("RaqDugQOGKQrcJ".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("538862A9A54A94", ("JKmGvqyDigAjqi".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("539F4C94809C7110B0925542698D5FA77A", ("mF0IqU45HotTYN".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("7467A877C6", ("tHOZJ3DfIvCRbX".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("A49B638DB33D77A479AC7C7188A24C", ("dkETK3PhPegKF6".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("5A4495", ("c3TmpSvDktRSsu".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("54615B176B9D734E7449C5847D", ("FqrcDb8fKWKkgm".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("636D72AE52CB", ("1eDminLMbUK19G".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("5FC16DC4515E61A271AB6ABEAF87B692", ("lMtFbvcOZ4AsqS".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("8F9B52C97A7357", ("enEA9HCpuzEIFb".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("9E447F647282B557B9AF8876C479969D46", ("qKAtqagSHoCay1".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("8D998382A6707431788A99C87E", ("UivhrwNKcJKbkX".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("A0608C5E66CB50C0549E4E687560586E697F9D9B816C", ("kTE4SZY9ecR2BE".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("809450B66BC3A4B80D7A7CD0C4", ("lJ57d3QQYCAJJI".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("9C448B8667704E525B5066CD1E9AAE8A9276BDA9B65D", ("FzuwfNGMB6Tvaz".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("43B499695B9FC4", ("3xNztBPOWAjc8v".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("C8A2936D6D8B55709E6D68656070569E25", ("XyQYz0aEbFNN3M".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("42847569", ("BcwATK4AbQKDVs".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("8BAA909503798C8A85A19F7ABA30", ("dKPCgPtjxD3dwG".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("9199D278C44D489B63", ("vPVeb2Qc0Hoedt".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("6979BEB357A18A76B371A5C0B5A88177897F5C", ("IXxwhDf6vSByms".Hash() + __LINE__.ToInt()));
case WhaJaboBYkFwug("808EC198B95C", ("Ts5YamhbMA8NSm".Hash() + __LINE__.ToInt())):
return baseUrl + WhaJaboBYkFwug("90BF79C489B93D8FA5C24856A1A1A240", ("P886UrpNgIdqqC".Hash() + __LINE__.ToInt()));
default:
return baseUrl + WhaJaboBYkFwug("0B6B547F64ACB9608655", ("2hXdPdthdC8aXr".Hash() + __LINE__.ToInt()));
}
return baseUrl + WhaJaboBYkFwug("825FA483A39A8C827073", ("adRqIdVT7iPt7q".Hash() + __LINE__.ToInt()));
}
static string eEkrV1tmTPjmzHR(string input)
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
void EEeAxjskc0d1cre(string type, map<string, string>yUanCaXUkY2LFD2)
{
if(!xDmD2RfOzrPQ9lJ || !xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()|| !g_ZFCustomQueue)return;
		string json="{";
		json +="\"timestamp\":\"" + eEkrV1tmTPjmzHR(GetTimestamp())+ "\",";
		json +="\"type\":\"" + eEkrV1tmTPjmzHR(type)+ "\"";
if(yUanCaXUkY2LFD2){
for(int i=0;i<yUanCaXUkY2LFD2.Count();i++)
{
string key  =eEkrV1tmTPjmzHR(yUanCaXUkY2LFD2.GetKey(i));
string value=eEkrV1tmTPjmzHR(yUanCaXUkY2LFD2.GetElement(i));
				json +=",\"" + key + "\":\"" + value + "\"";
}
}
		json +="}";
g_ZFCustomQueue.riOE6ARQ1IpLXTD(json);
}
void LuGa8qKmtkdw6yH(string aL4DU8IbSc9T8Q6, string KNS6FWTneIbvNL9, string zN3BRfGLVMPBlsX, int kNBss0tfdaUIog4, vector cgrUl5xHFvQppYq, string HYV9teEzv4ZEPYP)
{
P34dVbDvvXPvQh3();
string wCzH2Lmw23WJnGA=aL4DU8IbSc9T8Q6 + WhaJaboBYkFwug("50", ("JpcHgItBZWmDSr".Hash() + __LINE__.ToInt())) + zN3BRfGLVMPBlsX;
int gyboB5yfwp32pJw=0;
if(TgJkL1LBCuhPatn.Contains(wCzH2Lmw23WJnGA)){
gyboB5yfwp32pJw=TgJkL1LBCuhPatn.Get(wCzH2Lmw23WJnGA);
}
if(gyboB5yfwp32pJw==kNBss0tfdaUIog4)return;
TgJkL1LBCuhPatn.Set(wCzH2Lmw23WJnGA, kNBss0tfdaUIog4);
string uOMQ0cHinOQEFNk;
string jNCuhANOc6xbo5u;
if(zN3BRfGLVMPBlsX==WhaJaboBYkFwug("6D6B4696A98467D975", ("RGmnbhvm3BwqBz".Hash() + __LINE__.ToInt())))
{
if(gyboB5yfwp32pJw==0 && kNBss0tfdaUIog4==1){
uOMQ0cHinOQEFNk=g_LocalizationManager.infectedWithDisease + WhaJaboBYkFwug("26", ("s1LqSSBHN6c3ox".Hash() + __LINE__.ToInt())) + g_LocalizationManager.influenza;
}
else if(gyboB5yfwp32pJw==1 && kNBss0tfdaUIog4==2){
uOMQ0cHinOQEFNk=g_LocalizationManager.fluToPneumonia;
}
else if(gyboB5yfwp32pJw==2 && kNBss0tfdaUIog4==1){
uOMQ0cHinOQEFNk=g_LocalizationManager.pneumoniaToFlu;
}
else if(gyboB5yfwp32pJw==1 && kNBss0tfdaUIog4==0){
uOMQ0cHinOQEFNk=g_LocalizationManager.recoveredFromDisease + WhaJaboBYkFwug("09", ("KCquzBeaguf3A2".Hash() + __LINE__.ToInt())) + g_LocalizationManager.influenza;
}
else if(gyboB5yfwp32pJw==2 && kNBss0tfdaUIog4==0){
uOMQ0cHinOQEFNk=g_LocalizationManager.recoveredFromDisease + WhaJaboBYkFwug("5F", ("0SLiy4B8iMfk0f".Hash() + __LINE__.ToInt())) + g_LocalizationManager.pneumonia;
}
}
else
{
if(zN3BRfGLVMPBlsX==WhaJaboBYkFwug("5E766CB55BB372B44E627E5D", ("XRNO9Hb5eURGCs".Hash() + __LINE__.ToInt()))){
jNCuhANOc6xbo5u=g_LocalizationManager.braindisease;
}
else if(zN3BRfGLVMPBlsX==WhaJaboBYkFwug("4CB6C488B59A6C", ("PNKUcCq8XaVxN5".Hash() + __LINE__.ToInt()))){
jNCuhANOc6xbo5u=g_LocalizationManager.cholera;
}
else if(zN3BRfGLVMPBlsX==WhaJaboBYkFwug("77CAA7AA9A9CBB72776E", ("bBVV6ZMZjnKBmY".Hash() + __LINE__.ToInt()))){
jNCuhANOc6xbo5u=g_LocalizationManager.commoncold;
}
else if(zN3BRfGLVMPBlsX==WhaJaboBYkFwug("686F7F89AA8F765C9759", ("Vmn5VaV6DLHpSw".Hash() + __LINE__.ToInt()))){
jNCuhANOc6xbo5u=g_LocalizationManager.salmonella;
}
else if(zN3BRfGLVMPBlsX==WhaJaboBYkFwug("9161A8B8ABC86B788B95A994BB", ("RZJ8EDqhxY6sOa".Hash() + __LINE__.ToInt()))){
if(kNBss0tfdaUIog4==1)jNCuhANOc6xbo5u=g_LocalizationManager.chemicalInfectionLevel1;
else if(kNBss0tfdaUIog4==2)jNCuhANOc6xbo5u=g_LocalizationManager.chemicalInfectionLevel2;
else if(kNBss0tfdaUIog4==3)jNCuhANOc6xbo5u=g_LocalizationManager.chemicalInfectionLevel3;
else if(kNBss0tfdaUIog4==0)jNCuhANOc6xbo5u=g_LocalizationManager.chemicalInfection;
}
else if(zN3BRfGLVMPBlsX==WhaJaboBYkFwug("AE459E60CA6BAB6DBB79", ("TRRlobmMGGKn3F".Hash() + __LINE__.ToInt()))){
if(kNBss0tfdaUIog4==1)jNCuhANOc6xbo5u=g_LocalizationManager.heavyMetalStage1;
else if(kNBss0tfdaUIog4==2)jNCuhANOc6xbo5u=g_LocalizationManager.heavyMetalStage2;
else if(kNBss0tfdaUIog4==3)jNCuhANOc6xbo5u=g_LocalizationManager.heavyMetalStage3;
else if(kNBss0tfdaUIog4==0)jNCuhANOc6xbo5u=g_LocalizationManager.heavyMetal;
}
else if(zN3BRfGLVMPBlsX==WhaJaboBYkFwug("A77E716F616F7A955CADCDC69F7E", ("LWSi3OpyOIJA0D".Hash() + __LINE__.ToInt()))){
if(kNBss0tfdaUIog4==1)jNCuhANOc6xbo5u=g_LocalizationManager.woundInfection1;
else if(kNBss0tfdaUIog4==2)jNCuhANOc6xbo5u=g_LocalizationManager.woundInfection2;
else if(kNBss0tfdaUIog4==0)jNCuhANOc6xbo5u=g_LocalizationManager.woundInfectionBase;
}
if(kNBss0tfdaUIog4==0){
uOMQ0cHinOQEFNk=g_LocalizationManager.recoveredFromDisease + WhaJaboBYkFwug("46", ("SdAVwvXXIp1Odv".Hash() + __LINE__.ToInt())) + jNCuhANOc6xbo5u;
}
else if(gyboB5yfwp32pJw==0){
uOMQ0cHinOQEFNk=g_LocalizationManager.infectedWithDisease + WhaJaboBYkFwug("61", ("k2xUeoP2V7CRJq".Hash() + __LINE__.ToInt())) + jNCuhANOc6xbo5u;
}
else{
				uOMQ0cHinOQEFNk=g_LocalizationManager.diseaseStageChanged + " (" + gyboB5yfwp32pJw.ToString()+ " → " + kNBss0tfdaUIog4.ToString()+ "): " + jNCuhANOc6xbo5u;
}
}
string qyRRQsCphKbEL3I=cgrUl5xHFvQppYq[0].ToString()+ WhaJaboBYkFwug("24", ("h1C9kgCMQhS2hL".Hash() + __LINE__.ToInt())) + cgrUl5xHFvQppYq[1].ToString()+ WhaJaboBYkFwug("3D", ("5mWTeWMmCsP5iv".Hash() + __LINE__.ToInt())) + cgrUl5xHFvQppYq[2].ToString();
string BaYAxzGHPB0DyqO=GetTimestamp()+ WhaJaboBYkFwug("74", ("72UnHZKn2EQuhf".Hash() + __LINE__.ToInt())) + KNS6FWTneIbvNL9 + WhaJaboBYkFwug("73", ("MXa3WNqfj0WZNe".Hash() + __LINE__.ToInt())) + aL4DU8IbSc9T8Q6 + WhaJaboBYkFwug("7B", ("8CxHEgx5nHsl64".Hash() + __LINE__.ToInt())) + uOMQ0cHinOQEFNk + WhaJaboBYkFwug("487166", ("37vROoEVES0JeL".Hash() + __LINE__.ToInt())) + qyRRQsCphKbEL3I + WhaJaboBYkFwug("4B", ("GYrqpnxe3FMRvx".Hash() + __LINE__.ToInt())) + HYV9teEzv4ZEPYP;
string m4BDe8rGNsl30in=uOMQ0cHinOQEFNk + WhaJaboBYkFwug("3E7228", ("LuDUPrMHZvRuej".Hash() + __LINE__.ToInt())) + qyRRQsCphKbEL3I + WhaJaboBYkFwug("41", ("OJ7sdR2iQnCFWn".Hash() + __LINE__.ToInt())) + HYV9teEzv4ZEPYP;
if(wRTasJwH43kcdVD.playerDiseaseTextLog){
yaSG1tdfYgEDXgS(BaYAxzGHPB0DyqO);
}
if(Fe29gzYedsjdJvA.playerDiseaseLog){
rsuSYfdfThqoiMm.qrMn0X0I6Nsj1ao(KNS6FWTneIbvNL9, aL4DU8IbSc9T8Q6, uOMQ0cHinOQEFNk, jNCuhANOc6xbo5u, cgrUl5xHFvQppYq, HYV9teEzv4ZEPYP, WhaJaboBYkFwug("64659E5F9E984B72C9A0626BA4", ("810IBSdEjPgHC4".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.playerDiseaseLog){
Q8F5CVqNBWhMfzS.Ha59PwXLgUtURGP(KNS6FWTneIbvNL9, aL4DU8IbSc9T8Q6, uOMQ0cHinOQEFNk, jNCuhANOc6xbo5u, cgrUl5xHFvQppYq, HYV9teEzv4ZEPYP, WhaJaboBYkFwug("9FB458D05CB364A55EA3827394", ("0TkiDiKLkEInDu".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools){
fSizNH7cC3wenXT(aL4DU8IbSc9T8Q6, cgrUl5xHFvQppYq, WhaJaboBYkFwug("9E9FCFBF62BB7A", ("72t5IwN50tNCZm".Hash() + __LINE__.ToInt())), m4BDe8rGNsl30in);
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("7974A68D903A7E", ("G0hA30rtHdgeqF".Hash() + __LINE__.ToInt())), aL4DU8IbSc9T8Q6);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("886753704B86", ("Q3MTkV3NDcDHsp".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(KNS6FWTneIbvNL9));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("679B9BB24F917B8A55D8", ("1fU7HRMQYONbIb".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(zN3BRfGLVMPBlsX));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("C95B755B65969EAF", ("hrtV0qzE0Fqjvz".Hash() + __LINE__.ToInt())), gyboB5yfwp32pJw.ToString());
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("6577747588AAB552", ("qldIjjXFMSbsEo".Hash() + __LINE__.ToInt())), kNBss0tfdaUIog4.ToString());
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("645B79C770C8", ("nbdRvLRG0d0l58".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(uOMQ0cHinOQEFNk));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("994CA65D79C649506F8A78", ("p4NhFntBQGxhVh".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(jNCuhANOc6xbo5u));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("AF6F5E5DAE59", ("z6vMkuRik517IO".Hash() + __LINE__.ToInt())), qyRRQsCphKbEL3I);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("83848C6A92B75356", ("pGJD8oC51i7gdH".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(HYV9teEzv4ZEPYP));
EEeAxjskc0d1cre(WhaJaboBYkFwug("7753AF5AB8742F8DBD9C8CB49877ACBB9CB1", ("snN9N3zOHJ7J9K".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
#ifdef GAMELABS
void fSizNH7cC3wenXT(string aL4DU8IbSc9T8Q6, vector cgrUl5xHFvQppYq, string GHT0Swz8Y5ZyAGz, string PG6hF5zZ7nYFDWc)
{
if(!GetGameLabs())
return;
if(!GetGameLabs().GetApi())
return;
if(!GetGameLabs().GetApi().IsEnabled())
return;
if(aL4DU8IbSc9T8Q6=="")
return;
ref _LogPlayer Sk9e6l7PDlAuAmQ=new _LogPlayer();
Sk9e6l7PDlAuAmQ.id=aL4DU8IbSc9T8Q6;
Sk9e6l7PDlAuAmQ.position=cgrUl5xHFvQppYq;
string OwxcuSYI6lcD1MW=WhaJaboBYkFwug("8D", ("4Oad4EhM4XPLRM".Hash() + __LINE__.ToInt())) + GHT0Swz8Y5ZyAGz + WhaJaboBYkFwug("6074", ("UGnPldqROfJFPF".Hash() + __LINE__.ToInt())) + PG6hF5zZ7nYFDWc;
			ref _Payload_PlayerChat GBRujl4RUpziYGE=new _Payload_PlayerChat(Sk9e6l7PDlAuAmQ, "Global", OwxcuSYI6lcD1MW);
GetGameLabs().GetApi().PlayerChat(new CAsW6qXqP8Xw6mN(), GBRujl4RUpziYGE);
}
#endif
void P34dVbDvvXPvQh3()
{
if(!TgJkL1LBCuhPatn)
TgJkL1LBCuhPatn=new map<string, int>();
}
void Qz53Vv83TbTXnN0(string playerNick, string steamID, string action, string itemName, string sourceOrDestination, vector position, string persistentID, string nearestLandmark, float distance)
{
		//Print("[ItemTransaction] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("0C", ("hby720ywjRnkUn".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("78", ("nqj92MlEWUXtkh".Hash() + __LINE__.ToInt())) + position[2].ToString();
string distanceText=WhaJaboBYkFwug("79", ("Wcp4TmqW0CkdpR".Hash() + __LINE__.ToInt())) + g_LocalizationManager.distance + WhaJaboBYkFwug("0D", ("6v7f9sp889jch5".Hash() + __LINE__.ToInt())) + distance.ToString()+ g_LocalizationManager.meters + WhaJaboBYkFwug("73", ("gXUQZhx8Zixm9F".Hash() + __LINE__.ToInt()));
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("14", ("YefAQb8ASAUa8g".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("6D", ("SXLMIHFTAAOYFc".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("76", ("OIwhRiUYuypj5u".Hash() + __LINE__.ToInt())) + action + WhaJaboBYkFwug("6D", ("UwxOEGFPLrjHUJ".Hash() + __LINE__.ToInt())) + itemName + WhaJaboBYkFwug("2C2B77307A3E", ("EDFgArKFBxFZdx".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("51", ("JDryN8NUxBB1vu".Hash() + __LINE__.ToInt()));
logEntry +=distanceText + sourceOrDestination + WhaJaboBYkFwug("9920", ("E3pkpfKbK1h9YY".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("1D", ("HGW8jXWAzK5WiW".Hash() + __LINE__.ToInt())) + nearestLandmark;
string cfEntry=action + WhaJaboBYkFwug("6B", ("aGxOALT8gosuAl".Hash() + __LINE__.ToInt())) + itemName + WhaJaboBYkFwug("7710682B2D09", ("LFuFDlvyLWJMGQ".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("26", ("oq7fDBdIOFp6e7".Hash() + __LINE__.ToInt()));
cfEntry +=distanceText + sourceOrDestination + WhaJaboBYkFwug("4D45", ("sTRXh8AoPJUpD9".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("79", ("oHYgjH8lvdVcHR".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.itemTransactionTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.itemTransactionLog)
{
rsuSYfdfThqoiMm.mNl43lMMq6Qed1G(playerNick, steamID, action, itemName, sourceOrDestination, position, persistentID, WhaJaboBYkFwug("5999458A579D8687BC4AAB7EBA648E", ("Ji3sCoOD159IT8".Hash() + __LINE__.ToInt())), nearestLandmark, distance);
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.itemTransactionLog)
{
Q8F5CVqNBWhMfzS.nPVWxIvh1BmspxC(playerNick, steamID, action, itemName, sourceOrDestination, position, persistentID, WhaJaboBYkFwug("977D92643EC3B08DCE7D65A0A5B563", ("dBX7NbpNKx2WxE".Hash() + __LINE__.ToInt())), nearestLandmark, distance);
}
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("9A57518AC83935", ("RldVl6CkPnot27".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B0A185A9CC59", ("XsBcwPTR9AK3wh".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(action));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A98471CE62A983BE5686A339", ("0Kp6N8As1xq5Ij".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("757CB675A1905B87", ("NlAwbBNc7Ji0sE".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("53C276854EC4", ("DEzHt0TFVzR3Aw".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("C36E675A555C9D94", ("sRFFgvm1iB8m37".Hash() + __LINE__.ToInt())), distanceText);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("65AFB6C2B0C4", ("cfOaVrWLIWE0Ua".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B4A5B66EADD1", ("gDMIDLiBj37YJd".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(sourceOrDestination));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B29965B1", ("huawGgFfiEjnk5".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(itemName));
EEeAxjskc0d1cre(WhaJaboBYkFwug("B4B78AB8556DB85F577F51737A9F4E", ("JhHh1UEpjHCleK".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("717EB3716C59A399CDAD6E6C64C47B60", ("9iDA05p2lzgiC3".Hash() + __LINE__.ToInt())), cfEntry);
}
#endif
}
void fe3gdDvbIOl0XoI(string itemName, string sourceInfo, string nearestLandmark, vector position, string persistentID, float damageAmount, bool isDestroyed)
{
		//Print("[ItemDamage] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("24", ("OuUvr4MoRBuYOD".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("8B", ("m257rA9CdKq0bO".Hash() + __LINE__.ToInt())) + position[2].ToString();
string action;
string damageInfo;
if(isDestroyed)
{
			action=g_LocalizationManager.distance;
			damageInfo="";
}
else 
{
action=g_LocalizationManager.receiveddamage;
damageInfo=WhaJaboBYkFwug("0F55", ("CXFB3yBwTMQUNM".Hash() + __LINE__.ToInt())) + damageAmount.ToString()+ WhaJaboBYkFwug("4C", ("EQYNqluMDv446Y".Hash() + __LINE__.ToInt())) + g_LocalizationManager.damage + WhaJaboBYkFwug("71", ("VA6ATYmgP5Lhlz".Hash() + __LINE__.ToInt()));
}
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("5A", ("CINIVqwkIwJHEA".Hash() + __LINE__.ToInt())) + itemName + WhaJaboBYkFwug("561E2C5B4F3C", ("sejtrw9EQwuvgl".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("5E68", ("3AD6AFdjIE8pHv".Hash() + __LINE__.ToInt())) + action + damageInfo + WhaJaboBYkFwug("77", ("LnlROESw50bzju".Hash() + __LINE__.ToInt())) + sourceInfo + WhaJaboBYkFwug("4B35", ("xEgeJ04GBBHHIh".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("1E", ("BYunBk6IdkjFKy".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.itemDamageTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.itemDamageLog)
{
rsuSYfdfThqoiMm.B2C4wF72H53Cj2B(itemName, persistentID, action, damageInfo, sourceInfo, position, nearestLandmark, isDestroyed, WhaJaboBYkFwug("76CCB26031C0B45FBF8B", ("KZ5L55auw0O3s2".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.itemDamageLog)
{
Q8F5CVqNBWhMfzS.uSB8ZsZepBjXvBF(itemName, persistentID, action, damageInfo, sourceInfo, position, nearestLandmark, isDestroyed, WhaJaboBYkFwug("A37F92C439428D9B639A", ("9KWp2QbKt8RzcB".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string KFMpUmJEQDI7KKQ=itemName + WhaJaboBYkFwug("083164382034", ("guWD1PcxbVX2Gr".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("5614", ("dzlz5LIRDyQ4Qr".Hash() + __LINE__.ToInt())) + action + damageInfo + WhaJaboBYkFwug("293202", ("ufcMrXKZqIYDlD".Hash() + __LINE__.ToInt())) + sourceInfo + WhaJaboBYkFwug("3D0C", ("jEitVADkWPD4E0".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("1C", ("TFuhkifALah3W5".Hash() + __LINE__.ToInt())) + nearestLandmark;
string V4fX3arj9OE98bl=kVE2219y2FTxws6.IRmMEMZc0jhlGSO(sourceInfo);
if(V4fX3arj9OE98bl !="")
{
Man vzK7XzhQUmlwRok=GetPlayerByIdentity(V4fX3arj9OE98bl);
if(vzK7XzhQUmlwRok)
{
vector os7oE8jYnB6qS4A=vzK7XzhQUmlwRok.GetPosition();
fSizNH7cC3wenXT(V4fX3arj9OE98bl, os7oE8jYnB6qS4A, WhaJaboBYkFwug("9890478C677E716BAD45", ("Mff3ydZCcgNkvD".Hash() + __LINE__.ToInt())), KFMpUmJEQDI7KKQ);
}
}
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("8E556464", ("xAarWXNUTISkue".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(itemName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("6C92C25DB35E76BA845C7E4D", ("1Md1y4hjwxaXQU".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("6E6A8F598C50", ("VjSHvEx7jJVZL8".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(action));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("88B09C97BCB270B17E8A", ("LM7ovlHJFzu44I".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(damageInfo));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("D098BA609152", ("SE1gHsuE04x6yi".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(sourceInfo));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("9F8C8A7DB392", ("Utgzn5vvEoIHH2".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("826761AC7B9A80B4", ("XRIaSpz2dIt3sD".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("91AD7B81C9777B4F6751A1", ("iQRogRIxevHetB".Hash() + __LINE__.ToInt())), isDestroyed.ToString());
EEeAxjskc0d1cre(WhaJaboBYkFwug("5679845A286D8095578B", ("NONCkbr4XzgaMa".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void s6DZnugIQz17TqO(string carName, vector position, string persistentID)
{
		//Print("[CarInit] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("21", ("xDfd7hZO500gvN".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("49", ("EQHb97jONkF5Wp".Hash() + __LINE__.ToInt())) + position[2].ToString();
string nearestLandmark=GetNearestLandmarkDescription(position);
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("5E", ("xQVchfJcKdA1x6".Hash() + __LINE__.ToInt())) + g_LocalizationManager.car + WhaJaboBYkFwug("37", ("cwHItVKH9I3KSG".Hash() + __LINE__.ToInt())) + carName + WhaJaboBYkFwug("125572453F3D", ("QUsoNohAWl2fFw".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("0A51", ("yWVMrdHu8da7X0".Hash() + __LINE__.ToInt())) + g_LocalizationManager.initialized + WhaJaboBYkFwug("5D", ("ntIANOhAZ6bdCS".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("55", ("7u5e8l000pXNrZ".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.vehicleInitializationTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.vehicleInitializationLog)
{
rsuSYfdfThqoiMm.JShEbO11wDhRBhQ(carName, position, persistentID, nearestLandmark, WhaJaboBYkFwug("938F90855359A4898965C0498EAC729C6A79548A4E", ("I5WcjWD1xLJc4f".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.vehicleInitializationLog)
{
Q8F5CVqNBWhMfzS.GCHe2mLQuYJOGKQ(carName, position, persistentID, nearestLandmark, WhaJaboBYkFwug("5A4E816BB8BA4A4D514E805463B897B56F9A967AAC", ("G2CUC8kcEQmdD4".Hash() + __LINE__.ToInt())));
}
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue)
{
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A69653", ("LYzubRoESev412".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(carName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("C195807375808B7CAEBB3B4B", ("brlt0rzrQ4iC7A".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("80748594A4D0", ("biw0GI5yHuMv11".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("BB4B905A9DA9C75A", ("pbxPBF6fRGeIMc".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("994AB6526E7C622955B962A78CAA865C79AC77C85E", ("XhEtGEgKB2L7iR".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void D0fHGMvIYLGj1TX(string carName, string persistentID, vector position, string nearestLandmark)
{
		//Print("[CarDis] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("10", ("CaccBRn5BovaG9".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("8B", ("CcRCYZrmkW27kv".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("3B", ("sGCMfrzIMEqVUb".Hash() + __LINE__.ToInt())) + g_LocalizationManager.car + WhaJaboBYkFwug("7C", ("4sT8wi3of9EztA".Hash() + __LINE__.ToInt())) + carName + WhaJaboBYkFwug("7F3340946F50", ("3vO2U8QYLmWHhn".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("2930", ("kBFkpyZVF4Fvky".Hash() + __LINE__.ToInt())) + g_LocalizationManager.disappeared + WhaJaboBYkFwug("07", ("zcWDCigzYSjuB5".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("3C", ("dYsNjsL4jAjnmr".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.vehicleDisappearanceTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.vehicleDisappearanceLog)
{
rsuSYfdfThqoiMm.q0ZUy0SLKfp2OSC(carName, persistentID, position, nearestLandmark, WhaJaboBYkFwug("A07F63C194776859C06B9152AEB1A29B826DBDA2", ("5Ou3xhRHJDCJO6".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.vehicleDisappearanceLog)
{
Q8F5CVqNBWhMfzS.i3BZTIDSpnx4M63(carName, persistentID, position, nearestLandmark, WhaJaboBYkFwug("59499FB3798A808185639EB7B45644D1BB7EA1B4", ("NcSoZnxWidGo5O".Hash() + __LINE__.ToInt())));
}
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue)
{
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("6DA65A", ("Z0RpszgMZEFxm1".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(carName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B391715CBE63937056A3762C", ("zhiWctioAyEgGP".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B490668D58B1", ("WQ70orqSKX1HoW".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B658937F8BAE8B64", ("XBbH7e4jjzYjIC".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("8BBF6EB36F8E697284AAA5659A72B27873A65D7A", ("7LQGEF5oiqCGdQ".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void Qxq1gFrE0411Tyk(string boatName, vector position, string persistentID)
{
		//Print("[BoatInit] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("26", ("QgGsXlZT7p32PF".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("60", ("HpW4uwitJL4vk7".Hash() + __LINE__.ToInt())) + position[2].ToString();
string nearestLandmark=GetNearestLandmarkDescription(position);
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("28", ("VvBxPm3AO2ZqiC".Hash() + __LINE__.ToInt())) + g_LocalizationManager.boat + WhaJaboBYkFwug("36", ("Pn9BHGCy7kd9W0".Hash() + __LINE__.ToInt())) + boatName + WhaJaboBYkFwug("41859C679650", ("pnMtgH3AARMLgu".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("5728", ("smjSuEfcEabHGh".Hash() + __LINE__.ToInt())) + g_LocalizationManager.initializedbby + WhaJaboBYkFwug("03", ("aEeWjlMgXTfI16".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("4A", ("KoClkTUkCHaqvG".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.boatInitializationTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.boatInitializationLog)
{
rsuSYfdfThqoiMm.uSIZ0Kz9U3dd4EV(boatName, position, persistentID, nearestLandmark, WhaJaboBYkFwug("547F62752BC89C755E4EBBA1D3B885739E50", ("vQnY6cPoHTOKoX".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.boatInitializationLog)
{
Q8F5CVqNBWhMfzS.EKqIHdcbaG8YjLK(boatName, position, persistentID, nearestLandmark, WhaJaboBYkFwug("B4A58AC499545AA2C06880A98E55B2686789", ("TEaWhd5f74jvf4".Hash() + __LINE__.ToInt())));
}
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("73769568", ("3htv7gwVcEoQ6h".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(boatName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("81986B8AB7AA836B9C834983", ("AfnUumX4VRnIoz".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A5A58165C2C7", ("AoY9muVM5KN1HB".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("8C87757366B4686D", ("d79HQNZEgUV9XJ".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("ABBABA7EA66982A4A7A4AA79D658968BC08C", ("7tJm6sTVMu6Ues".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void AEVL3neyH30FlFt(string boatName, string persistentID, vector position, string nearestLandmark)
{
		//Print("[BoatDis] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("4C", ("dib0f4r5jWaCWG".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("37", ("wYbXrxNZGY86da".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("55", ("x85Bv1vqriCqH9".Hash() + __LINE__.ToInt())) + g_LocalizationManager.boat + WhaJaboBYkFwug("42", ("vLjLuktTMYFrpu".Hash() + __LINE__.ToInt())) + boatName + WhaJaboBYkFwug("396D733E1A70", ("KTQBByFvfs35r0".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("2E2E", ("q6Bham0s5hjApl".Hash() + __LINE__.ToInt())) + g_LocalizationManager.disappearedbby + WhaJaboBYkFwug("71", ("WgyrELBVWBClmH".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("69", ("DBBFC0AMzOM4Dr".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.boatDisappearanceTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.boatDisappearanceLog)
{
rsuSYfdfThqoiMm.QH2JVLwfbPFVqT0(boatName, persistentID, position, nearestLandmark, WhaJaboBYkFwug("4C699CC92C92C36355796874CC84A787BF", ("uRPD84PrBCQRyO".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.boatDisappearanceLog)
{
Q8F5CVqNBWhMfzS.xwfFaICldlgdDXw(boatName, persistentID, position, nearestLandmark, WhaJaboBYkFwug("BBA96E719B70C5A58FB495B1A2A5CA8654", ("XDzFDTvXDjiqzF".Hash() + __LINE__.ToInt())));
}
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("456D9566", ("rPj2iTxoymK8SX".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(boatName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("509273886FB4A0956AC38E8B", ("g4VAiAxtlGcPzM".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("9790B2A0B47B", ("tPWO68aKLFWaaZ".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("5E78657DC74F84AC", ("Dgbc0BX6rQOtDB".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("9E6F76636DC89B7AC75EBF58817CBFACBC", ("KJSPU24yqjjyHq".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void qoBRVKSbWIZaWXA(string playerNick, string steamID, string action, string actionName, string objectName, string persistentID, vector position, string locationDescription, string actionClassName)
{
		//Print("[ActionTransaction] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("8A", ("YOXXhgVsZvU0If".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("4F", ("Ci1yeewNABr9un".Hash() + __LINE__.ToInt())) + position[2].ToString();
		string logEntry=GetTimestamp()+ " " + playerNick + " " + steamID + " " + action + " " + actionName + " " + objectName + " " + persistentID + ": " + coordinates + " " + locationDescription;
if(wRTasJwH43kcdVD.actionContinuousBaseTextLog)
{
if(QFYH3HzFjRVMbpX.qDWMD9yCW9aFGls(wRTasJwH43kcdVD.allowedactions, actionClassName))
{
yaSG1tdfYgEDXgS(logEntry);
}
}
if(Fe29gzYedsjdJvA.actionContinuousBaseLog)
{
if(QFYH3HzFjRVMbpX.qDWMD9yCW9aFGls(Fe29gzYedsjdJvA.allowedactions, actionClassName))
{
rsuSYfdfThqoiMm.cfwGDhwMJ0OWNNS(playerNick, steamID, action, actionName, objectName, persistentID, position, locationDescription, WhaJaboBYkFwug("ABACC24BA178767F5D8B965B8D977B7C3A906BB6", ("R0ZQoEnyUGXvdI".Hash() + __LINE__.ToInt())));
}
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.actionContinuousBaseLog)
{
if(QFYH3HzFjRVMbpX.qDWMD9yCW9aFGls(aCcT4vkDiTPABcf.allowedactions, actionClassName))
{
Q8F5CVqNBWhMfzS.LEhSllz2GxDRcL4(playerNick, steamID, action, actionName, objectName, persistentID, position, locationDescription, WhaJaboBYkFwug("B8769F90688F999EC6C74E7D9676B1B34164CFB6", ("2vtkFD1vcDZTwn".Hash() + __LINE__.ToInt())));
}
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
if(QFYH3HzFjRVMbpX.qDWMD9yCW9aFGls(wRTasJwH43kcdVD.allowedactions, actionClassName))
{
string Hc8KSG8D7zEn59d=action + WhaJaboBYkFwug("0B", ("PtWEdhyszfxjJu".Hash() + __LINE__.ToInt())) + actionName + WhaJaboBYkFwug("52", ("FOe8H37y2nbF2Z".Hash() + __LINE__.ToInt())) + objectName + WhaJaboBYkFwug("26", ("yhwHM3LT8inIsm".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("3719", ("e5CHtcIORMEyO3".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("0F", ("k1shBp63sxaFwA".Hash() + __LINE__.ToInt())) + locationDescription;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("7165A0B8BFA1", ("L1bY8HzA7HkkUW".Hash() + __LINE__.ToInt())), Hc8KSG8D7zEn59d);
}
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue)
{
if(QFYH3HzFjRVMbpX.qDWMD9yCW9aFGls(wRTasJwH43kcdVD.allowedactions, actionClassName))
{
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("CA94A7A0586B76", ("stqFCOPL39FMuw".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A97A81805889", ("A0umuF9DuTxx73".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("73817E768B7A", ("euJpPcCj8WeIuY".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(action));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("4976D18993B28A4C5FB2", ("vBJTr0BV78BQtW".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(actionName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("9E98B595826D", ("wIjFqgoCazT6Bl".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(objectName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A0A35DB6AC7C9D63B1548E6A", ("NHd4DnAtC9Lvui".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("6FB38992A1B5", ("8yCimrUshcLslm".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("8A5D8EC37C417596", ("7gusIGgTnFAtFH".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(locationDescription));
managers.EEeAxjskc0d1cre(WhaJaboBYkFwug("A5B17DC4AD876296A27F8487595B6AA36F5785AC", ("AVxod7HF1tDR6E".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
}
void WvrQJmygBw0i2EO(string playerNick, string steamID, string action, string resultItemName, string itemName1, string itemName2, vector position, string locationDescription, string recipeClassName)
{
		//Print("[Recipe] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("64", ("w29RpOkjBQLQt3".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("72", ("0wPjreAfffOEaH".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("22", ("UjAtq4BDgEpp1G".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("1D", ("Hn4CFaHaZFJrJy".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("2E", ("nFEgToORVDHi0H".Hash() + __LINE__.ToInt())) + g_LocalizationManager.crafted + WhaJaboBYkFwug("75", ("Uej0FEyhwQ4G5X".Hash() + __LINE__.ToInt())) + resultItemName;
logEntry +=WhaJaboBYkFwug("29", ("g1BBy8ehYiO5Rc".Hash() + __LINE__.ToInt())) + g_LocalizationManager.using + WhaJaboBYkFwug("25", ("MtvJvorPMfypXN".Hash() + __LINE__.ToInt())) + itemName1 + WhaJaboBYkFwug("61", ("XdvjtLvNnGPrBS".Hash() + __LINE__.ToInt())) + g_LocalizationManager.andd + WhaJaboBYkFwug("25", ("TsFiBn81brnRMu".Hash() + __LINE__.ToInt())) + itemName2;
logEntry +=WhaJaboBYkFwug("3E46", ("LUnbNEDJ76NnD6".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("0B", ("FyKQwGcjeVMhl4".Hash() + __LINE__.ToInt())) + locationDescription;
if(wRTasJwH43kcdVD.recipeBaseTextLog)
{
if(QFYH3HzFjRVMbpX.qDWMD9yCW9aFGls(wRTasJwH43kcdVD.allowedresipes, recipeClassName))
{
yaSG1tdfYgEDXgS(logEntry);
}
}
if(Fe29gzYedsjdJvA.recipeBaseLog)
{
if(QFYH3HzFjRVMbpX.qDWMD9yCW9aFGls(Fe29gzYedsjdJvA.allowedresipes, recipeClassName))
{
rsuSYfdfThqoiMm.tjBqAmBukxLKoCH(playerNick, steamID, action, resultItemName, itemName1, itemName2, position, locationDescription, WhaJaboBYkFwug("A879B4896B512E9C997F63604B", ("3VtBjJkvAWToDc".Hash() + __LINE__.ToInt())));
}
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.recipeBaseLog)
{
if(QFYH3HzFjRVMbpX.qDWMD9yCW9aFGls(aCcT4vkDiTPABcf.allowedresipes, recipeClassName))
{
Q8F5CVqNBWhMfzS.D3hKqX2B4h8rGOX(playerNick, steamID, action, resultItemName, itemName1, itemName2, position, locationDescription, WhaJaboBYkFwug("764F9F80B66D8B9AB54D", ("ajtYUAOu2R9BzC".Hash() + __LINE__.ToInt())));
}
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
if(QFYH3HzFjRVMbpX.qDWMD9yCW9aFGls(wRTasJwH43kcdVD.allowedresipes, recipeClassName))
{
string ib0tMCry1vC9R4y=g_LocalizationManager.crafted + WhaJaboBYkFwug("2E", ("OLTZD9vIlnqDbz".Hash() + __LINE__.ToInt())) + resultItemName + WhaJaboBYkFwug("4A", ("hRRKkSjifoPPEC".Hash() + __LINE__.ToInt())) + g_LocalizationManager.using + WhaJaboBYkFwug("46", ("Eaq7B2Gx382Yah".Hash() + __LINE__.ToInt())) + itemName1 + WhaJaboBYkFwug("10", ("XoyeuBepx5CfDQ".Hash() + __LINE__.ToInt())) + g_LocalizationManager.andd + WhaJaboBYkFwug("29", ("tKsVAxd6GtHLhS".Hash() + __LINE__.ToInt())) + itemName2 + WhaJaboBYkFwug("747D", ("c0u5PWqCaAJtiO".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("26", ("CL3Bk4D9CTatLp".Hash() + __LINE__.ToInt())) + locationDescription;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("A892A48CC296", ("EFoJVXnMqyyr1K".Hash() + __LINE__.ToInt())), ib0tMCry1vC9R4y);
}
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue)
{
if(QFYH3HzFjRVMbpX.qDWMD9yCW9aFGls(wRTasJwH43kcdVD.allowedresipes, recipeClassName))
{
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("6AA59F704D9461", ("z5smCepkRBcXKu".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("9FBD946BC163", ("z7fZWvf9sBTotE".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("41A667A5856F", ("sNNawKonxm5AMX".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(action));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("AAB6B6CB79AF", ("soGczdVK84egwm".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(resultItemName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("825B7BA112", ("zDluvuJ0SpWSio".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(itemName1));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("65D26D8727", ("8cNIsUEPG6Aew1".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(itemName2));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("56886E6C54BA", ("ZeRDYkfuToPfPG".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("90578CBB6BBF9B98", ("rNhtVCHicIq1Zd".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(locationDescription));
managers.EEeAxjskc0d1cre(WhaJaboBYkFwug("7E9A5B52CFC08A7E908885577F", ("YNlFhGbvTpNKE6".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
}
void XnH3Jx39MzWbPp7(string playerNick, string steamID, string eventType, vector position, string nearestLandmark, string extendedDescription, string logEntry)
{
		//Print("[LogPlayerHealth] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("63", ("zjqT9OJLr7sLkS".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("4A", ("SehtRDcadaxgQ3".Hash() + __LINE__.ToInt())) + position[2].ToString();
if(wRTasJwH43kcdVD.playerCutsTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.playerCutsLog)
{
rsuSYfdfThqoiMm.wGhusZztZBkdfkt(playerNick, steamID, eventType, position, nearestLandmark, extendedDescription, WhaJaboBYkFwug("CB5979A952B49CADBA9B", ("pdJyXNAIX2AHHF".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.playerCutsLog)
{
Q8F5CVqNBWhMfzS.iyNiI2h4HUbkrSN(playerNick, steamID, eventType, position, nearestLandmark, extendedDescription, WhaJaboBYkFwug("80A9A65B527D4DB96BAA", ("rmGarRSMQwuqa5".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string IGHZbZIKHOzsvVk=eventType + WhaJaboBYkFwug("5F857A", ("lP1HNYwzBpwqpJ".Hash() + __LINE__.ToInt())) + extendedDescription + WhaJaboBYkFwug("5D2F", ("sfgXNCzaf0k9uz".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("77", ("fEsaaIGpPDm0zY".Hash() + __LINE__.ToInt())) + nearestLandmark;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("867CAFB87B940943C4BE69C474", ("bRxrLyeLAuBLPz".Hash() + __LINE__.ToInt())), IGHZbZIKHOzsvVk);
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("84CDB2809E5148", ("edaFL01fuT66Hf".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("93618B80BC66", ("xWQkYUq65VazkB".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("53769A506A", ("MvM4l2J3iG0Xim".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(eventType));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A790BE96CF92BEAA5DC962", ("iF25LL15JRpVYj".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(extendedDescription));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("9AB472B3AF89", ("ouxu266k0R0K7V".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("884A69814FA4BC64", ("pna2FGOfaCI1Sq".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("7E764EC07DBC5179CD72", ("Ov4zaIZtOHx4m1".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void zjVsEYKtTAROkyU(string playerNick, string steamID, string diseaseName, bool isInfected, vector position, string nearestLandmark)
{
		//Print("[PlayerDisease] !");
string status;
if(isInfected)
{
status=g_LocalizationManager.sick;
}
else 
{
status=g_LocalizationManager.unsick;
}
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("4B", ("pJ06cmZilBns5K".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("43", ("ZUkyDSWTZxX9mr".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("17", ("W7ZM1DcKp5tdnQ".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("52", ("khT646tHKCZmKb".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("05", ("obExMhQFAQDETz".Hash() + __LINE__.ToInt())) + status + WhaJaboBYkFwug("1D", ("3fgcAZSPx7DMop".Hash() + __LINE__.ToInt())) + diseaseName + WhaJaboBYkFwug("026B1B", ("T4CaGZzjxhzuJI".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("2F", ("8DAx3TzM5NEEMb".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.playerDiseaseTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.playerDiseaseLog)
{
rsuSYfdfThqoiMm.qrMn0X0I6Nsj1ao(playerNick, steamID, status, diseaseName, position, nearestLandmark, WhaJaboBYkFwug("CA4D80AFA99A5E96786F7AC753", ("vPlDt8e75iioZB".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.playerDiseaseLog)
{
Q8F5CVqNBWhMfzS.Ha59PwXLgUtURGP(playerNick, steamID, status, diseaseName, position, nearestLandmark, WhaJaboBYkFwug("C4A44E9748B7245098A0B85E5E", ("Yz322NjNFq8u1b".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string SanXYl0YCXAIQNz=status + WhaJaboBYkFwug("6C", ("c7zEbbYgsJRBun".Hash() + __LINE__.ToInt())) + diseaseName + WhaJaboBYkFwug("3D3A76", ("ABGoyeI9CXCxUe".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("6F", ("KHZgxE38Sa8iex".Hash() + __LINE__.ToInt())) + nearestLandmark;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("947190A15767AC", ("sn5P9rOIFFCQim".Hash() + __LINE__.ToInt())), SanXYl0YCXAIQNz);
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("71CFA368968F60", ("6HedwwmESyij3x".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("61B0A877AF9B", ("2eDmjqFFvVHxYk".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("9752CB646B8CA6", ("1Axi03ne9TxUzj".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(diseaseName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("5FB35393A496", ("AUgyToU76C3mGQ".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(status));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("935D83567397", ("1zXgQFhMclEBLq".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("7F6290BB6BA758AD", ("L0hNjdnq4Biq8u".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("9BB964A7489E41629B7355C6A0", ("UOxEc0TOVpa9oX".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void wSjtmuWaTA1VvMG(string playerNick, string steamID, bool hasBrokenLegs, vector position, string nearestLandmark)
{
		//Print("[BrokenLegs] !");
string action;
if(hasBrokenLegs)
{
action=g_LocalizationManager.brokenleg;
}
else 
{
action=g_LocalizationManager.unbrokenleg;
}
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("53", ("jGvHt34mmQaZjF".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("15", ("EANPH4Ci2InmI5".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("41", ("BcMUr3TVypR04y".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("4A", ("aGfEYXZYdnnFaB".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("03", ("PACjiUQZuK4Ft4".Hash() + __LINE__.ToInt())) + action + WhaJaboBYkFwug("265C6A", ("OgtNcfgWnrmXyc".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("45", ("41sW8XILxYAS6V".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.playerBrokenLegsTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.playerBrokenLegsLog)
{
rsuSYfdfThqoiMm.oz8UlLRxG2iHUC4(playerNick, steamID, hasBrokenLegs, position, nearestLandmark, WhaJaboBYkFwug("B9977691AC959A58C1A4A1B4A3886EB8", ("g7dHoKrso2bE4k".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.playerBrokenLegsLog)
{
Q8F5CVqNBWhMfzS.H4PEvse7ysBsgYs(playerNick, steamID, hasBrokenLegs, position, nearestLandmark, WhaJaboBYkFwug("BB8E8DB560C13FAA7FA25C5EAB81B7D2", ("HOMVbN170ZuCHM".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string qSKiJwS4h7aKScp=action + WhaJaboBYkFwug("582709", ("ciLxP9zFJeXkCy".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("5B", ("Xa56zBMqqq4R8k".Hash() + __LINE__.ToInt())) + nearestLandmark;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("8986768BC49645718DB764", ("mqhKyNMbqtqSvH".Hash() + __LINE__.ToInt())), qSKiJwS4h7aKScp);
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("BBD24C7BA34E62", ("QbdiXB6GFFsxBQ".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B794528F7CA1", ("JNKTFTy51tIlpM".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B8858EAC74CF", ("lgeAtXtDeRl6w5".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(action));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("C19FAE7FBC59", ("HPU8QMNCMAm1jh".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("9359665880B8547D", ("pMNRuD0mCW17pr".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("784E8FBD5C7171B7B5C9C26B5E7E50A3", ("NcESKtcSYBiOXy".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void F0XjNaEtyEAB7kW(string playerNick, string steamID, bool isEnteringUnconsciousness, vector position, string nearestLandmark)
{
		//Print("[PlayerUnc] !");
string state;
if(isEnteringUnconsciousness)
{
state=g_LocalizationManager.uncas;
}
else 
{
state=g_LocalizationManager.uncae;
}
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("57", ("08Bqq2grYkGy5J".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("1D", ("xUJpT7szkjtXix".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("58", ("ZwwrwKdX1fVX2f".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("15", ("SvRCkvuRT37L8R".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("4E", ("yH7fAHRrQ0skcr".Hash() + __LINE__.ToInt())) + state + WhaJaboBYkFwug("61127D", ("I51dZUTEAMiBXY".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("21", ("Q0L65PkU697R80".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.playerUnconsciousTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.playerUnconsciousLog)
{
rsuSYfdfThqoiMm.eYx9CYtpqA6rLhh(playerNick, steamID, isEnteringUnconsciousness, position, nearestLandmark, WhaJaboBYkFwug("6EC15A6D646D5867A6BCA69470A7C7AD9B", ("IFtQ2h0p5sCAxL".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.playerUnconsciousLog)
{
Q8F5CVqNBWhMfzS.wGSTsnLquewwzpN(playerNick, steamID, isEnteringUnconsciousness, position, nearestLandmark, WhaJaboBYkFwug("9E594D71839F7A58BDC7A9B37862548159", ("SyrOeU7MQLV44d".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string Uuj6o4cwKP5tEVD=state + WhaJaboBYkFwug("386A55", ("EA3Q7xZEycwpiX".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("61", ("WChgkc7QRNRXix".Hash() + __LINE__.ToInt())) + nearestLandmark;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("369CBA855E5F3E8083639AB2A2718657A085", ("u1U5zt557tvH1e".Hash() + __LINE__.ToInt())), Uuj6o4cwKP5tEVD);
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("82646674BD982B", ("CCwujuNDnGodCn".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("547C9C7EC19E", ("ELjKYm9cf6sFbJ".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B85978754D", ("RWeGhXhSp6mjdo".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(state));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("6FC6536E9DB8", ("FCHGTeg9FmMUtJ".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("59508E9695708A6A", ("MULkgyhhR8VFwW".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("C0C17AAF45B1AABBA358B9B291C0856E83", ("HIHXau6jUu0I75".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void ngiKJj22ELmOzrZ(string playerNick, string steamID, string killerInfo, float distanceToKiller, string deathCause, vector position, string nearestLandmark, string itemsList)
{
		//Print("[PlayerDead] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("4A", ("7sqocE92RMC9Ds".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("88", ("9NhWpg0TG2rP9H".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("61", ("W2LdTUqmqQfUUQ".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("75", ("fIneqDK5u44C4j".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("06", ("gwAkBG74NcaxCL".Hash() + __LINE__.ToInt())) + g_LocalizationManager.killedBy + WhaJaboBYkFwug("45", ("nz3QcpAoVkyuPQ".Hash() + __LINE__.ToInt())) + killerInfo + WhaJaboBYkFwug("1038", ("JMvb3PZkmarR1x".Hash() + __LINE__.ToInt()));
logEntry +=g_LocalizationManager.distancetwo + WhaJaboBYkFwug("4B5F", ("Y2nPGkKmXY9s4a".Hash() + __LINE__.ToInt())) + distanceToKiller.ToString()+ WhaJaboBYkFwug("16", ("pjUQV5844ObaiN".Hash() + __LINE__.ToInt())) + g_LocalizationManager.meters + WhaJaboBYkFwug("5074", ("jkEPIIgCvfKJU1".Hash() + __LINE__.ToInt()));
		logEntry +=g_LocalizationManager.causeOfDeath + ": " + deathCause + ", " + coordinates + " " + nearestLandmark + " \n";
if(wRTasJwH43kcdVD.showDeadPlayerItems)
{
			logEntry +=g_LocalizationManager.items + ": \n" + itemsList;
}
if(wRTasJwH43kcdVD.playerDeadTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.playerDeadLog)
{
rsuSYfdfThqoiMm.EagF2iTZT2r3CZt(playerNick, steamID, killerInfo, distanceToKiller, deathCause, position, nearestLandmark, itemsList, WhaJaboBYkFwug("AF99797AB459815177B0", ("p5jCUoQfYgIx0F".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.playerDeadLog)
{
Q8F5CVqNBWhMfzS.OAvHZuQFYj4L3hR(playerNick, steamID, killerInfo, distanceToKiller, deathCause, position, nearestLandmark, itemsList, WhaJaboBYkFwug("9089A387729B7DAE4A4F", ("9tDnBnulnmunFL".Hash() + __LINE__.ToInt())));
}
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("CD60A1B3C69486", ("X6omvFP9eCcRXC".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("92AD629370B5", ("AGTUshK2EDupgB".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("725386858E9B", ("wNdEqyPVjUIton".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(killerInfo));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B25491B2849AC2A2", ("A5nsuFZAQvIuTO".Hash() + __LINE__.ToInt())), distanceToKiller.ToString());
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("4A6F506286397E8F8156", ("ycRMV904uAJNnK".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(deathCause));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("76A5C1CE9EAE", ("xqTWqOOMyvNl6T".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B270B6BC7F746D5F", ("76LiHV7GWAL9GP".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
if(wRTasJwH43kcdVD.showDeadPlayerItems)
{
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("70A84FBA54", ("P6zJGmJ57OLg4w".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(itemsList));
}
EEeAxjskc0d1cre(WhaJaboBYkFwug("82529A5E767594B6A4B1", ("TvWkKJP7FXUDoW".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void bujZQyc4t2nSBYP(string playerNick, string steamID, string sourceInfo, string ammo, float currentHealth, float distanceToSource, vector position, string nearestLandmark)
{
		//Print("[PlayerDamage] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("28", ("F41jcOxHEoU98t".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("62", ("iPwiBAqcDsSVqY".Hash() + __LINE__.ToInt())) + position[2].ToString();
string damageInfo=g_LocalizationManager.damageType + WhaJaboBYkFwug("730B", ("zotNnCqUezqIjG".Hash() + __LINE__.ToInt())) + ammo + WhaJaboBYkFwug("7571", ("0iDPgGWXPuAqXk".Hash() + __LINE__.ToInt())) + g_LocalizationManager.playerHP + WhaJaboBYkFwug("3A29", ("SauEHFy73YZPzW".Hash() + __LINE__.ToInt())) + currentHealth.ToString()+ WhaJaboBYkFwug("2632", ("hGRp0UIXZbQhRx".Hash() + __LINE__.ToInt())) + g_LocalizationManager.distancetwo + WhaJaboBYkFwug("7F5E", ("bO9rvAGxT37qPX".Hash() + __LINE__.ToInt())) + distanceToSource.ToString()+ WhaJaboBYkFwug("78", ("ZPivW3Iw5dk1xT".Hash() + __LINE__.ToInt())) + g_LocalizationManager.meters;
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("57", ("ajtpbk2yrHu2f5".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("7B", ("JW6miTkW8obW8A".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("02", ("ySBRo33vVtFmKg".Hash() + __LINE__.ToInt())) + g_LocalizationManager.receivedDamageFrom + WhaJaboBYkFwug("34", ("5csD5w12WD4PWf".Hash() + __LINE__.ToInt())) + sourceInfo + WhaJaboBYkFwug("575F3D", ("3ZLQJMtzM6Bn7k".Hash() + __LINE__.ToInt())) + damageInfo + WhaJaboBYkFwug("3A6C", ("kYPqpWidT1YG6F".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("35", ("2ZLJ3kFAb2G4v0".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.playerDamageTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.playerDamageLog)
{
rsuSYfdfThqoiMm.fYGZ1nMiAencA1w(playerNick, steamID, sourceInfo, ammo, currentHealth, distanceToSource, position, nearestLandmark, WhaJaboBYkFwug("BA5D7FB9ACCF2E4A614B5D7D", ("0l78A81HhQMrQ0".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.playerDamageLog)
{
Q8F5CVqNBWhMfzS.ttdqjy8wFUIJbeV(playerNick, steamID, sourceInfo, ammo, currentHealth, distanceToSource, position, nearestLandmark, WhaJaboBYkFwug("A95BAC6E468B8CA15D93AC9B", ("XQYsimOtGGHicH".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string mn0gjLVPf7P0crX=g_LocalizationManager.receivedDamageFrom + WhaJaboBYkFwug("4E", ("VfIkwvhLXfEEqd".Hash() + __LINE__.ToInt())) + sourceInfo + WhaJaboBYkFwug("62B523", ("e86Tov87UuIAZC".Hash() + __LINE__.ToInt())) + damageInfo + WhaJaboBYkFwug("7436", ("xl5MWGBFH3V6ZT".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("5D", ("BULE7bcfLzPFis".Hash() + __LINE__.ToInt())) + nearestLandmark;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("33BF57CE8ED0317E41A7B2B258", ("EezH66gtcpvaXQ".Hash() + __LINE__.ToInt())), mn0gjLVPf7P0crX);
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("BF775843856776", ("GeAYxcbCBxzfkf".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("508F65855183", ("CRn6IDyDwtqmiB".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("9CA88656B1AE", ("fGKWZDx3DMAJUy".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(sourceInfo));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("50A78B59", ("Yzr5bOtwTQeDx7".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(ammo));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("5B7F69CA9F6A", ("vuyQJ90qjHGu1A".Hash() + __LINE__.ToInt())), currentHealth.ToString());
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("45C55ABFB08A5F9A", ("1RfebozHVY5Zoq".Hash() + __LINE__.ToInt())), distanceToSource.ToString());
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("6D8C82A0AFA6", ("VV8oQxngIDphui".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("BFB2C34E9C5660B2", ("33EG4raGBc8M1O".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("727FA39D5B8F5B94C7434E96", ("CHF6TFrR58p7SZ".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void Re3BS3hySpUSju5(string vehicleType, float damageAmount, string dmgZone, string sourceInfo, vector position, string persistentID, string nearestLandmark, bool isDestroyed)
{
		//Print("[VehicleDamage] !");
if(damageAmount<=2)
{
return;
}
        string action=g_LocalizationManager.cardamage;
string damageInfo;
if(isDestroyed)
{
            damageInfo=g_LocalizationManager.wasdestroyed;
}
else 
{
damageInfo=g_LocalizationManager.receiveddamage + WhaJaboBYkFwug("734D", ("AGAbowmLkFGDrZ".Hash() + __LINE__.ToInt())) + damageAmount.ToString()+ WhaJaboBYkFwug("301E", ("iT69qb0nsRRApU".Hash() + __LINE__.ToInt())) + g_LocalizationManager.inZone + WhaJaboBYkFwug("30", ("9gD9J6sMkN3yJW".Hash() + __LINE__.ToInt())) + dmgZone;
}
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("7A", ("WndzfhN6rBT86n".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("2A", ("18PGDcTGXypVW6".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("1A", ("7j9DOpDH9xuiTh".Hash() + __LINE__.ToInt())) + action + WhaJaboBYkFwug("07", ("K2Sw4dFl0A6TDB".Hash() + __LINE__.ToInt())) + vehicleType + WhaJaboBYkFwug("445943333E77", ("Vyx57b8wvo42LD".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("6A55", ("sOftSp5nLSWMeI".Hash() + __LINE__.ToInt())) + damageInfo + WhaJaboBYkFwug("275B36", ("fDmgvXYBkhZXGh".Hash() + __LINE__.ToInt())) + sourceInfo + WhaJaboBYkFwug("2607", ("gwlnsUuQUh36pZ".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("0C", ("1dJdC5o2EOHZf3".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.vehicleDamageTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.vehicleDamageLog)
{
rsuSYfdfThqoiMm.Vhz2bGEjxrc4i8r(vehicleType, damageAmount, dmgZone, sourceInfo, position, persistentID, nearestLandmark, isDestroyed, WhaJaboBYkFwug("A76558556AA16F36B655524BB4", ("BVmTfYQKFr6FBO".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.vehicleDamageLog)
{
Q8F5CVqNBWhMfzS.rhbThTbiUkHlquW(vehicleType, damageAmount, dmgZone, sourceInfo, position, persistentID, nearestLandmark, isDestroyed, WhaJaboBYkFwug("6D74B8A758904F24ADC147877F", ("5qdEhFhoIXKMEt".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string caf0YscmZdQcJ1U=action + WhaJaboBYkFwug("46", ("gYM3kMnsbpS28J".Hash() + __LINE__.ToInt())) + vehicleType + WhaJaboBYkFwug("0A688D6D6C01", ("L6lA7CACbGv1F7".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("4A77", ("7A1V8EhmMiOwW6".Hash() + __LINE__.ToInt())) + damageInfo + WhaJaboBYkFwug("14", ("5CnBffKJFcKub1".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("47", ("jXJRZyDxlnIafk".Hash() + __LINE__.ToInt())) + nearestLandmark;
string bGCu31awfjJsanF=kVE2219y2FTxws6.IRmMEMZc0jhlGSO(sourceInfo);
if(bGCu31awfjJsanF !="")
{
Man kyTLXgbo7DCy9FE=GetPlayerByIdentity(bGCu31awfjJsanF);
if(kyTLXgbo7DCy9FE)
{
vector m2r9tLF5GvzqenV=kyTLXgbo7DCy9FE.GetPosition();
fSizNH7cC3wenXT(bGCu31awfjJsanF, m2r9tLF5GvzqenV, WhaJaboBYkFwug("5BA54C6592B96F4383976A5E8F58", ("G6DlHvFdLMxOhM".Hash() + __LINE__.ToInt())), caf0YscmZdQcJ1U);
}
}
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B28CB88571AC58", ("Pim5Z4mQqB8rSK".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(vehicleType));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A56664CBAECEC14BA1725655", ("xKBlbUwtubh9rn".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("999167B7724D", ("nAARyPrIkltca0".Hash() + __LINE__.ToInt())), damageAmount.ToString());
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("D76ACA51", ("bnyImyikNOJg4K".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(dmgZone));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("CE8C9BC76EB0", ("Qr2ENHoRRnkZNM".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(sourceInfo));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A066895C7C77945E5E9788", ("s03bI5JCKqFy46".Hash() + __LINE__.ToInt())), isDestroyed.ToString());
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("91849BCA68B2", ("vKkLv9mo7q2NXD".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("5568BD5EB47569A9", ("o5zYkKCKPFJCul".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("C15F616BA1AF4F88A6A69F88B7", ("bsbkyCy8UlgpnK".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void RVm0dQ8XTdvHqQQ(string boatType, float damageAmount, string dmgZone, string sourceInfo, vector position, string persistentID, string nearestLandmark, bool isDestroyed)
{
		//Print("[BoatDamage] !");
if(damageAmount<=2)
{
return;
}
		string action=g_LocalizationManager.autodamaged;
string damageInfo;
if(isDestroyed)
{
			damageInfo=g_LocalizationManager.wasdestroyed;
}
else 
{
damageInfo=g_LocalizationManager.receiveddamage + WhaJaboBYkFwug("4C33", ("LgQbB7OMRNwov7".Hash() + __LINE__.ToInt())) + damageAmount.ToString()+ WhaJaboBYkFwug("4E64", ("P0gLxLK6SXMiPU".Hash() + __LINE__.ToInt())) + g_LocalizationManager.inZone + WhaJaboBYkFwug("72", ("kecVQQGbrbSeee".Hash() + __LINE__.ToInt())) + dmgZone;
}
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("79", ("1el0rUR5ynMF6z".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("52", ("lEXQYkByDxxtah".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("0F", ("SAR0kdqGzCKmIA".Hash() + __LINE__.ToInt())) + action + WhaJaboBYkFwug("7D", ("ECNrjq6ogm1h09".Hash() + __LINE__.ToInt())) + boatType + WhaJaboBYkFwug("2982469D430F", ("RiXpFn5HlpR3H6".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("2648", ("DmAkaYaCqzaa5b".Hash() + __LINE__.ToInt())) + damageInfo + WhaJaboBYkFwug("1D873D", ("dkOzVWlcGWNdlN".Hash() + __LINE__.ToInt())) + sourceInfo + WhaJaboBYkFwug("291A", ("eaqsBkBr02bWYo".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("1A", ("ZHUi0gOe3nVUr2".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.boatDamageTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.boatDamageLog)
{
rsuSYfdfThqoiMm.XLdOqCmcuw7Gixn(boatType, damageAmount, dmgZone, sourceInfo, position, persistentID, nearestLandmark, isDestroyed, WhaJaboBYkFwug("465C58B5876A7A4CC1B1", ("WXXLKjDICMptAk".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.boatDamageLog)
{
Q8F5CVqNBWhMfzS.edTtNuyGIU8RApu(boatType, damageAmount, dmgZone, sourceInfo, position, persistentID, nearestLandmark, isDestroyed, WhaJaboBYkFwug("8D6F4BAE5F8F7249C48F", ("OpveXHSPj92LPL".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string oZcF4K6zA6523lT=action + WhaJaboBYkFwug("53", ("pVjlCQoexu3YTS".Hash() + __LINE__.ToInt())) + boatType + WhaJaboBYkFwug("1578318F6B70", ("j1QHSIn4Xdt5a3".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("0A0B", ("RnDI8uW5wKMv6Y".Hash() + __LINE__.ToInt())) + damageInfo + WhaJaboBYkFwug("7C", ("7XiFLw2e7oU2QW".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("32", ("k1LYS9hcDTfbQo".Hash() + __LINE__.ToInt())) + nearestLandmark;
string oizoUqFJgtlAzem=kVE2219y2FTxws6.IRmMEMZc0jhlGSO(sourceInfo);
if(oizoUqFJgtlAzem !="")
{
Man Kpl2nkpEEWKXgUP=GetPlayerByIdentity(oizoUqFJgtlAzem);
if(Kpl2nkpEEWKXgUP)
{
vector A7CfQhQuWPjCGVz=Kpl2nkpEEWKXgUP.GetPosition();
fSizNH7cC3wenXT(oizoUqFJgtlAzem, A7CfQhQuWPjCGVz, WhaJaboBYkFwug("855E49CA7D5E7153A35C6F", ("DkyqIhLcdyHHVW".Hash() + __LINE__.ToInt())), oZcF4K6zA6523lT);
}
}
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("726241B0", ("OJoL7yoJ9cbEIU".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(boatType));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("BA577E78B5C69A668E8E3287", ("PgkTXBBNX1eGT6".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("8C96C442C16C", ("NwW3Go1DsLYsAH".Hash() + __LINE__.ToInt())), damageAmount.ToString());
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A89C61C1", ("dxXh18hGzHCBrW".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(dmgZone));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("86C05D9A4D55", ("Zcxl18sM27xP7N".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(sourceInfo));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("6BAD8A9A777582C4A39E6F", ("N1EPAr4sDCTV1k".Hash() + __LINE__.ToInt())), isDestroyed.ToString());
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("BE6864CA4AB6", ("mheWBmTHzF6zDD".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("9E467FAACA67CFC7", ("A6CZICcmS8a3Gu".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("51579B8F34BCA2A75988", ("wuIhdK0YwWKHsD".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void diPGjswbkz4ZvdC(string playerNick, string steamID, string action, string carName, string persistentID, vector position, string nearestLandmark)
{
		//Print("[CarInt] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("74", ("DBA1pbi9462qNF".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("7B", ("O3Fo6s2l7bNUhD".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("1F", ("mM6wHz1FLUODB3".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("0B", ("IzABIGIDpQ3wor".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("63", ("kv6vPzRD2jgRZF".Hash() + __LINE__.ToInt())) + action + WhaJaboBYkFwug("7E", ("GQCppSoULT3Hm6".Hash() + __LINE__.ToInt())) + carName + WhaJaboBYkFwug("4B6548572777", ("hpvtxAg51VYjIg".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("83150B", ("o4xq7rCBFSeMt9".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("52", ("g2hAstOZKWY1nd".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.vehicleInteractionTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.vehicleInteractionLog)
{
rsuSYfdfThqoiMm.TIvOEd8UdTrnFN2(playerNick, steamID, action, carName, persistentID, position, nearestLandmark, WhaJaboBYkFwug("B27FA1C471719B39ACAD46558B4A81786B82", ("vho5fZooqZowsP".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.vehicleInteractionLog)
{
Q8F5CVqNBWhMfzS.tzMC6CicRGnPGt2(playerNick, steamID, action, carName, persistentID, position, nearestLandmark, WhaJaboBYkFwug("639894A2C165A58A8ECF69A88897CEC5748F", ("GXCkHBV2G29hQH".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string Sexc5NP13EAmEE8=action + WhaJaboBYkFwug("5B", ("aTBwXvlCyqZs0i".Hash() + __LINE__.ToInt())) + carName + WhaJaboBYkFwug("08172E9F8D18", ("WRs9ORxFx8pAdv".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("6F6038", ("ZfBsBSt0Ekc40A".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("32", ("mzGigzorBvJu2N".Hash() + __LINE__.ToInt())) + nearestLandmark;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("5D67931053A9CC837B7C787E8D80B5", ("f1IR58FB6Vh0cc".Hash() + __LINE__.ToInt())), Sexc5NP13EAmEE8);
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("5F624CA2A74F8E", ("d8ewmsdbOL2Ea8".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B8C19F997689", ("HcuwXX1ikqI3cn".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("89AE7C6A7E70", ("itN2zdabIVPgY6".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(action));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A2A48D", ("26Thg5uyFZVKpd".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(carName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("AC7C9965C4AAB59DCD9C4E29", ("zPCFZQGVzaqy5z".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("C2C5C06E4A9A", ("uoj6ae1fPwLpjw".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("B4646AB877C07763", ("G7mod4YzNIpHWR".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("D54974599D62A2745EC87265945ECA70759F", ("WR0lSbc6WMwBrE".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void T9aVkyOmsnSoDRz(string playerNick, string steamID, string persistentID, vector position, string nearestLandmark)
{
		//Print("[FlagConst] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("6F", ("0lVKJqGV58Sh6e".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("38", ("fOJI55kFwXCcew".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("19", ("0SKOsK7Y3pjuK6".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("68", ("9Ilp4hnbi0ypb8".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("14", ("DCZjPxqOLmg3T0".Hash() + __LINE__.ToInt())) + g_LocalizationManager.builtFlagpole + WhaJaboBYkFwug("66644E939118", ("zxaFqtjqIWBkkZ".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("3577", ("v4vSBbXhBnYEVS".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("77", ("PG1p7Wj2RAyUzV".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.flagConstructionTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.flagConstructionLog)
{
rsuSYfdfThqoiMm.A5NTsbFeiGggMMx(playerNick, steamID, persistentID, position, nearestLandmark, WhaJaboBYkFwug("8092B46C255C96C7A46A929F7553706C", ("S4zSpRqpXdWZth".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.flagConstructionLog)
{
Q8F5CVqNBWhMfzS.awDHbdFDuqTL1x6(playerNick, steamID, persistentID, position, nearestLandmark, WhaJaboBYkFwug("637BA991776BAE856D9F785671C08AC1", ("JfCAXLRaEXu7lz".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string Sqj1JWwQTlcGKzx=g_LocalizationManager.builtFlagpole + WhaJaboBYkFwug("317F41322053", ("1k2HCczSUChFkc".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("5902", ("r6uQFqfMsfk344".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("50", ("W8oi0OEQ8XBKnI".Hash() + __LINE__.ToInt())) + nearestLandmark;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("774F78A97672C8BC987AC77C9F4FC4A0", ("YnwRqmeaWrNyHp".Hash() + __LINE__.ToInt())), Sqj1JWwQTlcGKzx);
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("8D5F58A5AB5D65", ("L64AubX1FQR1bk".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("CEC66C90A5CC", ("KnabrtxFMZP6Qb".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A8BABFA0BCBD61AA528FA629", ("uXr6LtqcPTnIyO".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("6595B8B6A9C5", ("VDU5sOL6PkD0oS".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A5668493914B74AD", ("hSMCpDE1CwGxEl".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("7DC1925155537559CCAA86B4B97987A5", ("4ccykGLiIVfudB".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void a4tkUTILkp6L4t1(string persistentID, vector position, string nearestLandmark)
{
		//Print("[FlagDis] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("1D", ("ewn9XUNGmE7UXu".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("33", ("RkhXkLdssxTdJc".Hash() + __LINE__.ToInt())) + position[2].ToString();
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("6A", ("UeUObp0T8H2OGC".Hash() + __LINE__.ToInt())) + g_LocalizationManager.flagpoleDisappeared + WhaJaboBYkFwug("7916A32C461C", ("B8LkBFVLugMVz9".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("2A7B", ("kls3021ATPOqbo".Hash() + __LINE__.ToInt())) + g_LocalizationManager.fromWorld + WhaJaboBYkFwug("64", ("DCII66dBPt1UVS".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("62", ("YGbLecqJiaYFQp".Hash() + __LINE__.ToInt())) + nearestLandmark;
if(wRTasJwH43kcdVD.flagDisappearanceTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.flagDisappearanceLog)
{
rsuSYfdfThqoiMm.zIHQgluJn00bZPi(persistentID, position, nearestLandmark, WhaJaboBYkFwug("6BC464A5526E958FAE627C93999A4FAD88", ("AH8th0ItTbxDwa".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.flagDisappearanceLog)
{
Q8F5CVqNBWhMfzS.Af06cy9dxUXc0y1(persistentID, position, nearestLandmark, WhaJaboBYkFwug("B9A1B749616D8665A9B1936AC29EAC7A79", ("YRU7QXDQnKUaQs".Hash() + __LINE__.ToInt())));
}
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("7F9D835D885FC07AA8B72D78", ("3yhrunYoSboQA8".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("C2788BD1B1B5", ("njYBNDMBi0maua".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("AE488B8A8A4CCF72", ("010CPKL80K90GB".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("A07AB96C429FBB65878A6FB487BB58C097", ("mGfNHKlhgNpHA3".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void kdYJrZhVaEINF1t(string playerNick, string steamID, string partName, string objectName, string persistentID, vector position, string nearestLandmark)
{
		//Print("[BuildPart] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("3F", ("rbD8CYSiEsEoAi".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("31", ("jUvFGY8bEJj3vH".Hash() + __LINE__.ToInt())) + position[2].ToString();
string actionText=g_LocalizationManager.buildpart + WhaJaboBYkFwug("53", ("JIcEt6kokzqAg8".Hash() + __LINE__.ToInt())) + partName + WhaJaboBYkFwug("4C", ("w7Yuwg3bQj14JD".Hash() + __LINE__.ToInt())) + g_LocalizationManager.objects + WhaJaboBYkFwug("0B", ("hs2lnYTtdo3ewQ".Hash() + __LINE__.ToInt())) + objectName;
string idText=WhaJaboBYkFwug("26446F585809", ("IVs1ckZNwynxja".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("4E3966", ("dwmQRG8teo4KR2".Hash() + __LINE__.ToInt()));
string posText=coordinates + WhaJaboBYkFwug("7D", ("GAvuTizqZLS58x".Hash() + __LINE__.ToInt())) + nearestLandmark;
string logEntry=GetTimestamp()+ WhaJaboBYkFwug("70", ("8kRYKTk3Z2w4lG".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("41", ("Y81hWFvh4STJeC".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("57", ("XyPAOANlX34pix".Hash() + __LINE__.ToInt())) + actionText + idText + posText;
if(wRTasJwH43kcdVD.actionBuildPartTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.actionBuildPartLog)
{
rsuSYfdfThqoiMm.pq2RiK7Q7U3P6Bz(playerNick, steamID, partName, objectName, persistentID, position, nearestLandmark, WhaJaboBYkFwug("737C4A53C08C7D97AF", ("JxyGWejUbE2CUh".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.actionBuildPartLog)
{
Q8F5CVqNBWhMfzS.uHscLbJ8OUqN60L(playerNick, steamID, partName, objectName, persistentID, position, nearestLandmark, WhaJaboBYkFwug("6AA14D66B2518271B9", ("r38CRjp2jsXqtv".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string lZYXeXmbEH9Rpt9=g_LocalizationManager.buildpart + WhaJaboBYkFwug("25", ("i7smRTGbiSUzGt".Hash() + __LINE__.ToInt())) + partName + WhaJaboBYkFwug("45", ("Ka3tGlpucn1qPb".Hash() + __LINE__.ToInt())) + g_LocalizationManager.objects + WhaJaboBYkFwug("0F", ("STMUiZddDz6XZE".Hash() + __LINE__.ToInt())) + objectName + WhaJaboBYkFwug("385045292A39", ("9jfBvSEEAyfQWl".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("5C3301", ("pt06QEHCndgeDh".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("4E", ("ZxGTGrhAjj9gUy".Hash() + __LINE__.ToInt())) + nearestLandmark;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("2697BD99600C7A57C6C3", ("F80IBHZjBjIujx".Hash() + __LINE__.ToInt())), lZYXeXmbEH9Rpt9);
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("79CE8086A97479", ("A7tvX4g7abHQC5".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("54AA757D66BE", ("7TZlmnP4MBMhwc".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("7E6F70AA", ("KsI0izG0lbOvF9".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(partName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("7F545EBD62BA", ("F4SNTGT5ULSZ87".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(objectName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("8B526A9D9072594875CF947A", ("791OHsrnoTDzkG".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("63668ABD4477", ("0bDaiIzLyq8ag1".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("606A94C0BE9A52B3", ("7K6RbH2CLLzNVZ".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("82BBC2A8BF9D5DBBA9", ("pAECj46wU5MN2n".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
void j81erFoVXq8KGKX(string playerNick, string steamID, string partName, string objectName, string persistentID, vector position, string nearestLandmark)
{
		//Print("[DismantlePart] !");
string coordinates=position[0].ToString()+ WhaJaboBYkFwug("87", ("QETKhhHFjKaox6".Hash() + __LINE__.ToInt())) + position[1].ToString()+ WhaJaboBYkFwug("13", ("TyZMfefHCTmcF3".Hash() + __LINE__.ToInt())) + position[2].ToString();
string actionText=g_LocalizationManager.dismantlepart + WhaJaboBYkFwug("5B", ("CNIdoCLA4DO1Wc".Hash() + __LINE__.ToInt())) + partName + WhaJaboBYkFwug("19", ("Serl3nKfDfCPPp".Hash() + __LINE__.ToInt())) + g_LocalizationManager.objects + WhaJaboBYkFwug("1E", ("6KUGkDuPyf0pix".Hash() + __LINE__.ToInt())) + objectName;
string idText    =WhaJaboBYkFwug("3E5696336134", ("qlZBz6020Sfrmm".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("47462D", ("1P0e8REIlHFWRV".Hash() + __LINE__.ToInt()));
string posText   =coordinates + WhaJaboBYkFwug("5F", ("ajiujvV48OslF3".Hash() + __LINE__.ToInt())) + nearestLandmark;
string logEntry  =GetTimestamp()+ WhaJaboBYkFwug("32", ("mabLZHzu03yw66".Hash() + __LINE__.ToInt())) + playerNick + WhaJaboBYkFwug("71", ("2Q0sekra3YRC4B".Hash() + __LINE__.ToInt())) + steamID + WhaJaboBYkFwug("78", ("QIlbGznTJVGDms".Hash() + __LINE__.ToInt())) + actionText + idText + posText;
if(wRTasJwH43kcdVD.actionDismantlePartTextLog)
{
yaSG1tdfYgEDXgS(logEntry);
}
if(Fe29gzYedsjdJvA.actionDismantlePartLog)
{
rsuSYfdfThqoiMm.WkmKQe7ZqKCHILJ(playerNick, steamID, partName, objectName, persistentID, position, nearestLandmark, WhaJaboBYkFwug("8793CB79778ED3C25B97B05F5D", ("vAA4xqvQNFZ4NU".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.actionDismantlePartLog)
{
Q8F5CVqNBWhMfzS.NqKG9xgri4vrAKs(playerNick, steamID, partName, objectName, persistentID, position, nearestLandmark, WhaJaboBYkFwug("7293A4824E7F91928BAF65709B", ("kMrrujiC2EhPrT".Hash() + __LINE__.ToInt())));
}
#ifdef GAMELABS
if(wRTasJwH43kcdVD.enableCFTools)
{
string jl4GVb3Hy9jD3cL=g_LocalizationManager.dismantlepart + WhaJaboBYkFwug("35", ("7GQHg5qg8tkcBz".Hash() + __LINE__.ToInt())) + partName + WhaJaboBYkFwug("4E", ("BLr0xvb7SQdqlG".Hash() + __LINE__.ToInt())) + g_LocalizationManager.objects + WhaJaboBYkFwug("16", ("DKnsYosKKa0J7Q".Hash() + __LINE__.ToInt())) + objectName + WhaJaboBYkFwug("091387436D1B", ("9qHWx5lNoHXx6q".Hash() + __LINE__.ToInt())) + persistentID + WhaJaboBYkFwug("3A764D", ("0KZfsWlroEvBVp".Hash() + __LINE__.ToInt())) + coordinates + WhaJaboBYkFwug("0A", ("G9VuaqPCDywxUK".Hash() + __LINE__.ToInt())) + nearestLandmark;
fSizNH7cC3wenXT(steamID, position, WhaJaboBYkFwug("9292AF9A8B66596AB58582BE6A", ("HSylZ7oNJVQnCy".Hash() + __LINE__.ToInt())), jl4GVb3Hy9jD3cL);
}
#endif
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("759E4E5267563C", ("SWSH4035VcOKCa".Hash() + __LINE__.ToInt())), steamID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("A0A6B777C07A", ("viWIDk6xvjqIzF".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(playerNick));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("CD945B66", ("r0L9gO9WzSxtA1".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(partName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("AD8871628F7C", ("qGllgeLVBdNdVB".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(objectName));
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("C7B8B35B7D94B1965BD17672", ("s8vwA6VXLkIw5c".Hash() + __LINE__.ToInt())), persistentID);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("45CB5693B960", ("wX0ouY9tYEg5kB".Hash() + __LINE__.ToInt())), coordinates);
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("8C7EAD785965AE8E", ("v9qoW1HWVQaGCr".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(nearestLandmark));
EEeAxjskc0d1cre(WhaJaboBYkFwug("88B97BA3AC94CF7EB9935DBA94", ("uIvZe7GNEVXshS".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
private void yaSG1tdfYgEDXgS(string logEntry)
{
FileHandle logFile=OpenFile(logFileName, FileMode.APPEND);
if(logFile !=0)
{
FPrintln(logFile, logEntry);
CloseFile(logFile);
}
}
private void eRtOHr9YyH1P4Bo()
{
array<string>playerLines=new array<string>();
World world=GetGame().GetWorld();
if(world)
{
array<Man>players=new array<Man>;
world.GetPlayerList(players);
if(players.Count()<1)
{
return;
}
int count=0;
			string allPlayersLogMessage=GetTimestamp()+ " - " + g_LocalizationManager.playerList + ":\n";
FileHandle logFile=OpenFile(logFileName, FileMode.APPEND);
foreach(Man player:players)
{
if(player.GetIdentity())
{
string playerID=player.GetIdentity().GetPlainId();
string playerName=player.GetIdentity().GetName();
vector playerPos=player.GetPosition();
string locationDescription=GetNearestLandmarkDescription(playerPos);
float playtime=player.StatGet(AnalyticsManagerServer.STAT_PLAYTIME);
int playtimeSecs=Math.Floor(playtime);
					int days=playtimeSecs / 86400;
					int hours=(playtimeSecs % 86400)/ 3600;
					int minutes=(playtimeSecs % 3600)/ 60;
					string timeFormatted=days.ToString()+ " " + g_LocalizationManager.days + " " + hours.ToString()+ " " + g_LocalizationManager.hours + " " + minutes.ToString()+ " " + g_LocalizationManager.minutes;
allPlayersLogMessage +=g_LocalizationManager.player + WhaJaboBYkFwug("667B", ("kHcJHVEQQJz1Oo".Hash() + __LINE__.ToInt())) + playerName + WhaJaboBYkFwug("4C3C63964D7C", ("ipdIA251e1eeSp".Hash() + __LINE__.ToInt())) + playerID + WhaJaboBYkFwug("655C1C", ("ZqYpkd9KvatigO".Hash() + __LINE__.ToInt()));
allPlayersLogMessage +=g_LocalizationManager.location + WhaJaboBYkFwug("6449", ("0Gb5Gzj07zASWb".Hash() + __LINE__.ToInt())) + playerPos.ToString()+ WhaJaboBYkFwug("107652", ("cXa3t5X4hgr6RC".Hash() + __LINE__.ToInt())) + locationDescription + WhaJaboBYkFwug("4245", ("DUTScgC9Ud31Kc".Hash() + __LINE__.ToInt()));
					allPlayersLogMessage +=g_LocalizationManager.timeInGame + ": " + timeFormatted + "\n";
string coords=playerPos[0].ToString()+ WhaJaboBYkFwug("561B", ("ZcMgaa3NJ6dPgu".Hash() + __LINE__.ToInt())) + playerPos[1].ToString()+ WhaJaboBYkFwug("8B00", ("MO0sMdpDtCaVOJ".Hash() + __LINE__.ToInt())) + playerPos[2].ToString();
string coordLink=rnWtKLKkNRcJpHv()+ playerPos[0].ToString()+ WhaJaboBYkFwug("27", ("4IgDuzcqAHrbbZ".Hash() + __LINE__.ToInt())) + playerPos[2].ToString()+ WhaJaboBYkFwug("6E88", ("qMRtHJAX89DmKJ".Hash() + __LINE__.ToInt()));
string line=playerName + WhaJaboBYkFwug("A7", ("EokZzMX3gdFsFY".Hash() + __LINE__.ToInt())) + playerID + WhaJaboBYkFwug("97", ("uDhWU4nJRQEEVH".Hash() + __LINE__.ToInt())) + coords + WhaJaboBYkFwug("AF", ("smi2DO7p47YhuN".Hash() + __LINE__.ToInt())) + coordLink + WhaJaboBYkFwug("5C", ("dw1o1JsHBCzWNt".Hash() + __LINE__.ToInt())) + timeFormatted;
playerLines.Insert(line);
count++;
if(count % 10==0)
{
if(logFile !=0)
{
if(wRTasJwH43kcdVD.showPlayersList)
{
FPrintln(logFile, allPlayersLogMessage);
}
}
						allPlayersLogMessage=GetTimestamp()+ " - " + g_LocalizationManager.playerListContinued + ":\n";
}
}
}
if(allPlayersLogMessage !="")
{
if(logFile !=0)
{
if(wRTasJwH43kcdVD.showPlayersList)
{
FPrintln(logFile, allPlayersLogMessage);
}
}
}
if(logFile !=0)
{
CloseFile(logFile);
}
}
if(Fe29gzYedsjdJvA.sendPlayerList)
{
rsuSYfdfThqoiMm.znHUz9GAFJQnom3(playerLines, WhaJaboBYkFwug("7889788A53622D95A19B", ("EuXobTpI0hD4vG".Hash() + __LINE__.ToInt())));
}
if(aCcT4vkDiTPABcf.IsGlobalReady()&& aCcT4vkDiTPABcf.sendPlayerList)
{
Q8F5CVqNBWhMfzS.amBf5bJFH6I89F0(playerLines, WhaJaboBYkFwug("98557596947380A79C7E", ("BfwD9rxVfP5koV".Hash() + __LINE__.ToInt())));
}
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue)
{
			string YJD5cSGviM6g8hx="[";
for(int i=0;i<playerLines.Count();i++)
{
array<string>dTvuSG7ip2jEIW7=new array<string>();
				playerLines.Get(i).Split("|", dTvuSG7ip2jEIW7);
if(dTvuSG7ip2jEIW7.Count()>=5)
{
if(i>0){
						YJD5cSGviM6g8hx +=",";
}
					YJD5cSGviM6g8hx +="{";
					YJD5cSGviM6g8hx +="\"player\":\"" + eEkrV1tmTPjmzHR(dTvuSG7ip2jEIW7.Get(0))+ "\",";
					YJD5cSGviM6g8hx +="\"steamID\":\"" + dTvuSG7ip2jEIW7.Get(1)+ "\",";
					YJD5cSGviM6g8hx +="\"coords\":\"" + dTvuSG7ip2jEIW7.Get(2)+ "\",";
					YJD5cSGviM6g8hx +="\"mapUrl\":\"" + dTvuSG7ip2jEIW7.Get(3)+ "\",";
					YJD5cSGviM6g8hx +="\"playtime\":\"" + eEkrV1tmTPjmzHR(dTvuSG7ip2jEIW7.Get(4))+ "\"";
					YJD5cSGviM6g8hx +="}";
}
}
			YJD5cSGviM6g8hx +="]";
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(WhaJaboBYkFwug("7D81957286A19C", ("XxIGA9zkz2l4uo".Hash() + __LINE__.ToInt())), YJD5cSGviM6g8hx);
EEeAxjskc0d1cre(WhaJaboBYkFwug("70B04CAD585D92A7888D", ("n0YAax5B1b1jGV".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
};
class RestCallbackZF extends RestCallback
{
override void OnError(int errorCode)
{
}
override void OnTimeout()
{
}
override void OnSuccess(string data, int dataSize)
{
        //Print("[RestCallbackZF] Запрос успешно обработан. Размер данных: " + dataSize.ToString());
if(dataSize>0)
{
            //Print("[RestCallbackZF] Данные");
}
}
};
#endif
#ifdef GAMELABS
class CAsW6qXqP8Xw6mN:_Callback
{
override void OnError(int errorCode)
{
if(errorCode==5 || errorCode==6)
{
if(!GetGameLabs())
return;
if(!GetGameLabs().GetApi())
return;
GetGameLabs().GetApi().RegisterAsync();
}
}
override void OnTimeout()
{
}
override void OnSuccess(string data, int dataSize)
{
}
};
#endif
