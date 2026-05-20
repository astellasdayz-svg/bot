#ifdef SERVER
modded class BoatScript 
{
override void EEInit()
{
super.EEInit();
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(Qxq1gFrE0411Tyk, 2000, false);
}
void Qxq1gFrE0411Tyk()
{
if(this)
{
vector position=this.GetPosition();
string boatName=this.GetType();
int b1, b2, b3, b4;
this.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ CtIflgzgTCUihZ("4D", ("mV9guHEjtNOuDE".Hash() + __LINE__.ToInt())) + b2.ToString()+ CtIflgzgTCUihZ("2C", ("68HZykXHlXXQFw".Hash() + __LINE__.ToInt())) + b3.ToString()+ CtIflgzgTCUihZ("52", ("cfgLlg1JPUshZP".Hash() + __LINE__.ToInt())) + b4.ToString();
managers.Qxq1gFrE0411Tyk(boatName, position, persistentID);
}
}
override void EEDelete(EntityAI parent)
{
super.EEDelete(parent);
if(this)
{
vector position=this.GetPosition();
string boatName=this.GetType();
int b1, b2, b3, b4;
this.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ CtIflgzgTCUihZ("5D", ("AhBkQtJXqBEpsV".Hash() + __LINE__.ToInt())) + b2.ToString()+ CtIflgzgTCUihZ("25", ("jdBXXDDpN1SGRm".Hash() + __LINE__.ToInt())) + b3.ToString()+ CtIflgzgTCUihZ("82", ("UwdJhsbb2bCmkV".Hash() + __LINE__.ToInt())) + b4.ToString();
string nearestLandmark=GetNearestLandmarkDescription(position);
managers.AEVL3neyH30FlFt(boatName, persistentID, position, nearestLandmark);
}
}
override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
{
super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
if(this)
{
string boatType=this.GetType();
float damageAmount=damageResult.GetHighestDamage(CtIflgzgTCUihZ("3B5647967B98", ("sn1hZyp1GLkD72".Hash() + __LINE__.ToInt())));
string sourceInfo=GetDamageSourceInfoForBoat(source);
vector position=this.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
bool isDestroyed=this.GetHealth("", "")<=0;
int b1, b2, b3, b4;
this.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ CtIflgzgTCUihZ("75", ("d53p3IEGYP0QbL".Hash() + __LINE__.ToInt())) + b2.ToString()+ CtIflgzgTCUihZ("8C", ("3F5AlHjDb4skbZ".Hash() + __LINE__.ToInt())) + b3.ToString()+ CtIflgzgTCUihZ("5B", ("LfcKxXiRGEC0lD".Hash() + __LINE__.ToInt())) + b4.ToString();
managers.RVm0dQ8XTdvHqQQ(boatType, damageAmount, dmgZone, sourceInfo, position, persistentID, nearestLandmark, isDestroyed);
}
}
string GetDamageSourceInfoForBoat(EntityAI source)
{
if(source)
{
int b1, b2, b3, b4;
source.GetPersistentID(b1, b2, b3, b4);
string persistentID=CtIflgzgTCUihZ("25199D96372C", ("wH0PiHIWhEvLl8".Hash() + __LINE__.ToInt())) + b1.ToString()+ CtIflgzgTCUihZ("4C", ("OqOUpbs1HVYCvj".Hash() + __LINE__.ToInt())) + b2.ToString()+ CtIflgzgTCUihZ("86", ("sDxIAowD0HA6Zt".Hash() + __LINE__.ToInt())) + b3.ToString()+ CtIflgzgTCUihZ("40", ("QEyfz0ZCAoifdG".Hash() + __LINE__.ToInt())) + b4.ToString()+ CtIflgzgTCUihZ("26", ("0gSQX2ZgtJTLTm".Hash() + __LINE__.ToInt()));
EntityAI parentSource=EntityAI.Cast(source.GetHierarchyParent());
if(parentSource && parentSource.IsInherited(PlayerBase))
{
PlayerBase playerSource=PlayerBase.Cast(parentSource);
if(playerSource && playerSource.GetIdentity())
{
return g_LocalizationManager.player + CtIflgzgTCUihZ("2438", ("EJBGs1YhejzESV".Hash() + __LINE__.ToInt())) + playerSource.GetIdentity().GetName()+ CtIflgzgTCUihZ("4872", ("Evb1VSu8xwTcFD".Hash() + __LINE__.ToInt())) + playerSource.GetIdentity().GetPlainId()+ CtIflgzgTCUihZ("1B05", ("qYPxbF5Xycq4AA".Hash() + __LINE__.ToInt())) + g_LocalizationManager.with + CtIflgzgTCUihZ("62", ("toH5YuGIblendj".Hash() + __LINE__.ToInt())) + source.GetType();
}
}
else if(source.IsInherited(ZombieBase))
{
return g_LocalizationManager.zombie + CtIflgzgTCUihZ("6B64", ("QopAq1QCJiAKby".Hash() + __LINE__.ToInt())) + source.GetType();
}
else if(source.IsInherited(AnimalBase))
{
return g_LocalizationManager.animal + CtIflgzgTCUihZ("452F", ("nGlbEW0nCDDtM0".Hash() + __LINE__.ToInt())) + source.GetType();
}
return g_LocalizationManager.object + CtIflgzgTCUihZ("5B6F", ("y4XfeecAAQR6IT".Hash() + __LINE__.ToInt())) + source.GetType()+ persistentID;
}
return g_LocalizationManager.unknown;
}
};
#endif
