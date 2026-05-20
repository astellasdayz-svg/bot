#ifdef SERVER
modded class PoisoningMdfr
{
override void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
			managers.zjVsEYKtTAROkyU(player.GetIdentity().GetName(), player.GetIdentity().GetPlainId(), g_LocalizationManager.poisoning, true, position, nearestLandmark);
}
}
override void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
			managers.zjVsEYKtTAROkyU(player.GetIdentity().GetName(), player.GetIdentity().GetPlainId(), g_LocalizationManager.poisoningDis, false, position, nearestLandmark);
}
}
};
modded class BrokenLegsMdfr
{
override void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
			managers.wSjtmuWaTA1VvMG(player.GetIdentity().GetName(), player.GetIdentity().GetPlainId(), true, position, nearestLandmark);
}
}
override void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
			managers.wSjtmuWaTA1VvMG(player.GetIdentity().GetName(), player.GetIdentity().GetPlainId(), false, position, nearestLandmark);
}
}
};
modded class BrainDiseaseMdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(),player.GetIdentity().GetName(),"braindisease",1,position,nearestLandmark);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(),player.GetIdentity().GetName(),"braindisease",0,position,nearestLandmark);
}
}
};
modded class CholeraMdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "cholera", 1, position, nearestLandmark);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "cholera", 0, position, nearestLandmark);
}
}
};
modded class CommonColdMdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "commoncold", 1, position, nearestLandmark);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "commoncold", 0, position, nearestLandmark);
}
}
};
modded class SalmonellaMdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "salmonella", 1, position, nearestLandmark);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity())
{
vector position=player.GetPosition();
string nearestLandmark=GetNearestLandmarkDescription(position);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "salmonella", 0, position, nearestLandmark);
}
}
};
modded class ContaminationStage1Mdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity()){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "contamination", 1, pos, lm);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity()){
int agent=player.GetSingleAgentCount(eAgents.CHEMICAL_POISON);
if(agent<=0){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
                managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "contamination", 0, pos, lm);
}
}
}
};
modded class ContaminationStage2Mdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity()){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "contamination", 2, pos, lm);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity()){
int agent=player.GetSingleAgentCount(eAgents.CHEMICAL_POISON);
if(agent<=0){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
                managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "contamination", 0, pos, lm);
}
}
}
};
modded class ContaminationStage3Mdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity()){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "contamination", 3, pos, lm);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity()){
int agent=player.GetSingleAgentCount(eAgents.CHEMICAL_POISON);
if(agent<=0){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
                managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "contamination", 0, pos, lm);
}
}
}
};
modded class HeavyMetalPhase1Mdfr:HeavyMetalMdfr
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity()){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "heavymetal", 1, pos, lm);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity()){
int agent=player.GetSingleAgentCount(eAgents.HEAVYMETAL);
if(agent<=0){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
                managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "heavymetal", 0, pos, lm);
}
}
}
};
modded class HeavyMetalPhase2Mdfr:HeavyMetalMdfr
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity()){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "heavymetal", 2, pos, lm);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity()){
int agent=player.GetSingleAgentCount(eAgents.HEAVYMETAL);
if(agent<=0){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
                managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "heavymetal", 0, pos, lm);
}
}
}
};
modded class HeavyMetalPhase3Mdfr:HeavyMetalMdfr
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity()){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "heavymetal", 3, pos, lm);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity()){
int agent=player.GetSingleAgentCount(eAgents.HEAVYMETAL);
if(agent<=0){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
                managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "heavymetal", 0, pos, lm);
}
}
}
};
modded class InfluenzaMdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity()){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "influenza", 1, pos, lm);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity()){
int agent=player.GetSingleAgentCount(eAgents.INFLUENZA);
if(agent<=0){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
                managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "influenza", 0, pos, lm);
}
}
}
};
modded class PneumoniaMdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity()){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "influenza", 2, pos, lm);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity()){
int agent=player.GetSingleAgentCount(eAgents.INFLUENZA);
if(agent<=0){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
                managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "influenza", 0, pos, lm);
}
}
}
};
modded class WoundInfectStage1Mdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity()){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "woundinfection", 1, pos, lm);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity()){
int agent=player.GetSingleAgentCount(eAgents.WOUND_AGENT);
if(agent<=0){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
                managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "woundinfection", 0, pos, lm);
}
}
}
};
modded class WoundInfectStage2Mdfr:ModifierBase
{
override protected void OnActivate(PlayerBase player)
{
super.OnActivate(player);
if(player && player.GetIdentity()){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
            managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "woundinfection", 2, pos, lm);
}
}
override protected void OnDeactivate(PlayerBase player)
{
super.OnDeactivate(player);
if(player && player.GetIdentity()){
int agent=player.GetSingleAgentCount(eAgents.WOUND_AGENT);
if(agent<=0){
vector pos=player.GetPosition();
string lm=GetNearestLandmarkDescription(pos);
                managers.LuGa8qKmtkdw6yH(player.GetIdentity().GetPlainId(), player.GetIdentity().GetName(), "woundinfection", 0, pos, lm);
}
}
}
};
#endif
