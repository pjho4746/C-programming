//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Getincome(void);
double IncomeTax(int);

int main(void)
{
	//����ڷκ��� ���� �ݾ��� �Է¹���
	int income;
	income = Getincome();

	//������ ������
	double tax;
	tax = IncomeTax(income);

	//������ ������ �����Ͽ� �����
	printf("���� %d�� ���� %g�� ���� �Ѵ�", income, tax);

	return 0;
}

int Getincome(void)
{
	int num;
	printf("������ �Է����ּ���(���� ����): ");
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