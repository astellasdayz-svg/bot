#ifdef SERVER
class iY8OWMCKriXNrFb
{
string a55pK9OPhYQeCpP;
void iY8OWMCKriXNrFb(string bZeakP2RGQxkkkB){a55pK9OPhYQeCpP=bZeakP2RGQxkkkB;}
}
class jUqqdBd7zk1ubgJ:RestCallback
{
protected ref MuwVD6AEVC0hp2l vNfftc13tCF6NtJ;
protected string DeSIbCwCWD7Gzed;
protected string eg1HsBlsPFsU4TE;
void jUqqdBd7zk1ubgJ(MuwVD6AEVC0hp2l jmpuBid9MN3mUjC, string gmz5G1pk6iICDCG, string GBRujl4RUpziYGE)
{
vNfftc13tCF6NtJ  =jmpuBid9MN3mUjC;
DeSIbCwCWD7Gzed=gmz5G1pk6iICDCG;
eg1HsBlsPFsU4TE=GBRujl4RUpziYGE;
}
override void OnError(int errorCode)
{
if(errorCode==ERestResultState.EREST_ERROR_APPERROR){
return;
}
if(vNfftc13tCF6NtJ){
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(vNfftc13tCF6NtJ.Xz1FrWSqW7c0Bkl, 5000, false, DeSIbCwCWD7Gzed, eg1HsBlsPFsU4TE);
}
}
override void OnTimeout()
{
if(vNfftc13tCF6NtJ){
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(vNfftc13tCF6NtJ.Xz1FrWSqW7c0Bkl, 5000, false, DeSIbCwCWD7Gzed, eg1HsBlsPFsU4TE);
}
}
override void OnSuccess(string data, int dataSize)
{
}
}
class MuwVD6AEVC0hp2l
{
protected int blDEPUnHz9xUbf8=1000;
protected RestApi xfZALceHBd0WNc6;
protected bool OZEhWHTDTLWT1kS;
protected ref map<string, ref array<ref iY8OWMCKriXNrFb>>nEG9sleTVGGHWeH;
protected int n9Irb7FtfzniJfa=0;
protected int HYTzKqRcoFXrnEN=0;
protected int gueTX5P3HwR7peX=0;
protected int yTYzIAKRUY8TJr4=5;
void MuwVD6AEVC0hp2l()
{
xfZALceHBd0WNc6=GetRestApi();
OZEhWHTDTLWT1kS=false;
nEG9sleTVGGHWeH=new map<string, ref array<ref iY8OWMCKriXNrFb>>();
if(xfZALceHBd0WNc6){
xfZALceHBd0WNc6.SetOption(ERestOption.ERESTOPTION_READOPERATION, 10);
xfZALceHBd0WNc6.SetOption(ERestOption.ERESTOPTION_CONNECTION, 10);
}
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Wh0VfiYdcRriiNX, 10000, true);
}
void VPjhXW2apg3POSN()
{
if(OZEhWHTDTLWT1kS)return;
OZEhWHTDTLWT1kS=true;
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(iEs7vMiGD2sCaLJ, blDEPUnHz9xUbf8, true);
}
protected void Wh0VfiYdcRriiNX()
{
if(!OZEhWHTDTLWT1kS)return;
int Tg4L1fjJaj8NapT=GetGame().GetTime();
if(Tg4L1fjJaj8NapT - n9Irb7FtfzniJfa>15000){
OZEhWHTDTLWT1kS=false;
VPjhXW2apg3POSN();
}
}
void riOE6ARQ1IpLXTD(string vW58tzvsSHLqbkl, string gDJNoXbjdD0tCth)
{
if(vW58tzvsSHLqbkl=="")return;
if(gDJNoXbjdD0tCth=="")return;
ref array<ref iY8OWMCKriXNrFb>jmpuBid9MN3mUjC;
if(nEG9sleTVGGHWeH.Contains(vW58tzvsSHLqbkl)){
jmpuBid9MN3mUjC=nEG9sleTVGGHWeH.Get(vW58tzvsSHLqbkl);
}else{
jmpuBid9MN3mUjC=new array<ref iY8OWMCKriXNrFb>();
nEG9sleTVGGHWeH.Insert(vW58tzvsSHLqbkl, jmpuBid9MN3mUjC);
}
jmpuBid9MN3mUjC.Insert(new iY8OWMCKriXNrFb(gDJNoXbjdD0tCth));
VPjhXW2apg3POSN();
}
void Xz1FrWSqW7c0Bkl(string vW58tzvsSHLqbkl, string gDJNoXbjdD0tCth)
{
ref array<ref iY8OWMCKriXNrFb>jmpuBid9MN3mUjC;
if(nEG9sleTVGGHWeH.Contains(vW58tzvsSHLqbkl)){
jmpuBid9MN3mUjC=nEG9sleTVGGHWeH.Get(vW58tzvsSHLqbkl);
}else{
jmpuBid9MN3mUjC=new array<ref iY8OWMCKriXNrFb>();
nEG9sleTVGGHWeH.Insert(vW58tzvsSHLqbkl, jmpuBid9MN3mUjC);
}
jmpuBid9MN3mUjC.InsertAt(new iY8OWMCKriXNrFb(gDJNoXbjdD0tCth), 0);
}
protected void iEs7vMiGD2sCaLJ()
{
int BuH6SHXFPvuCoJY=Math.Floor(GetGame().GetTime()/ 1000);
if(BuH6SHXFPvuCoJY !=HYTzKqRcoFXrnEN){
HYTzKqRcoFXrnEN=BuH6SHXFPvuCoJY;
gueTX5P3HwR7peX=0;
}
if(nEG9sleTVGGHWeH.Count()==0){
n9Irb7FtfzniJfa=GetGame().GetTime();
return;
}
for(int LDHefUmDqI35YI1=0;LDHefUmDqI35YI1<nEG9sleTVGGHWeH.Count();LDHefUmDqI35YI1++){
if(gueTX5P3HwR7peX>=yTYzIAKRUY8TJr4){
break;
}
string BB8EMdqlfWE6y0i=nEG9sleTVGGHWeH.GetKey(LDHefUmDqI35YI1);
ref array<ref iY8OWMCKriXNrFb>jmpuBid9MN3mUjC=nEG9sleTVGGHWeH.GetElement(LDHefUmDqI35YI1);
if(!jmpuBid9MN3mUjC)continue;
if(jmpuBid9MN3mUjC.Count()==0)continue;
string GBRujl4RUpziYGE=jmpuBid9MN3mUjC.Get(0).a55pK9OPhYQeCpP;
jmpuBid9MN3mUjC.RemoveOrdered(0);
oyBEGarcJbv3glQ(BB8EMdqlfWE6y0i, GBRujl4RUpziYGE);
gueTX5P3HwR7peX++;
}
n9Irb7FtfzniJfa=GetGame().GetTime();
}
protected void oyBEGarcJbv3glQ(string vW58tzvsSHLqbkl, string gDJNoXbjdD0tCth)
{
if(!xfZALceHBd0WNc6)return;
RestContext mnf1bRJB7lITUnA=GetRestApi().GetRestContext(vW58tzvsSHLqbkl);
mnf1bRJB7lITUnA.SetHeader(QNagePoYEmjuoy("7D77BBA54D888FACB190702C60619ABF", ("MC5JF1NtB38wEf".Hash() + __LINE__.ToInt())));
jUqqdBd7zk1ubgJ AGppCbFogEVTzkz=new jUqqdBd7zk1ubgJ(this, vW58tzvsSHLqbkl, gDJNoXbjdD0tCth);
mnf1bRJB7lITUnA.POST(AGppCbFogEVTzkz, "", gDJNoXbjdD0tCth);
}
}
ref MuwVD6AEVC0hp2l g_ZFDiscordQueue;
void ZF_InitDiscordQueue()
{
if(!g_ZFDiscordQueue){
g_ZFDiscordQueue=new MuwVD6AEVC0hp2l();
}
g_ZFDiscordQueue.VPjhXW2apg3POSN();
}
#endif
