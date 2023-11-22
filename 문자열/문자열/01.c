//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int StringLength(char s[]);

int main(void)
{
	char s[] = { 'h', 'i', '\0' };
	//주어진 문자열 s의 길이를 구하는 함수
	int answer = StringLength(s);
	//문자열 길이를 출력
	printf("문자열의 길이는 %d입니다.", answer);

	return 0;
}
int StringLength(char s[])
{
	//문자열의 길이를 for문으로 구함
	int n1 = 0;
	for (int i = 0; s[i]; i++) {
		n1 += 1;;
	}
	return n1;
}