//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double FuelEfficency(double, double);

int main(void) {
	char select;
	double li;
	double km;
	do {
		printf("���Կ��ᷮ(L): ");
		scanf("%lf", &li);
		printf("����Ÿ�(km): ");
		scanf("%lf", &km);

		double res= FuelEfficency(li, km);
		printf("�ڵ��� ����� %g�̴�\n", res);

		printf("�ٽ� ���(Y/N): ");
		scanf(" %c", &select);

	} while ((select != 'N') && (select != 'n')); //N, n�̸� ����

	return 0;
}
double FuelEfficency(double l, double k) {
	return (double)k / l;
}