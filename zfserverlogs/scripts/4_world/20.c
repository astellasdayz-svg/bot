#ifdef SERVER
modded class PlayerBase 
{
private ref y5ENgrSXFN218gK xDmD2RfOzrPQ9lJ=y5ENgrSXFN218gK.oagEfgeI1VHzPPT();
static string eEkrV1tmTPjmzHR(string RzYfNl9a2jNCgqG)
{
if(RzYfNl9a2jNCgqG=="")return "";
string YMOHaBU1BndGpuR=RzYfNl9a2jNCgqG;
		YMOHaBU1BndGpuR.Replace("\\", "/");
		YMOHaBU1BndGpuR.Replace("\"", "'");
		YMOHaBU1BndGpuR.Replace("\n", " ");
		YMOHaBU1BndGpuR.Replace("\r", "");
		YMOHaBU1BndGpuR.Replace("\t", " ");
return YMOHaBU1BndGpuR;
}
override void OnConnect()
{
super.OnConnect();
if(this && this.GetIdentity())
{
string UtKgkzSwFC0KUnY=this.GetIdentity().GetName();
string aL4DU8IbSc9T8Q6=this.GetIdentity().GetPlainId();
vector wTwCNz9YIhDPaHQ=this.GetPosition();
kVE2219y2FTxws6.EiliW6Ueo2DEqGU(UtKgkzSwFC0KUnY, aL4DU8IbSc9T8Q6, true, wTwCNz9YIhDPaHQ, neLfcVrbstCaCz("7C8864A2B0988A7FB46570C2679F", ("raeS24AuNpwkqC".Hash() + __LINE__.ToInt())));
Q8F5CVqNBWhMfzS.W3ukW2hLc8C87Jz(UtKgkzSwFC0KUnY, aL4DU8IbSc9T8Q6, true, wTwCNz9YIhDPaHQ, neLfcVrbstCaCz("7E6A509349566A71698AAA59B1", ("DvQNsPfp6YZ8Pe".Hash() + __LINE__.ToInt())));
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(neLfcVrbstCaCz("B99E65AE748894", ("P3fbU0tcc8ncPx".Hash() + __LINE__.ToInt())), aL4DU8IbSc9T8Q6);
yUanCaXUkY2LFD2.Insert(neLfcVrbstCaCz("A9656F7B78A0", ("HLzyfgGVHsNNWZ".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(UtKgkzSwFC0KUnY));
yUanCaXUkY2LFD2.Insert(neLfcVrbstCaCz("AE4AC469C6C3", ("tGG5GsOiSmdcRp".Hash() + __LINE__.ToInt())), neLfcVrbstCaCz("89AC6163C34F59", ("GbP7RnRKLdw4PT".Hash() + __LINE__.ToInt())));
yUanCaXUkY2LFD2.Insert(neLfcVrbstCaCz("5F899CBD5BB3", ("0hD9RKHy07Xrn1".Hash() + __LINE__.ToInt())), wTwCNz9YIhDPaHQ[0].ToString()+ neLfcVrbstCaCz("5D", ("70WAnR4uzvPnZy".Hash() + __LINE__.ToInt())) + wTwCNz9YIhDPaHQ[1].ToString()+ neLfcVrbstCaCz("1C", ("hX1VIHMnBtCZnX".Hash() + __LINE__.ToInt())) + wTwCNz9YIhDPaHQ[2].ToString());
yUanCaXUkY2LFD2.Insert(neLfcVrbstCaCz("7C705BA77358BD9E", ("mv6englFe42AG0".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(GetNearestLandmarkDescription(wTwCNz9YIhDPaHQ)));
managers.EEeAxjskc0d1cre(neLfcVrbstCaCz("7C686C7BAF6E9FA0C1B08755A4B3", ("LuFV19z9D6dHo1".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
}
override void OnDisconnect()
{
super.OnDisconnect();
if(this && this.GetIdentity())
{
string UtKgkzSwFC0KUnY=this.GetIdentity().GetName();
string aL4DU8IbSc9T8Q6=this.GetIdentity().GetPlainId();
vector wTwCNz9YIhDPaHQ=this.GetPosition();
kVE2219y2FTxws6.EiliW6Ueo2DEqGU(UtKgkzSwFC0KUnY, aL4DU8IbSc9T8Q6, false, wTwCNz9YIhDPaHQ, neLfcVrbstCaCz("C869BE5E7D7E465C6E5785A3A3C5", ("c2AgdemRu9vnSj".Hash() + __LINE__.ToInt())));
Q8F5CVqNBWhMfzS.W3ukW2hLc8C87Jz(UtKgkzSwFC0KUnY, aL4DU8IbSc9T8Q6, false, wTwCNz9YIhDPaHQ, neLfcVrbstCaCz("98846D624793889597BAB189A565605E", ("czGolIFJ19VepV".Hash() + __LINE__.ToInt())));
if(xDmD2RfOzrPQ9lJ && xDmD2RfOzrPQ9lJ.dDfagoQF78YtXqI()&& g_ZFCustomQueue){
map<string, string>yUanCaXUkY2LFD2=new map<string, string>();
yUanCaXUkY2LFD2.Insert(neLfcVrbstCaCz("9A6B96427B7962", ("di84891BFTRRgN".Hash() + __LINE__.ToInt())), aL4DU8IbSc9T8Q6);
yUanCaXUkY2LFD2.Insert(neLfcVrbstCaCz("7B8F777C94C7", ("qXA26o1SaZzD5P".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(UtKgkzSwFC0KUnY));
yUanCaXUkY2LFD2.Insert(neLfcVrbstCaCz("416AB3A8B19F", ("enCa2uICqyah69".Hash() + __LINE__.ToInt())), neLfcVrbstCaCz("6960847DA974A0B1859C", ("6bbE1eXv9d4bIE".Hash() + __LINE__.ToInt())));
yUanCaXUkY2LFD2.Insert(neLfcVrbstCaCz("A8CDC6607B87", ("lOBOco7Zj5QWcH".Hash() + __LINE__.ToInt())), wTwCNz9YIhDPaHQ[0].ToString()+ neLfcVrbstCaCz("26", ("VAcosR8PWwAbfq".Hash() + __LINE__.ToInt())) + wTwCNz9YIhDPaHQ[1].ToString()+ neLfcVrbstCaCz("7E", ("pMNbSQLnfPkNWS".Hash() + __LINE__.ToInt())) + wTwCNz9YIhDPaHQ[2].ToString());
yUanCaXUkY2LFD2.Insert(neLfcVrbstCaCz("71554EBCC5B4B4BB", ("B3vD2H3q7QkTuK".Hash() + __LINE__.ToInt())), eEkrV1tmTPjmzHR(GetNearestLandmarkDescription(wTwCNz9YIhDPaHQ)));
managers.EEeAxjskc0d1cre(neLfcVrbstCaCz("B0B1B9AE4770517B6A50D37AA8CD", ("JPBvVtNoi5ojk0".Hash() + __LINE__.ToInt())), yUanCaXUkY2LFD2);
}
}
}
override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
{
super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
if(damageResult && source && ammo !="")
{
float Y6Km6mcmTNM1OC6=damageResult.GetDamage(dmgZone, neLfcVrbstCaCz("66467AAEBA7D", ("rWNtuYUU9FLP3U".Hash() + __LINE__.ToInt())));
if(Y6Km6mcmTNM1OC6>0.5 && managers)
{
coZVQ92slTLOVaR(this, damageResult, damageType, source, ammo, modelPos, speedCoef);
}
}
}
override void OnBleedingSourceAdded()
{
super.OnBleedingSourceAdded();
if(managers)
{
lxcnBJZ2OGYGuNV(g_LocalizationManager.receivedCut);
}
}
override void OnUnconsciousStart()
{
super.OnUnconsciousStart();
if(managers)
{
z0jNta9N1ECwkfY(true);
}
}
override void OnUnconsciousStop(int pCurrentCommandID)
{
super.OnUnconsciousStop(pCurrentCommandID);
if(managers)
{
z0jNta9N1ECwkfY(false);
}
}
void z0jNta9N1ECwkfY(bool fCG6ZlzEOrVF4TE)
{
if(GetIdentity())
{
string KNS6FWTneIbvNL9=GetIdentity().GetName();
string aL4DU8IbSc9T8Q6=GetIdentity().GetPlainId();
vector cgrUl5xHFvQppYq=GetPosition();
string HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
if(managers)
{
managers.F0XjNaEtyEAB7kW(KNS6FWTneIbvNL9, aL4DU8IbSc9T8Q6, fCG6ZlzEOrVF4TE, cgrUl5xHFvQppYq, HYV9teEzv4ZEPYP);
}
}
}
void coZVQ92slTLOVaR(PlayerBase L4NFd7RxY2wEX3m, TotalDamageResult damageResult, int damageType, EntityAI source, string ammo, vector modelPos, float speedCoef)
{
string KNS6FWTneIbvNL9=g_LocalizationManager.unknown;
string aL4DU8IbSc9T8Q6=g_LocalizationManager.unknown;
		float HM1dLimnUVAUxAr=0.0;
		float L8G3OTOCETDQjt6=0.0;
		vector cgrUl5xHFvQppYq="1 0 0";
string HYV9teEzv4ZEPYP=g_LocalizationManager.unknown;
string mEjBsP19z4b0iJj=g_LocalizationManager.unknown;
if(L4NFd7RxY2wEX3m && L4NFd7RxY2wEX3m.GetIdentity())
{
KNS6FWTneIbvNL9=L4NFd7RxY2wEX3m.GetIdentity().GetName();
aL4DU8IbSc9T8Q6=L4NFd7RxY2wEX3m.GetIdentity().GetPlainId();
HM1dLimnUVAUxAr=L4NFd7RxY2wEX3m.GetHealth("", "");
cgrUl5xHFvQppYq=L4NFd7RxY2wEX3m.GetPosition();
HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
}
if(ammo==neLfcVrbstCaCz("8E56A2795EA7765D5F607C6B419CA49E", ("TJnBlsFhQCjszI".Hash() + __LINE__.ToInt())))
{
mEjBsP19z4b0iJj=g_LocalizationManager.fall;
}
else if(source)
{
L8G3OTOCETDQjt6=vector.Distance(source.GetPosition(), cgrUl5xHFvQppYq);
mEjBsP19z4b0iJj=tlRESiHNF7EPjOC(source);
}
if(managers)
{
managers.bujZQyc4t2nSBYP(KNS6FWTneIbvNL9, aL4DU8IbSc9T8Q6, mEjBsP19z4b0iJj, ammo, HM1dLimnUVAUxAr, L8G3OTOCETDQjt6, cgrUl5xHFvQppYq, HYV9teEzv4ZEPYP);
}
}
string tlRESiHNF7EPjOC(EntityAI source)
{
if(source)
{
int P39BOX5C1ibkXkp, YqA6hX4laFMdzRG, CIRF9T637bg3sDz, jgS8qfDE5by4AeV;
source.GetPersistentID(P39BOX5C1ibkXkp, YqA6hX4laFMdzRG, CIRF9T637bg3sDz, jgS8qfDE5by4AeV);
string DA5jIZLcTeS5NA2=neLfcVrbstCaCz("765A6A53872B", ("Tmdiipm5jgJ3tT".Hash() + __LINE__.ToInt())) + P39BOX5C1ibkXkp.ToString()+ neLfcVrbstCaCz("38", ("CrWNEdHtnMjctg".Hash() + __LINE__.ToInt())) + YqA6hX4laFMdzRG.ToString()+ neLfcVrbstCaCz("76", ("1bLaXSjdmLghcL".Hash() + __LINE__.ToInt())) + CIRF9T637bg3sDz.ToString()+ neLfcVrbstCaCz("6C", ("XrsLzbSvsshmQE".Hash() + __LINE__.ToInt())) + jgS8qfDE5by4AeV.ToString()+ neLfcVrbstCaCz("42", ("c3HssafucbC3mc".Hash() + __LINE__.ToInt()));
EntityAI rNQt7GBeikn7z7A=EntityAI.Cast(source.GetHierarchyParent());
if(rNQt7GBeikn7z7A && rNQt7GBeikn7z7A.IsInherited(PlayerBase))
{
PlayerBase tx6HQ2iHvE6IwvO=PlayerBase.Cast(rNQt7GBeikn7z7A);
if(tx6HQ2iHvE6IwvO && tx6HQ2iHvE6IwvO.GetIdentity())
{
return g_LocalizationManager.player + neLfcVrbstCaCz("242C", ("dlbFScYBHFvPYJ".Hash() + __LINE__.ToInt())) + tx6HQ2iHvE6IwvO.GetIdentity().GetName()+ neLfcVrbstCaCz("5A19", ("05j2d2ky9shZ6A".Hash() + __LINE__.ToInt())) + tx6HQ2iHvE6IwvO.GetIdentity().GetPlainId()+ neLfcVrbstCaCz("1612", ("qeujc8UvYDyslN".Hash() + __LINE__.ToInt())) + g_LocalizationManager.with + neLfcVrbstCaCz("72", ("KdzrrBbZqpdmsJ".Hash() + __LINE__.ToInt())) + source.GetType();
}
}
else if(source.IsInherited(ZombieBase))
{
return g_LocalizationManager.zombie + neLfcVrbstCaCz("7564", ("KSEzCrHlmbNW89".Hash() + __LINE__.ToInt())) + source.GetType();
}
else if(source.IsInherited(AnimalBase))
{
return g_LocalizationManager.animal + neLfcVrbstCaCz("325C", ("6OYlMhGp4mpsbJ".Hash() + __LINE__.ToInt())) + source.GetType();
}
return g_LocalizationManager.object + neLfcVrbstCaCz("5833", ("RABCW1SSV3Dre2".Hash() + __LINE__.ToInt())) + source.GetType()+ DA5jIZLcTeS5NA2;
}
return g_LocalizationManager.unknown;
}
void lxcnBJZ2OGYGuNV(string zby1iow864274vJ)
{
string KNS6FWTneIbvNL9=g_LocalizationManager.unknown;
string aL4DU8IbSc9T8Q6=g_LocalizationManager.unknown;
		vector cgrUl5xHFvQppYq="1 0 0";
string HYV9teEzv4ZEPYP=g_LocalizationManager.unknown;
string svpiUuda7WMo9bD=g_LocalizationManager.unknown;
if(GetIdentity())
{
KNS6FWTneIbvNL9=GetIdentity().GetName();
aL4DU8IbSc9T8Q6=GetIdentity().GetPlainId();
cgrUl5xHFvQppYq=GetPosition();
HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
svpiUuda7WMo9bD=g_LocalizationManager.cutCount + neLfcVrbstCaCz("2564", ("jgaFDJk8pAvK0u".Hash() + __LINE__.ToInt())) + GetBleedingSourceCount().ToString();
}
if(managers)
{
string qyRRQsCphKbEL3I=cgrUl5xHFvQppYq[0].ToString()+ neLfcVrbstCaCz("21", ("F6NAvCdG6WDhox".Hash() + __LINE__.ToInt())) + cgrUl5xHFvQppYq[1].ToString()+ neLfcVrbstCaCz("4D", ("gbCvjdktr1ziMC".Hash() + __LINE__.ToInt())) + cgrUl5xHFvQppYq[2].ToString();
string BaYAxzGHPB0DyqO=GetTimestamp()+ neLfcVrbstCaCz("4E", ("q4bpdO1bztjsj5".Hash() + __LINE__.ToInt())) + KNS6FWTneIbvNL9 + neLfcVrbstCaCz("45", ("QGVwLIrOsGXVSC".Hash() + __LINE__.ToInt())) + aL4DU8IbSc9T8Q6 + neLfcVrbstCaCz("78", ("BJGns4dA5UHkCv".Hash() + __LINE__.ToInt())) + zby1iow864274vJ + neLfcVrbstCaCz("73500E", ("aGqxGLJEClSv6y".Hash() + __LINE__.ToInt())) + svpiUuda7WMo9bD + neLfcVrbstCaCz("6023", ("syxf3PKzeVEq34".Hash() + __LINE__.ToInt())) + qyRRQsCphKbEL3I + neLfcVrbstCaCz("10", ("CiKuMKly7COuPn".Hash() + __LINE__.ToInt())) + HYV9teEzv4ZEPYP;
managers.XnH3Jx39MzWbPp7(KNS6FWTneIbvNL9, aL4DU8IbSc9T8Q6, zby1iow864274vJ, cgrUl5xHFvQppYq, HYV9teEzv4ZEPYP, svpiUuda7WMo9bD, BaYAxzGHPB0DyqO);
}
}
static string GetTimestamp()
{
int Sw9BGv9jk9UAKvK, jYAxa2sRcAj3jtx, YeXN504qG5GYOw0, nOFgSaKV7Vcb0LV, NAmL6RKqE3fD7CR, DbzpMuLKDkYUxZi;
GetYearMonthDay(Sw9BGv9jk9UAKvK, jYAxa2sRcAj3jtx, YeXN504qG5GYOw0);
GetHourMinuteSecond(nOFgSaKV7Vcb0LV, NAmL6RKqE3fD7CR, DbzpMuLKDkYUxZi);
return neLfcVrbstCaCz("9A", ("KUgjFOT6NuOGTC".Hash() + __LINE__.ToInt())) + YeXN504qG5GYOw0.ToStringLen(2)+ neLfcVrbstCaCz("8A", ("vYprWLbyoUHN1b".Hash() + __LINE__.ToInt())) + jYAxa2sRcAj3jtx.ToStringLen(2)+ neLfcVrbstCaCz("11", ("KBAQ2pZSCcBMGY".Hash() + __LINE__.ToInt())) + Sw9BGv9jk9UAKvK.ToStringLen(4)+ neLfcVrbstCaCz("91735F0F", ("7agJN8wt4ElckK".Hash() + __LINE__.ToInt())) + nOFgSaKV7Vcb0LV.ToStringLen(2)+ neLfcVrbstCaCz("20", ("4IFfeFTBxKxWs5".Hash() + __LINE__.ToInt())) + NAmL6RKqE3fD7CR.ToStringLen(2)+ neLfcVrbstCaCz("42", ("tac1GogzJLeJJY".Hash() + __LINE__.ToInt())) + DbzpMuLKDkYUxZi.ToStringLen(2);
}
};
#endif
