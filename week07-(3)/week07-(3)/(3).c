//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputNum(void);
void readNum(int);

int main(void)
{
	//사용자로부터 세자리 정수를 하나 입력받음
	int num;
	num = InputNum();

	//한자리씩 분리
	int a, b, c;
	a = (int)num / 100;
	num = num - 100 * a;
	b = (int)num / 10;
	num = num - 10 * b;
	c = num;

	//영어로 출력
	readNum(a);
	readNum(b);
	readNum(c);

	//종료
	return 0;

}

int InputNum(void)
{
	printf("세자리 정수 하나를 입력해주세요: ");
	int word;
	scanf("%d", &word);

	return word;
}

void readNum(int t) {
	char number;

	switch (t) {
	case 1: printf(" one "); break;
	case 2: printf(" two "); break;
	case 3: printf(" three "); break;
	case 4: printf(" four "); break;
	case 5: printf(" five "); break;
	case 6: printf(" six "); break;
	case 7: printf(" seven "); break;
	case 8: printf(" eight "); break;
	case 9: printf(" nine "); break;
	case 0: printf(" zero "); break;
	}
}