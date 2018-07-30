给定一个非空数组，返回此数组中第三大的数。如果不存在，则返回数组中最大的数。要求算法时间复杂度必须是O(n)。
示例 1:
输入: [3, 2, 1]
输出: 1
解释: 第三大的数是 1.

示例 2:
输入: [1, 2]
输出: 2
解释: 第三大的数不存在, 所以返回最大的数 2 .

示例 3:
输入: [2, 2, 3, 1]
输出: 1

解释: 注意，要求返回第三大的数，是指第三大且唯一出现的数。
存在两个值为2的数，它们都排第二。


解题思路：定义最大值，对数组数据遍历，交换数据，之后计数满三时返回数据即可。
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
