#ifdef SERVER
modded class ExplosivesBase
{
string uKgLfoEQ6M02BIw;
string rJWv3qlrZtnKj8L;
void QfcbEK9ZZjLR1XO(PlayerBase player)
{
if(player && player.GetIdentity()){
uKgLfoEQ6M02BIw=player.GetIdentity().GetName();
rJWv3qlrZtnKj8L =player.GetIdentity().GetPlainId();
}
}
string qPOPoCDTJw0T6v0(){return uKgLfoEQ6M02BIw;}
string oOKRnLeMCwqIOj6(){return rJWv3qlrZtnKj8L;}
override void OnStoreSave(ParamsWriteContext ctx)
{
super.OnStoreSave(ctx);
ctx.Write(uKgLfoEQ6M02BIw);
ctx.Write(rJWv3qlrZtnKj8L);
}
override bool OnStoreLoad(ParamsReadContext ctx, int version)
{
if(!super.OnStoreLoad(ctx, version))return false;
if(!ctx.Read(uKgLfoEQ6M02BIw))return false;
if(!ctx.Read(rJWv3qlrZtnKj8L))return false;
return true;
}
};
modded class LandMineTrap
{
string uKgLfoEQ6M02BIw;
string rJWv3qlrZtnKj8L;
void QfcbEK9ZZjLR1XO(PlayerBase player)
{
if(player && player.GetIdentity()){
uKgLfoEQ6M02BIw=player.GetIdentity().GetName();
rJWv3qlrZtnKj8L =player.GetIdentity().GetPlainId();
}
}
string qPOPoCDTJw0T6v0(){return uKgLfoEQ6M02BIw;}
string oOKRnLeMCwqIOj6(){return rJWv3qlrZtnKj8L;}
override void OnStoreSave(ParamsWriteContext ctx)
{
super.OnStoreSave(ctx);
ctx.Write(uKgLfoEQ6M02BIw);
ctx.Write(rJWv3qlrZtnKj8L);
}
override bool OnStoreLoad(ParamsReadContext ctx, int version)
{
if(!super.OnStoreLoad(ctx, version))return false;
if(!ctx.Read(uKgLfoEQ6M02BIw))return false;
if(!ctx.Read(rJWv3qlrZtnKj8L))return false;
return true;
}
};
modded class Grenade_Base
{
string uKgLfoEQ6M02BIw;
string rJWv3qlrZtnKj8L;
void d1REAJrWChlAkA9(PlayerBase player)
{
if(player && player.GetIdentity()){
uKgLfoEQ6M02BIw=player.GetIdentity().GetName();
rJWv3qlrZtnKj8L =player.GetIdentity().GetPlainId();
}
}
override string qPOPoCDTJw0T6v0(){return uKgLfoEQ6M02BIw;}
override string oOKRnLeMCwqIOj6(){return rJWv3qlrZtnKj8L;}
override void OnStoreSave(ParamsWriteContext ctx)
{
super.OnStoreSave(ctx);
ctx.Write(uKgLfoEQ6M02BIw);
ctx.Write(rJWv3qlrZtnKj8L);
}
override bool OnStoreLoad(ParamsReadContext ctx, int version)
{
if(!super.OnStoreLoad(ctx, version))return false;
if(!ctx.Read(uKgLfoEQ6M02BIw))return false;
if(!ctx.Read(rJWv3qlrZtnKj8L))return false;
return true;
}
};
modded class TripwireTrap
{
string uKgLfoEQ6M02BIw;
string rJWv3qlrZtnKj8L;
void QfcbEK9ZZjLR1XO(PlayerBase player)
{
if(player && player.GetIdentity()){
uKgLfoEQ6M02BIw=player.GetIdentity().GetName();
rJWv3qlrZtnKj8L =player.GetIdentity().GetPlainId();
}
}
string qPOPoCDTJw0T6v0(){return uKgLfoEQ6M02BIw;}
string oOKRnLeMCwqIOj6(){return rJWv3qlrZtnKj8L;}
override void OnStoreSave(ParamsWriteContext ctx)
{
super.OnStoreSave(ctx);
ctx.Write(uKgLfoEQ6M02BIw);
ctx.Write(rJWv3qlrZtnKj8L);
}
override bool OnStoreLoad(ParamsReadContext ctx, int version)
{
if(!super.OnStoreLoad(ctx, version))return false;
if(!ctx.Read(uKgLfoEQ6M02BIw))return false;
if(!ctx.Read(rJWv3qlrZtnKj8L))return false;
return true;
}
override void EEItemAttached(EntityAI item, string slot_name)
{
super.EEItemAttached(item, slot_name);
SetTakeable(false);
Grenade_Base grenade;
if(Class.CastTo(grenade, item)){
if(uKgLfoEQ6M02BIw !="" && grenade.qPOPoCDTJw0T6v0()==""){
grenade.uKgLfoEQ6M02BIw=uKgLfoEQ6M02BIw;
grenade.rJWv3qlrZtnKj8L =rJWv3qlrZtnKj8L;
}
}
}
};
#endif
