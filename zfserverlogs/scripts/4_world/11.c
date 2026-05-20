#ifdef SERVER
modded class ActionBuildPart
{
override void OnFinishProgressServer(ActionData action_data)
{
super.OnFinishProgressServer(action_data);
PlayerBase player=PlayerBase.Cast(action_data.m_Player);
BaseBuildingBase base_building=BaseBuildingBase.Cast(action_data.m_Target.GetObject());
if(player && base_building && player.GetIdentity())
{
string playerNick=player.GetIdentity().GetName();
string steamID   =player.GetIdentity().GetPlainId();
vector position  =player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
int b1, b2, b3, b4;
base_building.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ onnHTUIdglealu("4B", ("DvSbk0ni5IvfHk".Hash() + __LINE__.ToInt())) + b2.ToString()+ onnHTUIdglealu("1E", ("b6H8CVgkHfSc1v".Hash() + __LINE__.ToInt())) + b3.ToString()+ onnHTUIdglealu("60", ("8f1E9XoY3nzOr7".Hash() + __LINE__.ToInt())) + b4.ToString();
string part_name=BuildPartActionData.Cast(action_data).m_PartType;
if(managers)
{
managers.kdYJrZhVaEINF1t(playerNick, steamID, part_name, base_building.GetType(), persistentID, position, nearestLandmark);
}
}
}
};
modded class ActionDismantlePart
{
override void OnFinishProgressServer(ActionData action_data)
{
super.OnFinishProgressServer(action_data);
PlayerBase player=PlayerBase.Cast(action_data.m_Player);
BaseBuildingBase base_building=BaseBuildingBase.Cast(action_data.m_Target.GetObject());
if(player && base_building && player.GetIdentity())
{
string playerNick=player.GetIdentity().GetName();
string steamID   =player.GetIdentity().GetPlainId();
vector position  =player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
int b1, b2, b3, b4;
base_building.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ onnHTUIdglealu("60", ("pNI2bWAzj5ByHh".Hash() + __LINE__.ToInt())) + b2.ToString()+ onnHTUIdglealu("38", ("ty14mPxiSC4OYO".Hash() + __LINE__.ToInt())) + b3.ToString()+ onnHTUIdglealu("2C", ("fsGBG1B4GnRdQB".Hash() + __LINE__.ToInt())) + b4.ToString();
ConstructionActionData construction_action_data=player.GetConstructionActionData();
if(construction_action_data)
{
ConstructionPart construction_part=construction_action_data.GetTargetPart();
if(construction_part)
{
string partName=construction_part.GetPartName();
if(managers)
{
managers.j81erFoVXq8KGKX(playerNick, steamID, partName, base_building.GetType(), persistentID, position, nearestLandmark);
}
}
}
}
}
};
#endif
