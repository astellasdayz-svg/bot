#ifdef SERVER
class umCxLZNQFF96tF2:RestCallback
{
protected ref LaEVL1KKKdpPo50 m_Queue;
protected string m_ChatId;
protected string m_PayloadText;
protected int m_ThreadId;
void umCxLZNQFF96tF2(LaEVL1KKKdpPo50 q, string chatId, string payloadText, int threadId)
{
m_Queue=q;
m_ChatId=chatId;
m_PayloadText=payloadText;
m_ThreadId=threadId;
}
override void OnSuccess(string data, int dataSize)
{
if(dataSize<=0)
{
if(m_Queue)m_Queue.Xz1FrWSqW7c0Bkl(m_ChatId, m_PayloadText, m_ThreadId);
return;
}
		if(data.Contains("\"ok\":true"))
{
}
		else if(data.Contains("\"error_code\":429"))
{
GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(m_Queue.Xz1FrWSqW7c0Bkl, 5000, false, m_ChatId, m_PayloadText, m_ThreadId);
}
		else if(data.Contains("\"ok\":false"))
{
if(m_Queue)m_Queue.Xz1FrWSqW7c0Bkl(m_ChatId, m_PayloadText, m_ThreadId);
}
else 
{
if(m_Queue)m_Queue.Xz1FrWSqW7c0Bkl(m_ChatId, m_PayloadText, m_ThreadId);
}
}
override void OnError(int errorCode)
{
if(m_Queue){
m_Queue.Xz1FrWSqW7c0Bkl(m_ChatId, m_PayloadText, m_ThreadId);
}
}
override void OnTimeout()
{
if(m_Queue){
m_Queue.Xz1FrWSqW7c0Bkl(m_ChatId, m_PayloadText, m_ThreadId);
}
}
}
#endif
