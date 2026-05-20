#ifdef SERVER
modded class ActionDeployObject
{
override void OnStartServer(ActionData action_data)
{
super.OnStartServer(action_data);
PlaceObjectActionData poActionData=PlaceObjectActionData.Cast(action_data);
if(!poActionData || !poActionData.m_MainItem)return;
PlayerBase placer=poActionData.m_Player;
if(!placer || !placer.GetIdentity())return;
ExplosivesBase explosive;
if(Class.CastTo(explosive, poActionData.m_MainItem)){
explosive.QfcbEK9ZZjLR1XO(placer);
}
LandMineTrap mine;
if(Class.CastTo(mine, poActionData.m_MainItem)){
mine.QfcbEK9ZZjLR1XO(placer);
}
TripwireTrap tripwire;
if(Class.CastTo(tripwire, poActionData.m_MainItem)){
tripwire.QfcbEK9ZZjLR1XO(placer);
}
}
};
modded class ActionUnpin
{
override void OnExecute(ActionData action_data)
{
super.OnExecute(action_data);
Grenade_Base grenade=Grenade_Base.Cast(action_data.m_MainItem);
if(grenade){
PlayerBase player=PlayerBase.Cast(action_data.m_Player);
if(player){
grenade.d1REAJrWChlAkA9(player);
}
}
}
};
modded class ActionAttach
{
override protected void AttachItem(AttachActionData action_data)
{
super.AttachItem(action_data);
EntityAI entity;
if(action_data.m_Target.IsProxy()){
entity=EntityAI.Cast(action_data.m_Target.GetParent());
}else{
entity=EntityAI.Cast(action_data.m_Target.GetObject());
}
if(!entity || !action_data.m_MainItem)return;
TripwireTrap tripwire;
if(Class.CastTo(tripwire, entity)){
Grenade_Base grenade;
if(Class.CastTo(grenade, action_data.m_MainItem)){
grenade.d1REAJrWChlAkA9(action_data.m_Player);
}
}
}
};
#endif
