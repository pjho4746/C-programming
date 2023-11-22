//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double FuelEfficency(double, double);

int main(void) {
	char select;
	double li;
	double km;
	do {
		printf("주입연료량(L): ");
		scanf("%lf", &li);
		printf("주행거리(km): ");
		scanf("%lf", &km);

		double res= FuelEfficency(li, km);
		printf("자동차 연비는 %g이다\n", res);

		printf("다시 계산(Y/N): ");
		scanf(" %c", &select);

	} while ((select != 'N') && (select != 'n')); //N, n이면 종료

	return 0;
}
double FuelEfficency(double l, double k) {
	return (double)k / l;
}