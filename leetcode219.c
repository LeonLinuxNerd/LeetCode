����һ�����������һ������ k���ж��������Ƿ����������ͬ������ i �� j��ʹ�� nums [i] = nums [j]������ i �� j �Ĳ�ľ���ֵ���Ϊ k��

ʾ�� 1:

����: nums = [1,2,3,1], k = 3
���: true
ʾ�� 2:

����: nums = [1,0,1,1], k = 1
���: true
ʾ�� 3:

����: nums = [1,2,3,1,2,3], k = 2
���: false

bool containsNearbyDuplicate(int* nums, int numsSize, int k){
	int i,j;
	for(i=0; i<numsSize; i++){
		for(j=i+1; j<numsSize; j++){
			if((nums[i]==nums[j]&&((j-i)<=k))
				return true;
		}
	}
	return false;
}