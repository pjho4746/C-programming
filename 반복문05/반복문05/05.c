#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayTriangle(int height);
void RepeatChar(char ch, int n);

int main(void)
{
	printf("### 직각 삼각형 그리기 ###\n");

	int height;

	while (1) {
		//height = 삼각형의 높이 입력
		printf("\n>>> 그리고자 하는 삼각형의 높이는? ");
		scanf("%d", &height);

		if (height <= 0) break;

		//높이가 height인 삼각형 출력
		DisplayTriangle(height);
	}
	return 0;
}
void DisplayTriangle(int h)
{
	for (int i= 1; i <= h; i++) {
		/*
		
		//h-i만큼 ''을 출력
		for (int j = h - i; j > 0; j--)
			printf(" ");

		*/
		RepeatChar(' ', h - i);
		/*
		//i만큼 *을 출력
		for(int j = 0; j < i; j++)
			printf("*");
		*/
		RepeatChar('*', i);

		printf("\n");
	}
}
void RepeatChar(char ch, int n)
{
	for (int i = 0; i < n; i++)
		printf("%c", ch);
}
