�������������������� nums1 �� nums2���� nums2 �ϲ��� nums1 �У�ʹ�� num1 ��Ϊһ���������顣

˵��:

��ʼ�� nums1 �� nums2 ��Ԫ�������ֱ�Ϊ m �� n��
����Լ��� nums1 ���㹻�Ŀռ䣨�ռ��С���ڻ���� m + n�������� nums2 �е�Ԫ�ء�
ʾ��:

����:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

���: [1,2,2,3,5,6]

void merge(int* nums1, int m,int* nums2,int n){
	int p1 = m-1;
	int p2 = n-1;
	int i;
	if(n = 0){
		return;
	}
	if(m==0){
		for(i=0;i<n;i++){
			num1[i]=nums2[i];
		}
	}
	for(i=n+m-1;i>=0&&p1>=0&&p2>=0;i--){
		if(nums1[p1]>nums2[p2]){
			nums1[i]=nums1[p1];
			p1--;
		}else{
			nums1[p1]=nums[p2];
			p2--;
		}
	}
	if(p1<0){
		while(p2>=0){
			nums2[i--]=nums[p2--];
		}
		return;
	}
}