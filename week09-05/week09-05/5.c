//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayTriangle(int h);

int main(void) {
	int num;
	do {
		printf("������ �Է����ּ���: ");
		scanf("%d", &num);
	} while (num < 0);

	DisplayTriangle(num);

	return 0;
}
void DisplayTriangle(int h) {
	for (int i = 0; i < h; i++) {
		for (int j = 1; j < i + 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < h - i; k++) {
			printf("*");
		}
		printf("\n");
	}
}