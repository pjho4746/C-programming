#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double FuelEfficiency(double, double);

int main(void)
{
	printf("### �ڵ��� ���� ��� ###\n");
	double d, f;
	double res;
	char again;

	do {
		printf("\n����Ÿ���(km)? ");
		scanf("%lf", &d);

		printf("���� ���ᷮ��(liter)? ");
		scanf("%lf", &f);

		//res = ���� ���
		res = FuelEfficiency(f, d);

		printf("����� %.2f km/1�Դϴ�.\n", res);

		printf("\n> �ٽ� ����ϰڽ��ϱ�?(Y/N) ");
		scanf(" %c", &again);

	} while (again == 'Y' || again == 'y');

	return 0;
}
double FuelEfficiency(double liter, double km)
{
	return km / liter;
}