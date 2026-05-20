#ifdef SERVER
modded class DayZPlayerImplement
{
AgrnCu1q1B9KOJs wRTasJwH43kcdVD=AgrnCu1q1B9KOJs.oagEfgeI1VHzPPT();
override void EEKilled(Object killer)
{
PlayerBase L4NFd7RxY2wEX3m=PlayerBase.Cast(this);
if(L4NFd7RxY2wEX3m && managers)
{
string QbLyUEZRAAyRskd=g_LocalizationManager.tiredOfLife;
if(L4NFd7RxY2wEX3m.GetHealth(dlxwXHBGjbEgws("84976B8A8A5E7EA844B557A4", ("8AAVILM3IRN7qG".Hash() + __LINE__.ToInt())), dlxwXHBGjbEgws("43C487B694", ("aMaFNabIwJ2xCD".Hash() + __LINE__.ToInt())))<=2500)
{
QbLyUEZRAAyRskd=g_LocalizationManager.bledOut;
}
if(killer)
{
EntityAI QEb3Xef4ZJFz1pa=EntityAI.Cast(killer);
if(QEb3Xef4ZJFz1pa)
{
if(QEb3Xef4ZJFz1pa==L4NFd7RxY2wEX3m)
{
QbLyUEZRAAyRskd=g_LocalizationManager.tiredOfLife;
}
else if(QEb3Xef4ZJFz1pa.IsWeapon())
{
QbLyUEZRAAyRskd=QEb3Xef4ZJFz1pa.GetDisplayName();
}
else if(QEb3Xef4ZJFz1pa.IsInherited(Grenade_Base)|| QEb3Xef4ZJFz1pa.IsInherited(ExplosivesBase)|| QEb3Xef4ZJFz1pa.IsInherited(TrapBase)|| QEb3Xef4ZJFz1pa.IsInherited(CarScript))
{
QbLyUEZRAAyRskd=Ibe6kh5CPIpJ3WI(killer, L4NFd7RxY2wEX3m);
}
else if(QEb3Xef4ZJFz1pa.IsInherited(ZombieBase))
{
QbLyUEZRAAyRskd=QEb3Xef4ZJFz1pa.GetDisplayName();
}
else if(QEb3Xef4ZJFz1pa.IsInherited(AnimalBase))
{
QbLyUEZRAAyRskd=QEb3Xef4ZJFz1pa.GetDisplayName();
}
else
{
QbLyUEZRAAyRskd=QEb3Xef4ZJFz1pa.GetDisplayName();
}
}
}
RRuItgT16ChW4zU(L4NFd7RxY2wEX3m, killer, QbLyUEZRAAyRskd);
}
super.EEKilled(killer);
}
string Ibe6kh5CPIpJ3WI(Object killer, PlayerBase victim)
{
if(!killer)
{
return dlxwXHBGjbEgws("6C99A9", ("jj858KF4HcETQf".Hash() + __LINE__.ToInt()));
}
CarScript HwwwR35k2mRRjHm;
if(Class.CastTo(HwwwR35k2mRRjHm, killer))
{
string rw5A08Jty5bPdf3=HwwwR35k2mRRjHm.GetDisplayName();
string ASHeF7AF8UQHMhd="";
string Ga5GDxWP70eH3bP="";
Human jdOjPviDJiJtaKg=HwwwR35k2mRRjHm.CrewDriver();
if(jdOjPviDJiJtaKg)
{
PlayerBase vJlKuCRGnzi21Q6=PlayerBase.Cast(jdOjPviDJiJtaKg);
if(vJlKuCRGnzi21Q6 && vJlKuCRGnzi21Q6.GetIdentity())
{
ASHeF7AF8UQHMhd=vJlKuCRGnzi21Q6.GetIdentity().GetName();
Ga5GDxWP70eH3bP=vJlKuCRGnzi21Q6.GetIdentity().GetPlainId();
}
}
if(ASHeF7AF8UQHMhd !="" && Ga5GDxWP70eH3bP !="")
{
return rw5A08Jty5bPdf3 + dlxwXHBGjbEgws("335F", ("9MOJVMkvGbe65g".Hash() + __LINE__.ToInt())) + ASHeF7AF8UQHMhd + dlxwXHBGjbEgws("68", ("QdBDkmxSsdqyHb".Hash() + __LINE__.ToInt())) + Ga5GDxWP70eH3bP + dlxwXHBGjbEgws("2D", ("ds0sgDapXsHjsb".Hash() + __LINE__.ToInt()));
}
if(ASHeF7AF8UQHMhd !="")
{
return rw5A08Jty5bPdf3 + dlxwXHBGjbEgws("2267", ("2EQzRSoYLCRRjq".Hash() + __LINE__.ToInt())) + ASHeF7AF8UQHMhd + dlxwXHBGjbEgws("60", ("cAWTS1mxgYB67s".Hash() + __LINE__.ToInt()));
}
return rw5A08Jty5bPdf3;
}
ExplosivesBase uYAJQHS2s5V33MC;
if(Class.CastTo(uYAJQHS2s5V33MC, killer))
{
string HMIvDXWbcL3pQ99=uYAJQHS2s5V33MC.qPOPoCDTJw0T6v0();
string KJNBA58C3Rb5KJr=uYAJQHS2s5V33MC.oOKRnLeMCwqIOj6();
if(HMIvDXWbcL3pQ99 !="" && KJNBA58C3Rb5KJr !="")
{
return killer.GetDisplayName()+ dlxwXHBGjbEgws("1D4D", ("BQMvClOyDSlECt".Hash() + __LINE__.ToInt())) + HMIvDXWbcL3pQ99 + dlxwXHBGjbEgws("5E", ("5gl0xYpExLl0qB".Hash() + __LINE__.ToInt())) + KJNBA58C3Rb5KJr + dlxwXHBGjbEgws("73", ("BAAptPOD6yry8P".Hash() + __LINE__.ToInt()));
}
if(HMIvDXWbcL3pQ99 !="")
{
return killer.GetDisplayName()+ dlxwXHBGjbEgws("2C66", ("sJ8Q2IRMJ5cnQQ".Hash() + __LINE__.ToInt())) + HMIvDXWbcL3pQ99 + dlxwXHBGjbEgws("82", ("YLG2F5gBguYgVw".Hash() + __LINE__.ToInt()));
}
return killer.GetDisplayName();
}
Grenade_Base oy4C6HmPJ3lHY3a;
if(Class.CastTo(oy4C6HmPJ3lHY3a, killer))
{
string wBRReT7ini200EE=oy4C6HmPJ3lHY3a.qPOPoCDTJw0T6v0();
string uesGaYloieCYxWh=oy4C6HmPJ3lHY3a.oOKRnLeMCwqIOj6();
if(wBRReT7ini200EE !="" && uesGaYloieCYxWh !="")
{
return killer.GetDisplayName()+ dlxwXHBGjbEgws("7720", ("R4DppAjQnOHmxv".Hash() + __LINE__.ToInt())) + wBRReT7ini200EE + dlxwXHBGjbEgws("1D", ("JaYf7FeA6TQfVn".Hash() + __LINE__.ToInt())) + uesGaYloieCYxWh + dlxwXHBGjbEgws("7E", ("BxDxvDUkjryY5s".Hash() + __LINE__.ToInt()));
}
if(wBRReT7ini200EE !="")
{
return killer.GetDisplayName()+ dlxwXHBGjbEgws("393E", ("NI9g0KfCwmoSmE".Hash() + __LINE__.ToInt())) + wBRReT7ini200EE + dlxwXHBGjbEgws("35", ("9nq4L6FWe20Abj".Hash() + __LINE__.ToInt()));
}
return killer.GetDisplayName();
}
LandMineTrap UEVL16bcBDNIt3q;
if(Class.CastTo(UEVL16bcBDNIt3q, killer))
{
string ZWLMAKjAkuoUHwK=UEVL16bcBDNIt3q.qPOPoCDTJw0T6v0();
string aBClVFAFzg3n9Bo=UEVL16bcBDNIt3q.oOKRnLeMCwqIOj6();
if(ZWLMAKjAkuoUHwK !="" && aBClVFAFzg3n9Bo !="")
{
return killer.GetDisplayName()+ dlxwXHBGjbEgws("300B", ("NKBbOPnF4COe7o".Hash() + __LINE__.ToInt())) + ZWLMAKjAkuoUHwK + dlxwXHBGjbEgws("29", ("bOCnhoFyFsDKgC".Hash() + __LINE__.ToInt())) + aBClVFAFzg3n9Bo + dlxwXHBGjbEgws("71", ("LevicxvVXHYM8m".Hash() + __LINE__.ToInt()));
}
if(ZWLMAKjAkuoUHwK !="")
{
return killer.GetDisplayName()+ dlxwXHBGjbEgws("7F22", ("iDcI4JeOXs1qQT".Hash() + __LINE__.ToInt())) + ZWLMAKjAkuoUHwK + dlxwXHBGjbEgws("36", ("hzJUuZTFFaxOox".Hash() + __LINE__.ToInt()));
}
return killer.GetDisplayName();
}
return killer.GetDisplayName();
}
void RRuItgT16ChW4zU(PlayerBase L4NFd7RxY2wEX3m, Object eRNxqXBUw76Yno5, string QbLyUEZRAAyRskd)
{
string KNS6FWTneIbvNL9=g_LocalizationManager.unknown;
string aL4DU8IbSc9T8Q6=g_LocalizationManager.unknown;
string UOH1V2n14IGQot2="";
if(eRNxqXBUw76Yno5 !=null)
{
if(L4NFd7RxY2wEX3m && L4NFd7RxY2wEX3m==eRNxqXBUw76Yno5)
{
UOH1V2n14IGQot2="";
}
else
{
UOH1V2n14IGQot2=vt24mMpmb3jI28a(eRNxqXBUw76Yno5);
}
}
		float CLq2CWBVx0fz9ct=0.0;
		vector cgrUl5xHFvQppYq="1 0 0";
string HYV9teEzv4ZEPYP=g_LocalizationManager.unknown;
string EnUKXvxHDTspwUX="";
if(wRTasJwH43kcdVD.showDeadPlayerItems)
{
TStringArray m6aVBFTcyQb7xA4=new TStringArray();
if(L4NFd7RxY2wEX3m)
{
array<EntityAI>RaS2ihyNbCm8EZ9=new array<EntityAI>;
L4NFd7RxY2wEX3m.GetInventory().EnumerateInventory(InventoryTraversalType.INORDER, RaS2ihyNbCm8EZ9);
for(int LDHefUmDqI35YI1=0;LDHefUmDqI35YI1<RaS2ihyNbCm8EZ9.Count();LDHefUmDqI35YI1++)
{
EntityAI xVYAMCiCbyvSqGp=RaS2ihyNbCm8EZ9.Get(LDHefUmDqI35YI1);
if(xVYAMCiCbyvSqGp)
{
m6aVBFTcyQb7xA4.Insert(xVYAMCiCbyvSqGp.GetType());
}
}
}
for(int bZeakP2RGQxkkkB=0;bZeakP2RGQxkkkB<m6aVBFTcyQb7xA4.Count();bZeakP2RGQxkkkB++)
{
if(bZeakP2RGQxkkkB>0 && bZeakP2RGQxkkkB % 10==0)
{
					EnUKXvxHDTspwUX +="\n";
}
if(bZeakP2RGQxkkkB % 10>0)
{
					EnUKXvxHDTspwUX +=", ";
}
EnUKXvxHDTspwUX +=m6aVBFTcyQb7xA4[bZeakP2RGQxkkkB];
}
}
if(L4NFd7RxY2wEX3m && L4NFd7RxY2wEX3m.GetIdentity())
{
KNS6FWTneIbvNL9=L4NFd7RxY2wEX3m.GetIdentity().GetName();
aL4DU8IbSc9T8Q6=L4NFd7RxY2wEX3m.GetIdentity().GetPlainId();
cgrUl5xHFvQppYq=L4NFd7RxY2wEX3m.GetPosition();
HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
}
if(eRNxqXBUw76Yno5 && L4NFd7RxY2wEX3m && eRNxqXBUw76Yno5 !=L4NFd7RxY2wEX3m)
{
EntityAI QEb3Xef4ZJFz1pa=EntityAI.Cast(eRNxqXBUw76Yno5);
if(QEb3Xef4ZJFz1pa)
{
CLq2CWBVx0fz9ct=vector.Distance(QEb3Xef4ZJFz1pa.GetPosition(), cgrUl5xHFvQppYq);
}
}
if(managers)
{
managers.ngiKJj22ELmOzrZ(KNS6FWTneIbvNL9,aL4DU8IbSc9T8Q6,UOH1V2n14IGQot2,CLq2CWBVx0fz9ct,QbLyUEZRAAyRskd,cgrUl5xHFvQppYq,HYV9teEzv4ZEPYP,EnUKXvxHDTspwUX);
}
}
string vt24mMpmb3jI28a(Object eRNxqXBUw76Yno5)
{
if(eRNxqXBUw76Yno5)
{
EntityAI QEb3Xef4ZJFz1pa=EntityAI.Cast(eRNxqXBUw76Yno5);
if(QEb3Xef4ZJFz1pa)
{
int P39BOX5C1ibkXkp, YqA6hX4laFMdzRG, CIRF9T637bg3sDz, jgS8qfDE5by4AeV;
QEb3Xef4ZJFz1pa.GetPersistentID(P39BOX5C1ibkXkp, YqA6hX4laFMdzRG, CIRF9T637bg3sDz, jgS8qfDE5by4AeV);
string DA5jIZLcTeS5NA2=dlxwXHBGjbEgws("057985614D6B", ("NEtccMR3CIp6f2".Hash() + __LINE__.ToInt())) + P39BOX5C1ibkXkp.ToString()+ dlxwXHBGjbEgws("5C", ("XwASYqUwWcQ8b2".Hash() + __LINE__.ToInt())) + YqA6hX4laFMdzRG.ToString()+ dlxwXHBGjbEgws("75", ("T5cRWObod5MoLL".Hash() + __LINE__.ToInt())) + CIRF9T637bg3sDz.ToString()+ dlxwXHBGjbEgws("65", ("HEv3o5Jx8Cmxod".Hash() + __LINE__.ToInt())) + jgS8qfDE5by4AeV.ToString()+ dlxwXHBGjbEgws("87", ("iv9EyeVg6tMZcJ".Hash() + __LINE__.ToInt()));
PlayerBase FwjfaiwLPDjC9g7;
EntityAI W1JqHTAvlkRHxD7=EntityAI.Cast(QEb3Xef4ZJFz1pa.GetHierarchyParent());
if(W1JqHTAvlkRHxD7 && W1JqHTAvlkRHxD7.IsInherited(PlayerBase))
{
FwjfaiwLPDjC9g7=PlayerBase.Cast(W1JqHTAvlkRHxD7);
if(FwjfaiwLPDjC9g7 && FwjfaiwLPDjC9g7.GetIdentity())
{
return g_LocalizationManager.player + dlxwXHBGjbEgws("5A33", ("QDrwsnHhLgeS8P".Hash() + __LINE__.ToInt())) + FwjfaiwLPDjC9g7.GetIdentity().GetName()+ dlxwXHBGjbEgws("6015", ("Q5OnYBjQrcG7hX".Hash() + __LINE__.ToInt())) + FwjfaiwLPDjC9g7.GetIdentity().GetPlainId()+ dlxwXHBGjbEgws("7B57", ("uQIi82KA9mqTJs".Hash() + __LINE__.ToInt())) + g_LocalizationManager.with + dlxwXHBGjbEgws("5F", ("cMWzFVEWjlO6Pf".Hash() + __LINE__.ToInt())) + QEb3Xef4ZJFz1pa.GetType();
}
}
else if(QEb3Xef4ZJFz1pa.IsInherited(PlayerBase))
{
FwjfaiwLPDjC9g7=PlayerBase.Cast(QEb3Xef4ZJFz1pa);
if(FwjfaiwLPDjC9g7 && FwjfaiwLPDjC9g7.GetIdentity())
{
return g_LocalizationManager.player + dlxwXHBGjbEgws("416C", ("WDPAFA7qJQRAS0".Hash() + __LINE__.ToInt())) + FwjfaiwLPDjC9g7.GetIdentity().GetName()+ dlxwXHBGjbEgws("2833", ("uUGyrOiWKaArtn".Hash() + __LINE__.ToInt())) + FwjfaiwLPDjC9g7.GetIdentity().GetPlainId()+ dlxwXHBGjbEgws("4B", ("LoD8vnL4rqs2AJ".Hash() + __LINE__.ToInt()));
}
}
else if(QEb3Xef4ZJFz1pa.IsInherited(ZombieBase))
{
return g_LocalizationManager.zombie + dlxwXHBGjbEgws("2A74", ("e2POL52hw0hrFo".Hash() + __LINE__.ToInt())) + QEb3Xef4ZJFz1pa.GetType();
}
else if(QEb3Xef4ZJFz1pa.IsInherited(AnimalBase))
{
return g_LocalizationManager.animal + dlxwXHBGjbEgws("1E6C", ("KWCXQFmD2QonRh".Hash() + __LINE__.ToInt())) + QEb3Xef4ZJFz1pa.GetType();
}
else
{
return g_LocalizationManager.object + dlxwXHBGjbEgws("243B", ("20XFgzoPVZnbWv".Hash() + __LINE__.ToInt())) + QEb3Xef4ZJFz1pa.GetType()+ DA5jIZLcTeS5NA2;
}
}
}
return g_LocalizationManager.unknown;
}
};
#endif
