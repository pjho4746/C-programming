//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

lineT InputLine(void);
double GetLineLength(lineT);
typedef struct line {
	int x, y;
}lineT;


int main(void)
{
	lineT p1, p2;
	p1 = InputLine();
	p2 = InPutLine();

	return 0;

}
lineT InputLine(void)
{
	lineT p;
	printf("x좌표를 입력해주세요: ");
	scanf("%d", &p.x);
	printf("y좌표를 입력해주세요: ");
	scanf("%d", &p.y);
	return p;
}