#ifdef SERVER
class Landmark 
{
string name;
vector position;
void Landmark(string _name, vector _position)
{
name=_name;
position=_position;
}
};
class LandmarkConfig
{
bool enable=false;
ref array<ref Landmark>landmarks;
static const string CONFIG_DIR=UxNFopogUsXfck("81C2C0CEA98DC6B782418D673A3E857C9F72A5948AC164B6AB", ("BrEtoIoKhrDyQ0".Hash() + __LINE__.ToInt()));
static const string CONFIG_PATH=CONFIG_DIR + UxNFopogUsXfck("9669848351448965659E77C770995831BE57B789", ("wUKkvMb6xg78us".Hash() + __LINE__.ToInt()));
void LandmarkConfig()
{
landmarks=new array<ref Landmark>();
}
void Save()
{
if(!FileExist(CONFIG_DIR))
{
MakeDirectory(CONFIG_DIR);
}
if(landmarks.Count()==0)
{
enable=true;
			landmarks.Insert(new Landmark("Электрозаводск", Vector(10286.68, 0, 1992.77)));
			landmarks.Insert(new Landmark("Зуб", Vector(6574.2798, 0, 5573.8501)));
enable=false;
}
JsonFileLoader<LandmarkConfig>.JsonSaveFile(CONFIG_PATH, this);
}
static ref LandmarkConfig Load()
{
ref LandmarkConfig configuration=new LandmarkConfig();
if(FileExist(CONFIG_PATH))
{
JsonFileLoader<LandmarkConfig>.JsonLoadFile(CONFIG_PATH, configuration);
return configuration;
}
else
{
configuration.Save();
}
return configuration;
}
};
static ref LandmarkConfig g_LandmarkConfig;
void InitializeLandmarkConfig()
{
g_LandmarkConfig=LandmarkConfig.Load();
}
string GetNearestLandmarkDescription(vector playerPosition)
{
if(!g_LandmarkConfig.enable)return "";
float minDistance=500;
string nearestLandmark="";
vector player2DPosition=Vector(playerPosition[0], 0, playerPosition[2]);
foreach(Landmark landmark:g_LandmarkConfig.landmarks)
{
vector landmark2DPosition=Vector(landmark.position[0], 0, landmark.position[2]);
float distance=vector.Distance(player2DPosition, landmark2DPosition);
if(distance<minDistance)
{
nearestLandmark=g_LocalizationManager.withinRadius + UxNFopogUsXfck("16", ("gmO0A4AlG5CaGY".Hash() + __LINE__.ToInt())) + distance.ToString()+ UxNFopogUsXfck("5C", ("CasQOcr6p2DszO".Hash() + __LINE__.ToInt())) + g_LocalizationManager.metersfromCenter + UxNFopogUsXfck("2B", ("VELbHrC0sYXK3b".Hash() + __LINE__.ToInt())) + landmark.name;
minDistance=distance;
}
}
return nearestLandmark;
};
#endif
