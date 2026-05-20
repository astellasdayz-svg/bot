#ifdef SERVER
modded class ItemBase 
{
override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
{
super.EEItemLocationChanged(oldLoc, newLoc);
if(d3D3KiARKRr4HwO.WasLogged())
{
d3D3KiARKRr4HwO.ResetLogged();
return;
}
int P39BOX5C1ibkXkp, YqA6hX4laFMdzRG, CIRF9T637bg3sDz, jgS8qfDE5by4AeV;
string DA5jIZLcTeS5NA2;
this.GetPersistentID(P39BOX5C1ibkXkp, YqA6hX4laFMdzRG, CIRF9T637bg3sDz, jgS8qfDE5by4AeV);
DA5jIZLcTeS5NA2=P39BOX5C1ibkXkp.ToString()+ fsgroNXecCFuSe("33", ("bJAEDiL2roUfFv".Hash() + __LINE__.ToInt())) + YqA6hX4laFMdzRG.ToString()+ fsgroNXecCFuSe("51", ("b8JmXshcXAKlZ1".Hash() + __LINE__.ToInt())) + CIRF9T637bg3sDz.ToString()+ fsgroNXecCFuSe("35", ("H7sBrzkNfbiAkv".Hash() + __LINE__.ToInt())) + jgS8qfDE5by4AeV.ToString();
EntityAI ESk1TlX3LyHslYb=oldLoc.GetParent();
EntityAI wVFrKRcO37p73BJ=newLoc.GetParent();
PlayerBase L4NFd7RxY2wEX3m;
vector cgrUl5xHFvQppYq;
string rASawCx0W7cVdVm;
string Mkaw7ehgCzNiCXq;
EntityAI Gs0PD3rxlOcnzP0=null;
PlayerBase QUHBPaZTiO7E1VX=null;
string HYV9teEzv4ZEPYP;
float vSpgXjCwCVT5Dkn=0.0;
vector ZKFTJuB0yU67NGe;
PlayerBase a9p7FGRplAWBMYQ;
PlayerBase JuGnGF6Dp7XuIKh=null;
PlayerBase SPn3dJ4IR59dOCf=null;
if(wVFrKRcO37p73BJ)
{
JuGnGF6Dp7XuIKh=PlayerBase.Cast(wVFrKRcO37p73BJ.GetHierarchyRootPlayer());
}
if(ESk1TlX3LyHslYb)
{
SPn3dJ4IR59dOCf=PlayerBase.Cast(ESk1TlX3LyHslYb.GetHierarchyRootPlayer());
}
if(!L4NFd7RxY2wEX3m && JuGnGF6Dp7XuIKh && JuGnGF6Dp7XuIKh.GetIdentity())
{
L4NFd7RxY2wEX3m=JuGnGF6Dp7XuIKh;
ZKFTJuB0yU67NGe=L4NFd7RxY2wEX3m.GetPosition();
cgrUl5xHFvQppYq=ZKFTJuB0yU67NGe;
HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
rASawCx0W7cVdVm=g_LocalizationManager.took;
Mkaw7ehgCzNiCXq=M2WroQPkR0e5zmY(ESk1TlX3LyHslYb);
vSpgXjCwCVT5Dkn=vector.Distance(ZKFTJuB0yU67NGe, this.GetPosition());
}
else if(!L4NFd7RxY2wEX3m && SPn3dJ4IR59dOCf && SPn3dJ4IR59dOCf.GetIdentity())
{
L4NFd7RxY2wEX3m=SPn3dJ4IR59dOCf;
ZKFTJuB0yU67NGe=L4NFd7RxY2wEX3m.GetPosition();
cgrUl5xHFvQppYq=ZKFTJuB0yU67NGe;
HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
rASawCx0W7cVdVm=g_LocalizationManager.put;
Mkaw7ehgCzNiCXq=M2WroQPkR0e5zmY(wVFrKRcO37p73BJ);
vSpgXjCwCVT5Dkn=vector.Distance(ZKFTJuB0yU67NGe, this.GetPosition());
}
if(wVFrKRcO37p73BJ && wVFrKRcO37p73BJ.IsInherited(PlayerBase)&& wVFrKRcO37p73BJ.IsInitialized())
{
L4NFd7RxY2wEX3m=PlayerBase.Cast(wVFrKRcO37p73BJ);
ZKFTJuB0yU67NGe=L4NFd7RxY2wEX3m.GetPosition();
cgrUl5xHFvQppYq=wVFrKRcO37p73BJ.GetPosition();
HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
rASawCx0W7cVdVm=g_LocalizationManager.took;
Mkaw7ehgCzNiCXq=M2WroQPkR0e5zmY(ESk1TlX3LyHslYb);
vSpgXjCwCVT5Dkn=vector.Distance(ZKFTJuB0yU67NGe, this.GetPosition());
}
else if(ESk1TlX3LyHslYb && ESk1TlX3LyHslYb.IsInherited(PlayerBase)&& ESk1TlX3LyHslYb.IsInitialized())
{
L4NFd7RxY2wEX3m=PlayerBase.Cast(ESk1TlX3LyHslYb);
ZKFTJuB0yU67NGe=L4NFd7RxY2wEX3m.GetPosition();
cgrUl5xHFvQppYq=ESk1TlX3LyHslYb.GetPosition();
HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
rASawCx0W7cVdVm=g_LocalizationManager.put;
Mkaw7ehgCzNiCXq=M2WroQPkR0e5zmY(wVFrKRcO37p73BJ);
vSpgXjCwCVT5Dkn=vector.Distance(ZKFTJuB0yU67NGe, this.GetPosition());
}
else if(ESk1TlX3LyHslYb && wVFrKRcO37p73BJ && wVFrKRcO37p73BJ.IsInitialized()&& ESk1TlX3LyHslYb.IsInitialized())
{
cgrUl5xHFvQppYq=wVFrKRcO37p73BJ.GetPosition();
HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
rASawCx0W7cVdVm=g_LocalizationManager.moved;
Mkaw7ehgCzNiCXq=M2WroQPkR0e5zmY(ESk1TlX3LyHslYb)+ fsgroNXecCFuSe("17", ("WnS8XmWu4yj7p5".Hash() + __LINE__.ToInt())) + g_LocalizationManager.in + fsgroNXecCFuSe("6F", ("BFHbWeYjwNAC2P".Hash() + __LINE__.ToInt())) + M2WroQPkR0e5zmY(wVFrKRcO37p73BJ);
a9p7FGRplAWBMYQ=Z3FbjyBNEzzMdNB(cgrUl5xHFvQppYq);
if(a9p7FGRplAWBMYQ && a9p7FGRplAWBMYQ.GetIdentity())
{
ZKFTJuB0yU67NGe=a9p7FGRplAWBMYQ.GetPosition();
vSpgXjCwCVT5Dkn=vector.Distance(ZKFTJuB0yU67NGe, wVFrKRcO37p73BJ.GetPosition());
managers.Qz53Vv83TbTXnN0(a9p7FGRplAWBMYQ.GetIdentity().GetName(), a9p7FGRplAWBMYQ.GetIdentity().GetPlainId(), rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
}
else 
{
                managers.Qz53Vv83TbTXnN0(g_LocalizationManager.itemMovedBetweenContainers, g_LocalizationManager.checkPlayerCoordinates, rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
}
return;
}
if(ESk1TlX3LyHslYb && !wVFrKRcO37p73BJ && ESk1TlX3LyHslYb.IsInitialized())
{
QUHBPaZTiO7E1VX=PlayerBase.Cast(ESk1TlX3LyHslYb.GetHierarchyRootPlayer());
cgrUl5xHFvQppYq=ESk1TlX3LyHslYb.GetPosition();
HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
rASawCx0W7cVdVm=g_LocalizationManager.threwOnGround;
Mkaw7ehgCzNiCXq=M2WroQPkR0e5zmY(ESk1TlX3LyHslYb)+ fsgroNXecCFuSe("11", ("NicMaJW1uqbEpA".Hash() + __LINE__.ToInt()));
a9p7FGRplAWBMYQ=Z3FbjyBNEzzMdNB(cgrUl5xHFvQppYq);
if(QUHBPaZTiO7E1VX && QUHBPaZTiO7E1VX.GetIdentity())
{
ZKFTJuB0yU67NGe=QUHBPaZTiO7E1VX.GetPosition();
vSpgXjCwCVT5Dkn=vector.Distance(ZKFTJuB0yU67NGe, this.GetPosition());
managers.Qz53Vv83TbTXnN0(QUHBPaZTiO7E1VX.GetIdentity().GetName(), QUHBPaZTiO7E1VX.GetIdentity().GetPlainId(), rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
}
else if(a9p7FGRplAWBMYQ && a9p7FGRplAWBMYQ.GetIdentity())
{
managers.Qz53Vv83TbTXnN0(a9p7FGRplAWBMYQ.GetIdentity().GetName(), a9p7FGRplAWBMYQ.GetIdentity().GetPlainId(), rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
}
else 
{
                managers.Qz53Vv83TbTXnN0(g_LocalizationManager.itemMovedBetweenContainers, g_LocalizationManager.checkPlayerCoordinates, rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
}
return;
}
if(!ESk1TlX3LyHslYb && wVFrKRcO37p73BJ && wVFrKRcO37p73BJ.IsInitialized())
{
QUHBPaZTiO7E1VX=PlayerBase.Cast(wVFrKRcO37p73BJ.GetHierarchyRootPlayer());
a9p7FGRplAWBMYQ=Z3FbjyBNEzzMdNB(cgrUl5xHFvQppYq);
if(QUHBPaZTiO7E1VX)
{
ZKFTJuB0yU67NGe=QUHBPaZTiO7E1VX.GetPosition();
cgrUl5xHFvQppYq=QUHBPaZTiO7E1VX.GetPosition();
HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
rASawCx0W7cVdVm=g_LocalizationManager.pickedUpFromGround;
Mkaw7ehgCzNiCXq=fsgroNXecCFuSe("46", ("61uOsOPeEhOd0M".Hash() + __LINE__.ToInt())) + M2WroQPkR0e5zmY(wVFrKRcO37p73BJ);
if(QUHBPaZTiO7E1VX.GetIdentity())
{
vSpgXjCwCVT5Dkn=vector.Distance(ZKFTJuB0yU67NGe, this.GetPosition());
managers.Qz53Vv83TbTXnN0(QUHBPaZTiO7E1VX.GetIdentity().GetName(), QUHBPaZTiO7E1VX.GetIdentity().GetPlainId(), rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
}
else if(a9p7FGRplAWBMYQ && a9p7FGRplAWBMYQ.GetIdentity())
{
managers.Qz53Vv83TbTXnN0(a9p7FGRplAWBMYQ.GetIdentity().GetName(), a9p7FGRplAWBMYQ.GetIdentity().GetPlainId(), rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
}
else 
{
                    managers.Qz53Vv83TbTXnN0(g_LocalizationManager.itemMovedBetweenContainers, g_LocalizationManager.checkPlayerCoordinates, rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
}
}
return;
}
if(L4NFd7RxY2wEX3m && L4NFd7RxY2wEX3m.GetIdentity()&& L4NFd7RxY2wEX3m.IsInitialized())
{
ZKFTJuB0yU67NGe=L4NFd7RxY2wEX3m.GetPosition();
vSpgXjCwCVT5Dkn=vector.Distance(ZKFTJuB0yU67NGe, this.GetPosition());
managers.Qz53Vv83TbTXnN0(L4NFd7RxY2wEX3m.GetIdentity().GetName(), L4NFd7RxY2wEX3m.GetIdentity().GetPlainId(), rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
}
d3D3KiARKRr4HwO.ResetLogged();
}
override void OnWasAttached(EntityAI parent, int slot_id)
{
super.OnWasAttached(parent, slot_id);
if(parent && parent.IsInitialized())
{
PlayerBase L4NFd7RxY2wEX3m=PlayerBase.Cast(parent.GetHierarchyRootPlayer());
if(L4NFd7RxY2wEX3m && L4NFd7RxY2wEX3m.GetIdentity())
{
vector cgrUl5xHFvQppYq=L4NFd7RxY2wEX3m.GetPosition();
string HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
string rASawCx0W7cVdVm=g_LocalizationManager.equippedToSlot;
string Mkaw7ehgCzNiCXq=M2WroQPkR0e5zmY(parent);
int P39BOX5C1ibkXkp, YqA6hX4laFMdzRG, CIRF9T637bg3sDz, jgS8qfDE5by4AeV;
string DA5jIZLcTeS5NA2;
this.GetPersistentID(P39BOX5C1ibkXkp, YqA6hX4laFMdzRG, CIRF9T637bg3sDz, jgS8qfDE5by4AeV);
DA5jIZLcTeS5NA2=P39BOX5C1ibkXkp.ToString()+ fsgroNXecCFuSe("82", ("UNbjocRIdJaAZi".Hash() + __LINE__.ToInt())) + YqA6hX4laFMdzRG.ToString()+ fsgroNXecCFuSe("7D", ("AIEICaJv5lsaxT".Hash() + __LINE__.ToInt())) + CIRF9T637bg3sDz.ToString()+ fsgroNXecCFuSe("1E", ("voemCzTy6V9gUp".Hash() + __LINE__.ToInt())) + jgS8qfDE5by4AeV.ToString();
float vSpgXjCwCVT5Dkn=vector.Distance(L4NFd7RxY2wEX3m.GetPosition(), this.GetPosition());
managers.Qz53Vv83TbTXnN0(L4NFd7RxY2wEX3m.GetIdentity().GetName(), L4NFd7RxY2wEX3m.GetIdentity().GetPlainId(), rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
d3D3KiARKRr4HwO.SetLogged(true);
}
}
}
override void OnWasDetached(EntityAI parent, int slot_id)
{
super.OnWasDetached(parent, slot_id);
if(parent && parent.IsInitialized())
{
PlayerBase L4NFd7RxY2wEX3m=PlayerBase.Cast(parent.GetHierarchyRootPlayer());
if(L4NFd7RxY2wEX3m && L4NFd7RxY2wEX3m.GetIdentity())
{
vector cgrUl5xHFvQppYq=L4NFd7RxY2wEX3m.GetPosition();
string HYV9teEzv4ZEPYP=GetNearestLandmarkDescription(cgrUl5xHFvQppYq);
string rASawCx0W7cVdVm=g_LocalizationManager.unequippedFromSlot;
string Mkaw7ehgCzNiCXq=M2WroQPkR0e5zmY(parent);
int P39BOX5C1ibkXkp, YqA6hX4laFMdzRG, CIRF9T637bg3sDz, jgS8qfDE5by4AeV;
string DA5jIZLcTeS5NA2;
this.GetPersistentID(P39BOX5C1ibkXkp, YqA6hX4laFMdzRG, CIRF9T637bg3sDz, jgS8qfDE5by4AeV);
DA5jIZLcTeS5NA2=P39BOX5C1ibkXkp.ToString()+ fsgroNXecCFuSe("68", ("3GnO4NFzQfaQ3L".Hash() + __LINE__.ToInt())) + YqA6hX4laFMdzRG.ToString()+ fsgroNXecCFuSe("5A", ("2AlqNDmuE3Bgdy".Hash() + __LINE__.ToInt())) + CIRF9T637bg3sDz.ToString()+ fsgroNXecCFuSe("13", ("C6cpP4zU9u23cl".Hash() + __LINE__.ToInt())) + jgS8qfDE5by4AeV.ToString();
float vSpgXjCwCVT5Dkn=vector.Distance(L4NFd7RxY2wEX3m.GetPosition(), this.GetPosition());
managers.Qz53Vv83TbTXnN0(L4NFd7RxY2wEX3m.GetIdentity().GetName(), L4NFd7RxY2wEX3m.GetIdentity().GetPlainId(), rASawCx0W7cVdVm, this.GetType(), Mkaw7ehgCzNiCXq, cgrUl5xHFvQppYq, DA5jIZLcTeS5NA2, HYV9teEzv4ZEPYP, vSpgXjCwCVT5Dkn);
}
}
}
private PlayerBase Z3FbjyBNEzzMdNB(vector cgrUl5xHFvQppYq, float Nv4IX6JalbDQOEF=20.0)
{
array<Object>kMTbYrz4AwnMaQs=new array<Object>;
GetGame().GetObjectsAtPosition3D(cgrUl5xHFvQppYq, Nv4IX6JalbDQOEF, kMTbYrz4AwnMaQs, null);
float BrdB1qlS4Flper1=Nv4IX6JalbDQOEF;
PlayerBase a9p7FGRplAWBMYQ=null;
foreach(Object poyTVLuMNwIDH0I:kMTbYrz4AwnMaQs)
{
if(poyTVLuMNwIDH0I.IsInherited(PlayerBase))
{
PlayerBase Nfq2yNSsgVklWZW=PlayerBase.Cast(poyTVLuMNwIDH0I);
float b0DC0UQYEpHLFCi=vector.Distance(cgrUl5xHFvQppYq, Nfq2yNSsgVklWZW.GetPosition());
if(b0DC0UQYEpHLFCi<BrdB1qlS4Flper1)
{
BrdB1qlS4Flper1=b0DC0UQYEpHLFCi;
a9p7FGRplAWBMYQ=Nfq2yNSsgVklWZW;
}
}
}
return a9p7FGRplAWBMYQ;
}
private string J7HB3Z7FixWhCF3(EntityAI dKUgAUoxgqmlAKM)
{
if(dKUgAUoxgqmlAKM)
{
EntityAI Gs0PD3rxlOcnzP0=dKUgAUoxgqmlAKM.GetHierarchyParent();
string UFq0gkYexAzOZ7k="";
if(dKUgAUoxgqmlAKM.IsInherited(Barrel_ColorBase))
{
return g_LocalizationManager.barrel + fsgroNXecCFuSe("3349", ("F3WUHriqzIaAMz".Hash() + __LINE__.ToInt())) + dKUgAUoxgqmlAKM.GetType()+ fsgroNXecCFuSe("10", ("C187Gufe5o0DQg".Hash() + __LINE__.ToInt())) + UFq0gkYexAzOZ7k;
}
else if(dKUgAUoxgqmlAKM.IsInherited(Clothing))
{
return g_LocalizationManager.clothing + fsgroNXecCFuSe("7F37", ("AKp0IMnGhYBlBi".Hash() + __LINE__.ToInt())) + dKUgAUoxgqmlAKM.GetType()+ fsgroNXecCFuSe("1B", ("DzDcv66CYLweE1".Hash() + __LINE__.ToInt())) + UFq0gkYexAzOZ7k;
}
else if(dKUgAUoxgqmlAKM.IsInherited(TentBase))
{
return g_LocalizationManager.tent + fsgroNXecCFuSe("3268", ("q43jKUc7ZUKGQG".Hash() + __LINE__.ToInt())) + dKUgAUoxgqmlAKM.GetType()+ fsgroNXecCFuSe("4D", ("qOQgJ4eQwN1j7Z".Hash() + __LINE__.ToInt())) + UFq0gkYexAzOZ7k;
}
else if(dKUgAUoxgqmlAKM.IsInherited(Container_Base))
{
return g_LocalizationManager.container + fsgroNXecCFuSe("676F", ("6lb6R7ZCFw0mv8".Hash() + __LINE__.ToInt())) + dKUgAUoxgqmlAKM.GetType()+ fsgroNXecCFuSe("3F", ("txkkkRrh8XmLDJ".Hash() + __LINE__.ToInt())) + UFq0gkYexAzOZ7k;
}
else if(dKUgAUoxgqmlAKM.IsInherited(PlayerBase))
{
return g_LocalizationManager.character + fsgroNXecCFuSe("745F", ("Mp6AaKtHCBTJ9j".Hash() + __LINE__.ToInt())) + dKUgAUoxgqmlAKM.GetType()+ fsgroNXecCFuSe("17", ("gDpmd9ljbXMbxI".Hash() + __LINE__.ToInt())) + UFq0gkYexAzOZ7k;
}
else if(dKUgAUoxgqmlAKM.IsInherited(CarScript))
{
return g_LocalizationManager.car + fsgroNXecCFuSe("584F", ("q40mrH77WZkFa2".Hash() + __LINE__.ToInt())) + dKUgAUoxgqmlAKM.GetType()+ fsgroNXecCFuSe("4C", ("3qXPadyystYESC".Hash() + __LINE__.ToInt())) + UFq0gkYexAzOZ7k;
}
else if(dKUgAUoxgqmlAKM.IsInherited(ZombieBase))
{
return g_LocalizationManager.zombie + fsgroNXecCFuSe("6268", ("4JR9N5c8TI1Hep".Hash() + __LINE__.ToInt())) + dKUgAUoxgqmlAKM.GetType()+ fsgroNXecCFuSe("0F", ("D4BDoPhJFAWX5m".Hash() + __LINE__.ToInt())) + UFq0gkYexAzOZ7k;
}
else 
{
return g_LocalizationManager.unsorted + fsgroNXecCFuSe("6F49", ("MylZ12FiaOhQIN".Hash() + __LINE__.ToInt())) + dKUgAUoxgqmlAKM.GetType()+ fsgroNXecCFuSe("09", ("LwsCzIg4TEOwwI".Hash() + __LINE__.ToInt())) + UFq0gkYexAzOZ7k;
}
}
return fsgroNXecCFuSe("14", ("FroVOu9FjBHlmw".Hash() + __LINE__.ToInt()));
}
private string M2WroQPkR0e5zmY(EntityAI dKUgAUoxgqmlAKM, EntityAI qyx42CkdYtJjnGT=null)
{
EntityAI h8x95JoyLHApwd4=EntityAI.Cast(dKUgAUoxgqmlAKM);
if(!h8x95JoyLHApwd4){
return fsgroNXecCFuSe("45", ("aXH4czDmRHLQJ1".Hash() + __LINE__.ToInt()));
}
EntityAI Gs0PD3rxlOcnzP0=h8x95JoyLHApwd4.GetHierarchyParent();
if(Gs0PD3rxlOcnzP0 && Gs0PD3rxlOcnzP0 !=qyx42CkdYtJjnGT)
{
string zxV6bN41To5as3i=M2WroQPkR0e5zmY(Gs0PD3rxlOcnzP0, h8x95JoyLHApwd4);
string VvsAenZifuZYA23=J7HB3Z7FixWhCF3(h8x95JoyLHApwd4);
if(zxV6bN41To5as3i.Length()>0 && zxV6bN41To5as3i !=VvsAenZifuZYA23)
{
return zxV6bN41To5as3i + fsgroNXecCFuSe("7E2A597A", ("DfyyD7FDd7VdRO".Hash() + __LINE__.ToInt())) + VvsAenZifuZYA23;
}
return VvsAenZifuZYA23;
}
else 
{
return J7HB3Z7FixWhCF3(h8x95JoyLHApwd4);
}
}
};
#endif
