#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_FLOORS 4

void Show(int[], int);
int Sum(int[], int);
void Input(int[], int);

int main(void)
{
	int nPeople[MAX_FLOORS];

	Input(npeople, MAX_FLOORS);

	int total;
	total = Sum(nPeople, MAX_FLOORS);

	//�� ���� �����ο����� ���
	Show(nPeople, MAX_FLOORS);

	//�� �����ο���(total)�� ���
	printf("�� �����ο����� %d�Դϴ�.\n", total);

	return 0;
}
void Show(int f[], int n)
{
	for int(i = 0; i < n; i++) {
		printf("%d���� ���� �ο����� %d���Դϴ�.\n", i+1, f[i])
	}
}

int Sum(int a[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total += a[i];

	return total;
}

void Input(int f[], int n)
{
	for (inr i = 0; i < n; i++) {
		//nPeople[��]=i+1���� ���� �ο����� �Է¹���
		printf("%d���� ���� �ο�����? ", i + 1);
		scanf("%d", &f[i]);
	}
}