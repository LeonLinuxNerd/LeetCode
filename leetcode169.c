����һ����СΪ n �����飬�ҵ����е�������������ָ�������г��ִ������� ? n/2 ? ��Ԫ�ء�

����Լ��������Ƿǿյģ����Ҹ������������Ǵ���������

ʾ�� 1:

����: [3,2,3]
���: 3
ʾ�� 2:

����: [2,2,1,1,1,2,2]
���: 2

int majorityElement(int * nums, int numsSize)
{
	int count = 0;
	int result = nums[0];
	for(int i=0;i<numsSize;i++){
		if(count == 0){
			result = nums[i];
			count = 1;
		}else{
			if(result==nums[i]){
				count++;
			}else{
				count--;
			}
		}
	}
	return result;
}