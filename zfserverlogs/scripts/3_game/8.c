#ifdef SERVER
class fnC1flPpCee5r0s
{
string DM4lcfXaYn6N8D3;
int K4QJ7Gj31eIgYKj;
void fnC1flPpCee5r0s(string KNOzy66xdA8fCZY, int jixNLx8NIrB5c4H){DM4lcfXaYn6N8D3=KNOzy66xdA8fCZY;K4QJ7Gj31eIgYKj=jixNLx8NIrB5c4H;}
};
class LaEVL1KKKdpPo50
{
protected int blDEPUnHz9xUbf8=1000;
protected int HYTzKqRcoFXrnEN=0;
protected int gueTX5P3HwR7peX=0;
protected int yTYzIAKRUY8TJr4=25;
protected RestApi xfZALceHBd0WNc6;
protected bool OZEhWHTDTLWT1kS;
protected int n9Irb7FtfzniJfa=0;
protected ref map<string, ref array<ref fnC1flPpCee5r0s>>nEG9sleTVGGHWeH;
void LaEVL1KKKdpPo50()
{
xfZALceHBd0WNc6=GetRestApi();
OZEhWHTDTLWT1kS=false;
nEG9sleTVGGHWeH=new map<string, ref array<ref fnC1flPpCee5r0s>>();
if(xfZALceHBd0WNc6)
{
xfZALceHBd0WNc6.SetOption(ERestOption.ERESTOPTION_READOPERATION, 10);
xfZALceHBd0WNc6.SetOption(ERestOption.ERESTOPTION_CONNECTION, 10);
}
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Wh0VfiYdcRriiNX, 10000, true);
}
void VPjhXW2apg3POSN()
{
if(OZEhWHTDTLWT1kS)return;
CEDyDgRaVq769UH lH1llthFA92teev=CEDyDgRaVq769UH.oagEfgeI1VHzPPT();
if(!lH1llthFA92teev.IsGlobalReady())return;
OZEhWHTDTLWT1kS=true;
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(iEs7vMiGD2sCaLJ, blDEPUnHz9xUbf8, true);
}
protected void Wh0VfiYdcRriiNX()
{
if(!OZEhWHTDTLWT1kS)return;
int Tg4L1fjJaj8NapT=GetGame().GetTime();
if(Tg4L1fjJaj8NapT - n9Irb7FtfzniJfa>15000)
{
OZEhWHTDTLWT1kS=false;
VPjhXW2apg3POSN();
}
}
void riOE6ARQ1IpLXTD(string T4BEzrZNWWS9dPo, string ybowoXBqqiE0pQd, int DJpunolvmml7ppQ)
{
if(T4BEzrZNWWS9dPo=="")return;
if(ybowoXBqqiE0pQd=="")return;
ref array<ref fnC1flPpCee5r0s>jmpuBid9MN3mUjC;
if(nEG9sleTVGGHWeH.Contains(T4BEzrZNWWS9dPo)){
jmpuBid9MN3mUjC=nEG9sleTVGGHWeH.Get(T4BEzrZNWWS9dPo);
}else{
jmpuBid9MN3mUjC=new array<ref fnC1flPpCee5r0s>();
nEG9sleTVGGHWeH.Insert(T4BEzrZNWWS9dPo, jmpuBid9MN3mUjC);
}
jmpuBid9MN3mUjC.Insert(new fnC1flPpCee5r0s(ybowoXBqqiE0pQd, DJpunolvmml7ppQ));
VPjhXW2apg3POSN();
}
void Xz1FrWSqW7c0Bkl(string T4BEzrZNWWS9dPo, string ybowoXBqqiE0pQd, int DJpunolvmml7ppQ)
{
ref array<ref fnC1flPpCee5r0s>jmpuBid9MN3mUjC;
if(nEG9sleTVGGHWeH.Contains(T4BEzrZNWWS9dPo)){
jmpuBid9MN3mUjC=nEG9sleTVGGHWeH.Get(T4BEzrZNWWS9dPo);
}else{
jmpuBid9MN3mUjC=new array<ref fnC1flPpCee5r0s>();
nEG9sleTVGGHWeH.Insert(T4BEzrZNWWS9dPo, jmpuBid9MN3mUjC);
}
jmpuBid9MN3mUjC.InsertAt(new fnC1flPpCee5r0s(ybowoXBqqiE0pQd, DJpunolvmml7ppQ), 0);
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
string T4BEzrZNWWS9dPo=nEG9sleTVGGHWeH.GetKey(LDHefUmDqI35YI1);
ref array<ref fnC1flPpCee5r0s>jmpuBid9MN3mUjC=nEG9sleTVGGHWeH.GetElement(LDHefUmDqI35YI1);
if(!jmpuBid9MN3mUjC)continue;
if(jmpuBid9MN3mUjC.Count()==0)continue;
int DJpunolvmml7ppQ=0;
string s2z59jRxpsw5kFy=UYZCexAlFnnslyB(jmpuBid9MN3mUjC, DJpunolvmml7ppQ);
if(s2z59jRxpsw5kFy=="")continue;
WlUpQwqxHEmVXJt(T4BEzrZNWWS9dPo, s2z59jRxpsw5kFy, DJpunolvmml7ppQ);
gueTX5P3HwR7peX++;
}
n9Irb7FtfzniJfa=GetGame().GetTime();
}
protected string UYZCexAlFnnslyB(array<ref fnC1flPpCee5r0s>jmpuBid9MN3mUjC, out int BtqQ8ejV3R6kg5X)
{
BtqQ8ejV3R6kg5X=0;
if(jmpuBid9MN3mUjC.Count()==0)return "";
fnC1flPpCee5r0s WBBhDtmLRfhTlRs=jmpuBid9MN3mUjC.Get(0);
BtqQ8ejV3R6kg5X=WBBhDtmLRfhTlRs.K4QJ7Gj31eIgYKj;
string nqoYSPOz7gwEYCy=WBBhDtmLRfhTlRs.DM4lcfXaYn6N8D3;
jmpuBid9MN3mUjC.RemoveOrdered(0);
return nqoYSPOz7gwEYCy;
}
protected void WlUpQwqxHEmVXJt(string T4BEzrZNWWS9dPo, string ObrD89yRdysfzh6, int DJpunolvmml7ppQ)
{
if(!xfZALceHBd0WNc6)return;
CEDyDgRaVq769UH lH1llthFA92teev=CEDyDgRaVq769UH.oagEfgeI1VHzPPT();
string zrfuCEWdk0mVJ8s=BppXEUeAyPLqec("709273CCB1867D30998D70749697B862B89BA96510ADA2856154C68B", ("rAeH0S0avY9Edq".Hash() + __LINE__.ToInt())) + lH1llthFA92teev.botToken + BppXEUeAyPLqec("0F6B507473397977B565AC59", ("0CoPb75JZ0mqoD".Hash() + __LINE__.ToInt()));
		string TE4fM4DScXFklT5="chat_id=" + gm34n680lrI64kI(T4BEzrZNWWS9dPo)+ "&text=" + gm34n680lrI64kI(ObrD89yRdysfzh6)+ "&parse_mode=HTML"+ "&disable_web_page_preview=true";
if(DJpunolvmml7ppQ>0)
{
			TE4fM4DScXFklT5=TE4fM4DScXFklT5 + "&message_thread_id=" + DJpunolvmml7ppQ.ToString();
}
RestContext mnf1bRJB7lITUnA=GetRestApi().GetRestContext(zrfuCEWdk0mVJ8s);
mnf1bRJB7lITUnA.SetHeader(BppXEUeAyPLqec("BF5A7555AE5B6C567EA7AB385B6CB7B8716EA59988832FA2B3B5BCAE50C95FB28E", ("iNwIZSwb4B2RcM".Hash() + __LINE__.ToInt())));
umCxLZNQFF96tF2 AGppCbFogEVTzkz=new umCxLZNQFF96tF2(this, T4BEzrZNWWS9dPo, ObrD89yRdysfzh6, DJpunolvmml7ppQ);
mnf1bRJB7lITUnA.POST(AGppCbFogEVTzkz, "", TE4fM4DScXFklT5);
}
protected string gm34n680lrI64kI(string GeazgFSSAhrhcHJ)
{
string hwY381Svi3F3fcq=GeazgFSSAhrhcHJ;
		hwY381Svi3F3fcq.Replace("%", "%25");
		hwY381Svi3F3fcq.Replace("+", "%2B");
		hwY381Svi3F3fcq.Replace("&", "%26");
		hwY381Svi3F3fcq.Replace("=", "%3D");
		hwY381Svi3F3fcq.Replace("#", "%23");
		hwY381Svi3F3fcq.Replace("\n", "%0A");
return hwY381Svi3F3fcq;
}
}
ref LaEVL1KKKdpPo50 g_ZFTgQueue;
void ZF_InitTelegramQueue()
{
if(!g_ZFTgQueue){
g_ZFTgQueue=new LaEVL1KKKdpPo50();
}
g_ZFTgQueue.VPjhXW2apg3POSN();
}
#endif
