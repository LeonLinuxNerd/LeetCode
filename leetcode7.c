��ת����

����һ��32λ�з����������������е����ֽ��з�ת��

ʾ�������룺123

          �����321
int reverse(int x)  
{  
int result=0;  
while(x!=0){  
int temp=result*10+x%10;  
if(temp/10!=result){  
return 0;  
}   //��������������temp���̺��������ɣ������֮��ֵ����һ�������ٵ���result  
result=temp;  
x=x/10;  
}  
return result;