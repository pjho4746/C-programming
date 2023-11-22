//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int FindCharType(char);
char GetType();

int main(void) {
	//문자를 입력받는 함수
	char word;
	word = GetType();

	//문자의 종류를 판별하는 함수
	int res;
	res = FindCharType(word);


	//반환받은 값을 출력
	printf("%d", res);

	return 0;
}

char GetType() {
	char w;
	printf("하나의 문자를 입력하세요 ");
	scanf("%c", &w);

	return w;
}

int FindCharType(char t) {
	if (t == ' ') return 1;
	else if (t == '\t') return 2;
	else if (t == '\n') return 3;
	else if ((t >= 'a' && t <='Z') || (t >= 0 && t <= 9)) return 4;
	else return 0;



}