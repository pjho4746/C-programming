#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_FLOORS 4

int main(void)
{
	int nPeople[MAX_FLOORS];

	for (int i = 0; i < MAX_FLOORS; i++) {
		//nPeople[i]=i+1���� ���� �ο����� �Է¹���
		printf("%d���� �����ο�����? ", i + 1);
		scanf("%d", &nPeople[i]);
	}

	int total = 0;
	for (int i = 0; i < MAX_FLOORS; i++)
		total += nPeople[i];
	
	//�� ���� �����ο����� ���
	for (int i = 0; i < MAX_FLOORS; i++) {
		printf("%d���� ���� �ο����� %d���Դϴ�.\n", i + 1, nPeople[i]);
	}

	//�� �����ο���(total)�� ���
	printf("�� �����ο����� %d�Դϴ�.\n", total);

	return 0;
}