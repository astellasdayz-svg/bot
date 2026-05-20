#ifdef SERVER
class aM9aAmTedbmEsz7
{
string content;
ref array<ref AfT4oBiBMUy68WP>embeds;
ref array<string>attachments;
ref JsonSerializer serializer;
void aM9aAmTedbmEsz7()
{
embeds=new array<ref AfT4oBiBMUy68WP>();
attachments=new array<string>();
serializer=new JsonSerializer();
}
void ~aM9aAmTedbmEsz7()
{
if(serializer)
delete serializer;
}
void Content(string str="")
{
content=str;
}
string Empty()
{
return content;
}
string Create()
{
string file_content;
serializer.WriteToString(embeds, true, file_content);
        return "{" + "\"content\": \"" + Empty()+ "\", \"embeds\": " + file_content + ", \"attachments\": [] }";
}
};
class AfT4oBiBMUy68WP
{
ref euEAaZpnLDrWDDL author;
string description;
int color;
ref kAx23QvCSRo08MF footer;
void AfT4oBiBMUy68WP()
{
author=new euEAaZpnLDrWDDL();
footer=new kAx23QvCSRo08MF();
}
};
class euEAaZpnLDrWDDL
{
string name;
string url;
void euEAaZpnLDrWDDL(string nameParam="", string urlParam="")
{
this.name=nameParam;
this.url=urlParam;
}
};
class kAx23QvCSRo08MF
{
string text;
string icon_url;
void kAx23QvCSRo08MF(string textParam="", string iconUrlParam="")
{
this.text=textParam;
this.icon_url=iconUrlParam;
}
};
#endif
