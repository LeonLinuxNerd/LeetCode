����һ���������� nums ���ҵ�һ���������͵����������飨���������ٰ���һ��Ԫ�أ������������͡�

ʾ��:

����: [-2,1,-3,4,-1,2,1,-5,4],
���: 6
����: ���������� [4,-1,2,1] �ĺ����Ϊ 6��

int maxSubArray(int* nums, int numsSize) {
	int max = ;
	int sum = 0;
	int i;
	while(i<numsSize){
		sum += nums[i];
		if(max < sum){
			max = sum;
		}
		if(sum < 0){
			sum = 0;
		}
		i++;
	}
	return max;
}