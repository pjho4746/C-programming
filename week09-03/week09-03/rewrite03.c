//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int InputPositiveData(void);

int main(void) {
	printf("����/�̼����ڸ� �����մϴ�\n");

	if (InputPositiveData() == 1)
		printf("�����Դϴ�");
	else if (InputPositiveData() == 2)
		printf("�̼������Դϴ�");
	else
		printf("�̼������Դϴ�");
	return 0;
}


int InputPositiveData(void) {
	int age;
	do {
		printf("����: ");
		scanf("%d", &age);
		if (age >= 20)
			return 1;
		else
			return 2;
	} while (age > 0);
	return 0;

}