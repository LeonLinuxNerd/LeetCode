����һ���Ǹ�������ɵķǿ����飬�ڸ����Ļ����ϼ�һ������һ���µ����顣

���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢һ�����֡�

����Լ���������� 0 ֮�⣬��������������㿪ͷ��

ʾ�� 1:

����: [1,2,3]
���: [1,2,4]
����: ���������ʾ���� 123��
ʾ�� 2:

����: [4,3,2,1]
���: [4,3,2,2]
����: ���������ʾ���� 4321��


int* plusOne(int* digits, int digitsSize, int* returnSize){
	int carry = 1;
	int i;
	for(i=digitsSize-1; i>=0; i--){
		int val = digits[i]+carry;
		carry = val/10;
		digits[i] = val%10;
		
		if(carry = 0)
			break;
	}
	if(carry){
		int *res = (int*)calloc(digitsSize+1,sizeof(int));
		res[0] = 1;
		*returnSize = digitsSize+1;
		return res;
	}else{
		*returnSize = digitSize;
		return digits;
	}
}