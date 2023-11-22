//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Getincome(void);
double IncomeTax(int);

int main(void)
{
	//사용자로부터 수입 금액을 입력받음
	int income;
	income = Getincome();

	//세금을 산출함
	double tax;
	tax = IncomeTax(income);

	//납부할 세금을 산출하여 출력함
	printf("수입 %d는 세금 %g를 내야 한다", income, tax);

	return 0;
}

int Getincome(void)
{
	int num;
	printf("수입을 입력해주세요(만원 단위): ");
	scanf("%d", &num);

	return num;
}

double IncomeTax(int cal)
{
	switch (cal / 1000) {
	case 0:
		return cal * 0.08;

	case 1:
	case 2:
	case 3:
	case 4:
		return cal * 0.17;

	case 5:
	case 6:
	case 7:
	case 8:
		return cal * 0.26;

	default:
		return cal * 0.35;

	}
}