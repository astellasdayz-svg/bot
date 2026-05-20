#ifdef SERVER
modded class TerritoryFlag
{
override void EEDelete(EntityAI parent)
{
super.EEDelete(parent);
if(this)
{
vector position=this.GetPosition();
int b1, b2, b3, b4;
this.GetPersistentID(b1, b2, b3, b4);
string persistentID=b1.ToString()+ lAPdWbjsfSQjFi("8B", ("I4NCZg13XojYoO".Hash() + __LINE__.ToInt())) + b2.ToString()+ lAPdWbjsfSQjFi("2C", ("hAw78xAUY3F8er".Hash() + __LINE__.ToInt())) + b3.ToString()+ lAPdWbjsfSQjFi("4E", ("iQZRqkxgVVmqvU".Hash() + __LINE__.ToInt())) + b4.ToString();
string nearestLandmark=GetNearestLandmarkDescription(position);
managers.a4tkUTILkp6L4t1(persistentID, position, nearestLandmark);
}
}
};
#endif
