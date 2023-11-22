//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int InputNum(void);
void DrawStar(int);

int main(void)
{
	//사용자로부터 정수를 입력받음
	int answer = InputNum();

	//별표 그림
	DrawStar(answer);

	return 0;
}
int InputNum(void)
{
	int answer;
	printf("0~100 사이의 정수를 입력해주세요 ");
	scanf("%d", &answer);
	return answer;
}
void DrawStar(int a)
{
	int b, c;
	b = a % 10;
	c = (int)a / 10;
	char f[10];

	if (b >= 5) {
		for (int i = 0; i < c + 1; i++) {
			printf("문자를 입력해주세요 ");
			scanf(" %c", &f[i]);
		}
		for (int i = 0; i < c + 1; i++) {
			printf("%c", f[i]);
		}
	}

	else {
		for (int i = 0; i < c; i++) {
			printf("문자를 입력해주세요 ");
			scanf(" %c", &f[i]);
		}
		for (int i = 0; i < c; i++) {
			printf("%c", f[i]);
		}
	}

	/*
	//배열에 문자열을 넣은 후, 반올림한 숫자만큼만 출력하고자 했음
	//* 대신에 42가 출력됨 > scanf를 통해 저장 후, 출력하는 과정으로 작성함

	if (b >= 5) {
		char f[10] = "**********";
		for (int i = 0; i < c + 1; i++) {
			printf("%d", f[i]);
		}
	}
	else
		char f[10] = "**********";
	for (int i = 0; i < c; i++) {
		printf("%d", f[i]);
	}
	*/
}
