#ifdef SERVER
modded class RecipeBase
{
override void PerformRecipe(ItemBase item1, ItemBase item2, PlayerBase player)
{
if(item1==NULL || item2==NULL)
{
            Error("PerformRecipe: recipe invalid, at least one of the ingredients is NULL");
            Debug.Log("PerformRecipe: at least one of the ingredients is NULL","recipes");
return;
}
if(CheckRecipe(item1,item2,player))
{
array<ItemBase>spawned_objects=new array<ItemBase>;
SpawnItems(m_IngredientsSorted, player,spawned_objects);
ApplyModificationsResults(m_IngredientsSorted, spawned_objects, NULL, player);
ApplyModificationsIngredients(m_IngredientsSorted, player);
ApplySoftSkillsSpecialty(player);
Do(m_IngredientsSorted, player, spawned_objects, m_Specialty);
vector position=player.GetPosition();
string playerNick=player.GetIdentity().GetName();
string steamID=player.GetIdentity().GetPlainId();
string itemName1=item1.GetDisplayName();
string itemName2=item2.GetDisplayName();
string nearestLandmark=GetNearestLandmarkDescription(position);
string locationDescription=nearestLandmark;
string recipeClassName=this.ClassName();
            string resultItemName="";
for(int i=0;i<spawned_objects.Count();i++)
{
if(spawned_objects[i]!=NULL)
{
                    if(i>0)resultItemName +=", ";
resultItemName +=spawned_objects[i].GetDisplayName();
}
}
            managers.WvrQJmygBw0i2EO(playerNick, steamID, g_LocalizationManager.crafted, resultItemName, itemName1, itemName2, position, locationDescription, recipeClassName);
DeleleIngredientsPass();
}
else
{
            Debug.Log("CheckRecipe failed on server","recipes");
}
}
};
#endif
