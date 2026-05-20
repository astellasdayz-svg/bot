#ifdef SERVER
modded class ActionGetInTransport:ActionBase 
{
override void OnEndServer(ActionData action_data)
{
super.OnEndServer(action_data);
PlayerBase player=PlayerBase.Cast(action_data.m_Player);
Transport vehicle=action_data.m_Player.GetCommand_Vehicle().GetTransport();
CarScript car=CarScript.Cast(vehicle);
BoatScript boat=BoatScript.Cast(vehicle);
if(player &&(car || boat))
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
string playerNick=player.GetIdentity().GetName();
string steamID=player.GetIdentity().GetPlainId();
string vehicleName;
int b1, b2, b3, b4;
string persistentID;
if(car)
{
vehicleName=car.GetType();
car.GetPersistentID(b1, b2, b3, b4);
}
else
{
vehicleName=boat.GetType();
boat.GetPersistentID(b1, b2, b3, b4);
}
persistentID=b1.ToString()+ AhQPRHafjBMfdo("82", ("LJoXqx6J6pNhCN".Hash() + __LINE__.ToInt())) + b2.ToString()+ AhQPRHafjBMfdo("86", ("Kknv8CtYUcTJeh".Hash() + __LINE__.ToInt())) + b3.ToString()+ AhQPRHafjBMfdo("65", ("37VrCyxgs2kOfV".Hash() + __LINE__.ToInt())) + b4.ToString();
managers.diPGjswbkz4ZvdC(playerNick, steamID, g_LocalizationManager.gotInto, vehicleName, persistentID, position, nearestLandmark);
}
}
};
modded class ActionGetOutTransport:ActionBase
{
override void OnEndServer(ActionData action_data)
{
super.OnEndServer(action_data);
PlayerBase player=PlayerBase.Cast(action_data.m_Player);
GetOutTransportActionData gotActionData=GetOutTransportActionData.Cast(action_data);
Transport vehicle=Transport.Cast(gotActionData.m_Vehicle);
CarScript car=CarScript.Cast(vehicle);
BoatScript boat=BoatScript.Cast(vehicle);
if(player && vehicle &&(car || boat))
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
string playerNick=player.GetIdentity().GetName();
string steamID=player.GetIdentity().GetPlainId();
string vehicleName;
int b1, b2, b3, b4;
string persistentID;
if(car)
{
vehicleName=car.GetType();
car.GetPersistentID(b1, b2, b3, b4);
}
else if(boat)
{
vehicleName=boat.GetType();
boat.GetPersistentID(b1, b2, b3, b4);
}
else
{
return;
}
persistentID=b1.ToString()+ AhQPRHafjBMfdo("50", ("DJkVDgfXQpb4RM".Hash() + __LINE__.ToInt())) + b2.ToString()+ AhQPRHafjBMfdo("52", ("x8GeIkgk4YHUqI".Hash() + __LINE__.ToInt())) + b3.ToString()+ AhQPRHafjBMfdo("0E", ("a7VKlnxw4EDdHo".Hash() + __LINE__.ToInt())) + b4.ToString();
if(gotActionData && gotActionData.m_WasJumpingOut)
{
managers.diPGjswbkz4ZvdC(playerNick, steamID, g_LocalizationManager.jumpedOutOf, vehicleName, persistentID, position, nearestLandmark);
}
else
{
managers.diPGjswbkz4ZvdC(playerNick, steamID, g_LocalizationManager.gotOutOf, vehicleName, persistentID, position, nearestLandmark);
}
}
}
};
modded class ActionBuildPart:ActionContinuousBase
{
override void OnFinishProgressServer(ActionData action_data)
{
super.OnFinishProgressServer(action_data);
string part_name=BuildPartActionData.Cast(action_data).m_PartType;
if(part_name==AhQPRHafjBMfdo("939C7152", ("q9SH9yvGDBHDuc".Hash() + __LINE__.ToInt())))
{
BaseBuildingBase base_building=BaseBuildingBase.Cast(action_data.m_Target.GetObject());
PlayerBase player=PlayerBase.Cast(action_data.m_Player);
string playerNick=player.GetIdentity().GetName();
string steamID=player.GetIdentity().GetPlainId();
vector position=base_building.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
int b1, b2, b3, b4;
base_building.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ AhQPRHafjBMfdo("6A", ("2DkYNfE87b0NtF".Hash() + __LINE__.ToInt())) + b2.ToString()+ AhQPRHafjBMfdo("14", ("UtGJG46G2QFFQm".Hash() + __LINE__.ToInt())) + b3.ToString()+ AhQPRHafjBMfdo("17", ("YBqzS2ah5bwiyY".Hash() + __LINE__.ToInt())) + b4.ToString();
managers.T9aVkyOmsnSoDRz(playerNick, steamID, persistentID, position, nearestLandmark);
}
}
};
modded class ActionContinuousBase 
{
override void OnFinishProgress(ActionData action_data)
{
super.OnFinishProgress(action_data);
PlayerBase player=PlayerBase.Cast(action_data.m_Player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string actionName=GetActionName(action_data);
string playerNick=player.GetIdentity().GetName();
string steamID=player.GetIdentity().GetPlainId();
string objectName=g_LocalizationManager.unknownObject;
Object targetObject;
if(action_data.m_Target && action_data.m_Target.GetObject())
{
targetObject=action_data.m_Target.GetObject();
}
else if(action_data.m_MainItem)
{
targetObject=action_data.m_MainItem;
}
else
{
HumanCommandVehicle vehCommand=player.GetCommand_Vehicle();
if(vehCommand)
{
targetObject=vehCommand.GetTransport();
}
}
if(targetObject)
{
if(targetObject.IsInherited(EntityAI))
{
EntityAI entityTarget=EntityAI.Cast(targetObject);
objectName=entityTarget.GetDisplayName();
if(objectName=="")
{
objectName=entityTarget.GetType();
}
int b1, b2, b3, b4;
entityTarget.GetPersistentID(b1, b2, b3, b4);
string persistentID=AhQPRHafjBMfdo("1E36577B7930", ("7RDRGN1NXilXjX".Hash() + __LINE__.ToInt())) + b1.ToString()+ AhQPRHafjBMfdo("7A", ("HGMos43gDAUtSd".Hash() + __LINE__.ToInt())) + b2.ToString()+ AhQPRHafjBMfdo("80", ("GhGwUk2QH2bB7z".Hash() + __LINE__.ToInt())) + b3.ToString()+ AhQPRHafjBMfdo("3D", ("5eySs8LVq1p6EC".Hash() + __LINE__.ToInt())) + b4.ToString()+ AhQPRHafjBMfdo("36", ("63HXYWpbLE4199".Hash() + __LINE__.ToInt()));
}
else
{
objectName=g_LocalizationManager.unknownObject;
}
}
else
{
objectName=g_LocalizationManager.noTarget;
}
string nearestLandmark=GetNearestLandmarkDescription(position);
string locationDescription=nearestLandmark;
string actionClassName=action_data.m_Action.ClassName();
            managers.qoBRVKSbWIZaWXA(playerNick, steamID, g_LocalizationManager.performedAction, actionName, objectName, persistentID, position, locationDescription, actionClassName);
d3D3KiARKRr4HwO.SetLogged(true);
}
}
private string GetActionName(ActionData action_data)
{
string actionName=this.m_Text;
if(actionName=="" || actionName==AhQPRHafjBMfdo("A8A3BDBC", ("eDXV9FirJZng4y".Hash() + __LINE__.ToInt())))
{
actionName=action_data.m_Action.ClassName();
}
else
{
actionName=Widget.TranslateString(actionName);
}
return actionName;
}
};
#endif
