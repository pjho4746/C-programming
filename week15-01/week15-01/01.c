//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {int x, y;} pointT;
pointT CreatePoint(int x, int y);
int IsEquals(pointT p1, pointT p2);

int main(void)
{
	//2���� ���� ������ �� ��ǥ�� �Է¹ޱ�
	pointT p1, p2;
	printf("p1�� ��ǥ\n");
	p1 = CreatePoint(0, 0);
	printf("\np2�� ��ǥ\n");
	p2 = CreatePoint(0, 0);
	//���� ��ǥ ���� ���
	int result = IsEquals(p1, p2);

	if (result == 0)
		printf("\np1�� p2�� �����ϴ�");
	else
		printf("\np1�� p2�� ���� �ʽ��ϴ�");

	return 0;
}
pointT CreatePoint(int x, int y)
{
	pointT p = { 0, 0 };
	printf("x��ǥ�� �Է����ּ��� ");
	scanf("%d", &p.x);

	printf("y��ǥ�� �Է����ּ��� ");
	scanf(" %d", &p.y);

	return p;
}
int IsEquals(pointT p1, pointT p2)
{
	if ((p1.x == p2.x) && (p1.y == p2.y))
		return 0;
	else
		return -1;
}