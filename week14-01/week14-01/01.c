//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumRangeWithIndex(int* array, int start, int end);
int AskNumber(void);

int main(void)
{
	//���� �迭
	int array[10] = {0,1,2,3,4,5,6,7,8,9};
	//start�� end�� �κ����� ���ϰ��� �ϴ� �迭�� ��� ÷�ڸ� �޴´ٰ� ����
	printf("������ �����մϴ�(����)\n");
	int start = AskNumber();
	printf("������ �����մϴ�(��)\n");
	int end = AskNumber();
	//���� �迭���� ������ ������ ��ҵ��� ���� ���Ͻÿ�
	int sum = sumRangeWithIndex(array, start, end);
	printf("������ ������ ��ҵ��� ����: %d", sum);

	return 0;
}
int AskNumber(void)
{
	int ans;
	printf("0~9 ���� �� ������ �Է����ּ���: ");
	scanf("%d", &ans);
	return ans;
}
int sumRangeWithIndex(int* a, int s, int e)
{
	int sum = 0;
	for (int i = s; i <= e; i++) {
		sum += *(a+i);
	}
	return sum;
}