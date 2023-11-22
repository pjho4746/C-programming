#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayTriangle(int height);
void RepeatChar(char ch, int n);

int main(void)
{
	printf("### ���� �ﰢ�� �׸��� ###\n");

	int height;

	while (1) {
		//height = �ﰢ���� ���� �Է�
		printf("\n>>> �׸����� �ϴ� �ﰢ���� ���̴�? ");
		scanf("%d", &height);

		if (height <= 0) break;

		//���̰� height�� �ﰢ�� ���
		DisplayTriangle(height);
	}
	return 0;
}
void DisplayTriangle(int h)
{
	for (int i= 1; i <= h; i++) {
		/*
		
		//h-i��ŭ ''�� ���
		for (int j = h - i; j > 0; j--)
			printf(" ");

		*/
		RepeatChar(' ', h - i);
		/*
		//i��ŭ *�� ���
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
