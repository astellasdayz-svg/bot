#ifdef SERVER
class Poqzw4iVPwEO5u9
{
protected RestApi xfZALceHBd0WNc6;
protected bool OZEhWHTDTLWT1kS;
protected ref array<string>vNfftc13tCF6NtJ;
y5ENgrSXFN218gK lH1llthFA92teev=y5ENgrSXFN218gK.oagEfgeI1VHzPPT();
protected int blDEPUnHz9xUbf8=1000;
protected int gueTX5P3HwR7peX;
protected int wubZZ4XJmHwDvmx;
protected int n9Irb7FtfzniJfa;
void Poqzw4iVPwEO5u9()
{
xfZALceHBd0WNc6=GetRestApi();
OZEhWHTDTLWT1kS=false;
vNfftc13tCF6NtJ=new array<string>();
if(xfZALceHBd0WNc6){
xfZALceHBd0WNc6.SetOption(ERestOption.ERESTOPTION_READOPERATION, 10);
xfZALceHBd0WNc6.SetOption(ERestOption.ERESTOPTION_CONNECTION, 10);
}
}
void riOE6ARQ1IpLXTD(string gDJNoXbjdD0tCth)
{
if(gDJNoXbjdD0tCth=="")return;
vNfftc13tCF6NtJ.Insert(gDJNoXbjdD0tCth);
VPjhXW2apg3POSN();
}
protected void VPjhXW2apg3POSN()
{
if(OZEhWHTDTLWT1kS)return;
OZEhWHTDTLWT1kS=true;
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(iEs7vMiGD2sCaLJ, blDEPUnHz9xUbf8, true);
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Wh0VfiYdcRriiNX, 5000, true);
}
protected void iEs7vMiGD2sCaLJ()
{
int Tg4L1fjJaj8NapT=GetGame().GetTime();
int BuH6SHXFPvuCoJY=Math.Floor(Tg4L1fjJaj8NapT / 1000);
if(BuH6SHXFPvuCoJY !=wubZZ4XJmHwDvmx){
wubZZ4XJmHwDvmx=BuH6SHXFPvuCoJY;
gueTX5P3HwR7peX=0;
}
if(vNfftc13tCF6NtJ.Count()==0){
n9Irb7FtfzniJfa=Tg4L1fjJaj8NapT;
return;
}
if(gueTX5P3HwR7peX>=lH1llthFA92teev.logPerSecond){
return;
}
string GBRujl4RUpziYGE=vNfftc13tCF6NtJ.Get(0);
vNfftc13tCF6NtJ.RemoveOrdered(0);
EEeAxjskc0d1cre(GBRujl4RUpziYGE);
gueTX5P3HwR7peX++;
n9Irb7FtfzniJfa=Tg4L1fjJaj8NapT;
}
protected void EEeAxjskc0d1cre(string gDJNoXbjdD0tCth)
{
if(!lH1llthFA92teev.customLogEnable)return;
if(lH1llthFA92teev.customLogUrl=="")return;
RestContext mnf1bRJB7lITUnA=GetRestApi().GetRestContext(lH1llthFA92teev.customLogUrl);
mnf1bRJB7lITUnA.SetHeader(JZmamFGkiQimMO("99A6A25A9B578DA64EB26D32AB629859", ("eKuh2c64AZCnBI".Hash() + __LINE__.ToInt())));
mnf1bRJB7lITUnA.POST(new RD3PJQZhPhJMuoq(this, gDJNoXbjdD0tCth), "", gDJNoXbjdD0tCth);
}
protected void Wh0VfiYdcRriiNX()
{
int Tg4L1fjJaj8NapT=GetGame().GetTime();
if(Tg4L1fjJaj8NapT - n9Irb7FtfzniJfa>15000){
OZEhWHTDTLWT1kS=false;
VPjhXW2apg3POSN();
}
}
}
class RD3PJQZhPhJMuoq:RestCallback
{
protected ref Poqzw4iVPwEO5u9 vNfftc13tCF6NtJ;
protected string eg1HsBlsPFsU4TE;
void RD3PJQZhPhJMuoq(Poqzw4iVPwEO5u9 jmpuBid9MN3mUjC, string GBRujl4RUpziYGE)
{
vNfftc13tCF6NtJ=jmpuBid9MN3mUjC;
eg1HsBlsPFsU4TE=GBRujl4RUpziYGE;
}
override void OnError(int errorCode){
if(vNfftc13tCF6NtJ){
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(vNfftc13tCF6NtJ.riOE6ARQ1IpLXTD, 5000, false, eg1HsBlsPFsU4TE);
}
}
override void OnTimeout(){
if(vNfftc13tCF6NtJ){
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(vNfftc13tCF6NtJ.riOE6ARQ1IpLXTD, 5000, false, eg1HsBlsPFsU4TE);
}
}
override void OnSuccess(string data, int dataSize){
}
}
ref Poqzw4iVPwEO5u9 g_ZFCustomQueue;
void ZF_InitCustomQueue()
{
if(!g_ZFCustomQueue){
g_ZFCustomQueue=new Poqzw4iVPwEO5u9();
}
}
#endif
