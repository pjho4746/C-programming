//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {int x, y;} pointT;
pointT CreatePoint(int x, int y);
int IsEquals(pointT p1, pointT p2);

int main(void)
{
	//2차원 상의 임의의 두 좌표를 입력받기
	pointT p1, p2;
	printf("p1의 좌표\n");
	p1 = CreatePoint(0, 0);
	printf("\np2의 좌표\n");
	p2 = CreatePoint(0, 0);
	//동일 좌표 여부 출력
	int result = IsEquals(p1, p2);

	if (result == 0)
		printf("\np1과 p2는 같습니다");
	else
		printf("\np1과 p2는 같지 않습니다");

	return 0;
}
pointT CreatePoint(int x, int y)
{
	pointT p = { 0, 0 };
	printf("x좌표를 입력해주세요 ");
	scanf("%d", &p.x);

	printf("y좌표를 입력해주세요 ");
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