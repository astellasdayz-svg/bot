#ifdef SERVER
modded class ItemBase 
{
override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
{
super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
if(this.IsInherited(CarWheel)|| this.IsInherited(Container_Base)|| this.IsInherited(TentBase)|| this.IsInherited(BaseBuildingBase))
{
float healthDamage=damageResult.GetDamage(dmgZone, VteDXgjPjCaeFI("559C8BAECF80", ("eEEItxHjEI8etk".Hash() + __LINE__.ToInt())));
if(healthDamage>0.5)
{
fe3gdDvbIOl0XoI(damageResult, source, modelPos);
}
}
}
void fe3gdDvbIOl0XoI(TotalDamageResult damageResult, EntityAI source, vector position)
{
string itemName=this.GetType();
float damageAmount=damageResult.GetDamage("",VteDXgjPjCaeFI("A664709190C2", ("KyTrXrlpTZ9gvU".Hash() + __LINE__.ToInt())));
string sourceInfo=GetDamageSourceInfo(source);
string nearestLandmark=GetNearestLandmarkDescription(position);
bool isDestroyed=this.GetHealth("", "")<=0;
int b1, b2, b3, b4;
this.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ VteDXgjPjCaeFI("2A", ("89mI2xlBcuI5Rj".Hash() + __LINE__.ToInt())) + b2.ToString()+ VteDXgjPjCaeFI("49", ("hwsiUlXhPMM9Cd".Hash() + __LINE__.ToInt())) + b3.ToString()+ VteDXgjPjCaeFI("66", ("wTyfoF7tGZiDkf".Hash() + __LINE__.ToInt())) + b4.ToString();
managers.fe3gdDvbIOl0XoI(itemName, sourceInfo, nearestLandmark, position, persistentID, damageAmount, isDestroyed);
}
string GetDamageSourceInfo(EntityAI source)
{
if(source)
{
int b1, b2, b3, b4;
source.GetPersistentID(b1, b2, b3, b4);
string persistentID=VteDXgjPjCaeFI("61269049412F", ("m8VL59JgBMWSF8".Hash() + __LINE__.ToInt())) + b1.ToString()+ VteDXgjPjCaeFI("36", ("JyhXvru2OSGCBE".Hash() + __LINE__.ToInt())) + b2.ToString()+ VteDXgjPjCaeFI("70", ("UmHqjViAdTb5zA".Hash() + __LINE__.ToInt())) + b3.ToString()+ VteDXgjPjCaeFI("47", ("3QAZel1FEKfu5W".Hash() + __LINE__.ToInt())) + b4.ToString()+ VteDXgjPjCaeFI("1A", ("TiKMpsIG9iu9vE".Hash() + __LINE__.ToInt()));
EntityAI parentSource=EntityAI.Cast(source.GetHierarchyParent());
if(parentSource && parentSource.IsInherited(PlayerBase))
{
PlayerBase playerSource=PlayerBase.Cast(parentSource);
if(playerSource && playerSource.GetIdentity())
{
return g_LocalizationManager.player + VteDXgjPjCaeFI("6861", ("xfEfjhSVpRcoTz".Hash() + __LINE__.ToInt())) + playerSource.GetIdentity().GetName()+ VteDXgjPjCaeFI("6E4E", ("zDobHFROMSQEa6".Hash() + __LINE__.ToInt())) + playerSource.GetIdentity().GetPlainId()+ VteDXgjPjCaeFI("0D7D", ("FlcPa0qlEItxCg".Hash() + __LINE__.ToInt())) + g_LocalizationManager.with + VteDXgjPjCaeFI("61", ("9Aq8HYS5eRknW6".Hash() + __LINE__.ToInt())) + source.GetType();
}
}
else if(source.IsInherited(ZombieBase))
{
return g_LocalizationManager.zombie + VteDXgjPjCaeFI("8633", ("mNcOzDuOUK1L3G".Hash() + __LINE__.ToInt())) + source.GetType();
}
else if(source.IsInherited(AnimalBase))
{
return g_LocalizationManager.animal + VteDXgjPjCaeFI("7B22", ("CGycgqNThE9BzY".Hash() + __LINE__.ToInt())) + source.GetType();
}
return g_LocalizationManager.object + VteDXgjPjCaeFI("413A", ("mAfOrwROCd80SO".Hash() + __LINE__.ToInt())) + source.GetType()+ persistentID;
}
return g_LocalizationManager.unknown;
}
};
#endif
