//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void WorkSelect(int);

int main(void) {
	int select;
	do {
		printf("------------------\n");
		printf("1. cm�� ��ġ�� ��ȯ\n");
		printf("2. ��ġ�� cm�� ��ȯ\n");
		printf("3. ���α׷� ����\n");
		printf("------------------\n");
		//1,2,3 �߿��� ����
		printf(">> ����: ");
		scanf("%d", &select);
		printf("\n");
		//�� ������� �ش��ϴ� ������ �����ϴ� �Լ�
		WorkSelect(select);
		//���������� ���α׷� ����
	} while (select != 3);
	//���������� ���α׷� ����
	return 0;
}
void WorkSelect(int num) {
	if (num == 1){
		double n1, res1;
		printf("��ġ�� ��ȯ�� cm��? ");
		scanf("%lf", &n1);
		res1 = n1 * (0.393701);
		printf("%5.2f cm = %5.2f inch\n", n1, res1);
		printf("\n");
	}
	else if (num == 2) {
		double n2, res2;
		printf("cm�� ��ȯ�� ��ġ��? ");
		scanf(" %lf", &n2);
		res2 = n2 * (2.54);
		printf("%5.2f cm = %5.2f inch\n", n2, res2);
		printf("\n");
	}
}