//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Max 10
#define Min 5

int GetIntegerArray(int a[], int Min, int Max);
void PrintIntegerArray(int a[], int n);
double AverageIntegerArray(int a[], int n);

{
	
	int score[5];
	//�迭�� ���� ������ �Է¹���
	int confirm = GetIntegerArray(score, Min, Max);
	//�迭 ��Ҹ� ���

	//��� ����
	double total = AverageIntegerArray(ScoreArray, confirm);

	printf("����� %g �Դϴ�.", total);
}

int GetIntegerArray(int a[], int Min, int Max)
{
	int n;
	int count = 0;
	for (int i = 0; i < Max; i++) {
		do {
			printf("���� ������ �Է����ּ���: ");
			scanf("%d", &n);
			if (n == -1)
				break;
		} while (n < 0);
		count += 1;
		if count == 5
			break;
	}

}

double AverageIntegerArray(int s[], int size)
{
	int sum = 0;
	double res = 0;

	for (int i = 0; i < size; i++) {
		sum += s[i];
	}
	res = (double)sum / size;
	return res;
}