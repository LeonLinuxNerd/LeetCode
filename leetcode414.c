����һ���ǿ����飬���ش������е������������������ڣ��򷵻���������������Ҫ���㷨ʱ�临�Ӷȱ�����O(n)��
ʾ�� 1:
����: [3, 2, 1]
���: 1
����: ����������� 1.

ʾ�� 2:
����: [1, 2]
���: 2
����: ���������������, ���Է��������� 2 .

ʾ�� 3:
����: [2, 2, 3, 1]
���: 1

����: ע�⣬Ҫ�󷵻ص������������ָ��������Ψһ���ֵ�����
��������ֵΪ2���������Ƕ��ŵڶ���

int thirdMax(int* nums, int numsSize){
	int i, count;
	long min, mid, max;
	min=mid=max=LONG_MIN;
	
	for(i=0; i<numsSize; i++){
		if(nums[i]==max || nums[i]==mid)
			continue;
		
		if(nums[i] > max){
			min = mid;
			mid = max;
			max = nums[i];
			count++;
		}
		else if(nums[i] > mid){
			min = mid;
			mid = nums[i];
			count++;
		}
		else if(nums[i] >  min){
			min = nums[i];
			count++;
		}
	}
	
	if(count >= 3)
		return min;
	else 
		return max;
}