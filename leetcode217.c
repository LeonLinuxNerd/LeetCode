����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�

����κ�ֵ�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ���򷵻� false��

ʾ�� 1:

����: [1,2,3,1]
���: true
ʾ�� 2:

����: [1,2,3,4]
���: false
ʾ�� 3:

����: [1,1,1,3,3,4,3,2,4,2]
���: true

bool containsDuplicate(int* nums, int numsSize){
	int i,j;
	for(i=0; i<numsSize; i++){
		for(j=i+1; j<numsSize; j++){
			if(nums[i] == nums[j])
				return true;
		}
	}
	return false;
}