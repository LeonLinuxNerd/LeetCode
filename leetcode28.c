ʵ�� strStr() ������

����һ�� haystack �ַ�����һ�� needle �ַ������� haystack �ַ������ҳ� needle �ַ������ֵĵ�һ��λ�� (��0��ʼ)����������ڣ��򷵻�  -1��

ʾ�� 1:

����: haystack = "hello", needle = "ll"
���: 2
ʾ�� 2:

����: haystack = "aaaaa", needle = "bba"
���: -1
˵��:

�� needle �ǿ��ַ���ʱ������Ӧ������ʲôֵ�أ�����һ���������кܺõ����⡣

���ڱ�����ԣ��� needle �ǿ��ַ���ʱ����Ӧ������ 0 ������C���Ե� strstr() �Լ� Java�� indexOf() ���������

int strStr(char* haystack, char* needle) {
   // if(needle = '\0')
   //     return 0;
    int hIndex=0,nIndex=0;  
    int hLength = strlen(haystack);
    int nLength = strlen(needle);
    if(nLength==0)
        return 0;

    int res = -1;
    while(hIndex<hLength&&nIndex<nLength){
        if(haystack[hIndex]==needle[nIndex]){
            if(nIndex==0)
                res = hIndex;
            hIndex++;
            nIndex++;
        }
        else{
            hIndex++;
            nIndex = 0;
            if(res!=-1){
                hIndex = res+1;
                res = -1;
            }
        }
    }
    if(nIndex==nLength)
        return res;
    return -1;
}