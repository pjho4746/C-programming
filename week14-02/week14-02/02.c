//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SumRangeWithPostition(int* pStart, int* pEnd);

int main(void)
{
	//���� �迭
	int array[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//start�� end�� �κ����� ���ϰ��� �ϴ� �迭�� ��� ÷�ڸ� �޴´ٰ� ����
	int* pStart = &array[2];
	int* pEnd = &array[7];

	//���� �迭���� ������ ������ ��ҵ��� ���� ���Ͻÿ�
	int sum = SumRangeWithPostition(pStart, pEnd);

	printf("������ ������ ��ҵ��� ����: %d", sum);

	return 0;
}
int SumRangeWithPostition(int* pStart, int* pEnd)
{
	int sum = 0;
	for (int* ip = pStart; ip <= pEnd; ip++) {
		sum += *ip;
	}
	return sum;
}