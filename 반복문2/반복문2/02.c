#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double FuelEfficiency(double, double);

int main(void)
{
	printf("### 자동차 연비 계산 ###\n");
	double d, f;
	double res;
	char again;

	do {
		printf("\n주행거리는(km)? ");
		scanf("%lf", &d);

		printf("사용된 연료량은(liter)? ");
		scanf("%lf", &f);

		//res = 연비를 계산
		res = FuelEfficiency(f, d);

		printf("연비는 %.2f km/1입니다.\n", res);

		printf("\n> 다시 계산하겠습니까?(Y/N) ");
		scanf(" %c", &again);

	} while (again == 'Y' || again == 'y');

	return 0;
}
double FuelEfficiency(double liter, double km)
{
	return km / liter;
}