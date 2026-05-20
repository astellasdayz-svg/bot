#ifdef SERVER
modded class CarScript
{
override void EEInit()
{
super.EEInit();
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(s6DZnugIQz17TqO, 2000, false);
}
void s6DZnugIQz17TqO()
{
if(this)
{
vector position=this.GetPosition();
string carName=this.GetType();
int b1, b2, b3, b4;
this.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ jelsndTYVKcKIk("77", ("4mpSSLzJvh0pJP".Hash() + __LINE__.ToInt())) + b2.ToString()+ jelsndTYVKcKIk("4D", ("YRSMc4gL5CfCli".Hash() + __LINE__.ToInt())) + b3.ToString()+ jelsndTYVKcKIk("89", ("cjmBJVnII98sq0".Hash() + __LINE__.ToInt())) + b4.ToString();
managers.s6DZnugIQz17TqO(carName, position, persistentID);
}
}
override void EEDelete(EntityAI parent)
{
super.EEDelete(parent);
if(this)
{
vector position=this.GetPosition();
string carName=this.GetType();
int b1, b2, b3, b4;
this.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ jelsndTYVKcKIk("80", ("RPoYLPIX41pqzT".Hash() + __LINE__.ToInt())) + b2.ToString()+ jelsndTYVKcKIk("19", ("FXiS7ZqIZxVnHp".Hash() + __LINE__.ToInt())) + b3.ToString()+ jelsndTYVKcKIk("8C", ("cQW2tvfBVRFky9".Hash() + __LINE__.ToInt())) + b4.ToString();
string nearestLandmark=GetNearestLandmarkDescription(position);
managers.D0fHGMvIYLGj1TX(carName, persistentID, position, nearestLandmark);
}
}
override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
{
super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
if(this)
{
string vehicleType=this.GetType();
float damageAmount=damageResult.GetHighestDamage(jelsndTYVKcKIk("92B748BC6B54", ("3zG2nTU0QQqnPt".Hash() + __LINE__.ToInt())));
string sourceInfo=GetDamageSourceInfoForVehicles(source);
vector position=this.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
bool isDestroyed=this.GetHealth("", "")<=0;
int b1, b2, b3, b4;
this.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ jelsndTYVKcKIk("3C", ("eJOT6OvTv6WRmK".Hash() + __LINE__.ToInt())) + b2.ToString()+ jelsndTYVKcKIk("58", ("ft80LUEhiDJjqn".Hash() + __LINE__.ToInt())) + b3.ToString()+ jelsndTYVKcKIk("29", ("NG2D328nEMAovw".Hash() + __LINE__.ToInt())) + b4.ToString();
managers.Re3BS3hySpUSju5(vehicleType, damageAmount, dmgZone, sourceInfo, position, persistentID, nearestLandmark, isDestroyed);
}
}
string GetDamageSourceInfoForVehicles(EntityAI source)
{
if(source)
{
int b1, b2, b3, b4;
source.GetPersistentID(b1, b2, b3, b4);
string persistentID=jelsndTYVKcKIk("564A84245708", ("fuuFdygA9KkcXU".Hash() + __LINE__.ToInt())) + b1.ToString()+ jelsndTYVKcKIk("75", ("OQKi632Wh3Bh1m".Hash() + __LINE__.ToInt())) + b2.ToString()+ jelsndTYVKcKIk("62", ("qE8EzN6Eq6rolS".Hash() + __LINE__.ToInt())) + b3.ToString()+ jelsndTYVKcKIk("65", ("b1TYcBFkQiGdME".Hash() + __LINE__.ToInt())) + b4.ToString()+ jelsndTYVKcKIk("6F", ("k9wttiNzRgjlXi".Hash() + __LINE__.ToInt()));
EntityAI parentSource=EntityAI.Cast(source.GetHierarchyParent());
if(parentSource && parentSource.IsInherited(PlayerBase))
{
PlayerBase playerSource=PlayerBase.Cast(parentSource);
if(playerSource && playerSource.GetIdentity())
{
return g_LocalizationManager.player + jelsndTYVKcKIk("283E", ("cYYEBmmwGFfNUX".Hash() + __LINE__.ToInt())) + playerSource.GetIdentity().GetName()+ jelsndTYVKcKIk("773F", ("ASlxBeja82CmsA".Hash() + __LINE__.ToInt())) + playerSource.GetIdentity().GetPlainId()+ jelsndTYVKcKIk("1314", ("khG645j3N82o4B".Hash() + __LINE__.ToInt())) + g_LocalizationManager.with + jelsndTYVKcKIk("32", ("tr7kcBDefElDEB".Hash() + __LINE__.ToInt())) + source.GetType();
}
}
else if(source.IsInherited(ZombieBase))
{
return g_LocalizationManager.zombie + jelsndTYVKcKIk("416E", ("v4PKbVfH7ogxkg".Hash() + __LINE__.ToInt())) + source.GetType();
}
else if(source.IsInherited(AnimalBase))
{
return g_LocalizationManager.animal + jelsndTYVKcKIk("2457", ("jji1SowyIKj5b0".Hash() + __LINE__.ToInt())) + source.GetType();
}
return g_LocalizationManager.object + jelsndTYVKcKIk("2F79", ("GbjOA29xnaomZb".Hash() + __LINE__.ToInt())) + source.GetType()+ persistentID;
}
return g_LocalizationManager.unknown;
}
};
#endif
