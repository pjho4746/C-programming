#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputPositiveData(void);

int main(void)
{
	printf("### ����/�̼��� �Ǻ� ###\n");

	int age;
	printf("����� �� ���̴�");
	age = InputPositiveData();

	if (age < 19)
		printf("����� �̼������̱���.\n");
	else
		printf("����� �����̱���.\n");

	return 0;
}
int InputPositiveData(void)
{
	int n;
	do {
		printf("? ");
		scanf("%d", &n);
	} while (n < 0);

	return n;
}