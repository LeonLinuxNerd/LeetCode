/*��ţ�83  ɾ�����������е��ظ�Ԫ��

����һ����������ɾ�������ظ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ��

ʾ����

���룺1->1->2

�����1->2



����˼·������һ���м�㣬���ڵ��е��������м��Ƚϣ����ֵ��ͬ����ֵ�����м�㣬�ڵ�ʹ�õ�ǰ�м���ָ�룬��ֱ֮�ӷ�����һ��*/

struct ListNode{  
int val;  
struct ListNode *next;  
}  
struct ListNode *deleteDuplictes(struct ListNode *head)  
{  
if(NULL==head){  
return NULL;  
}          //��ȫ��飬���ͷ�ڵ�ΪNULL  
if(NULL==head->next)  
{  
return head;  
}        //�����һ�ڵ�ΪNULL���򷵻�ͷ�ڵ�  
struct ListNode *p=head;  
struct ListNode *pre=NULL;  
while(NULL!=p)  
{  
if(pre!=NULL&&pre->val==p->val){          //�����е��������úܹؼ�  ��pre!=NULL�������Է����ұߣ��ᵼ�¡���ָ���ڵĳ�Ա���ʣ��������н���ʹ�ñ��������ݽṹ�ϸ�һ��Ҫ��֤ʹ�õĽ�㲻��ΪNULL��ΪNULL������Ӧ������  
pre->next=p->next;  
p=pre->next;  
}  
}  
} 