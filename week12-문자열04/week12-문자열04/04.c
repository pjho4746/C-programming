//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void StringConcat(char s1[], char s2[]);

int main(void)
{
	//문자열 s1
	char str1[100] = "hi";
	printf("문자열 s1: %s\n", str1);
	//문자열 s2
	char str2[100] = "hello";
	printf("문자열 s2: %s\n\n", str2);
	//문자열 s1 뒤에 s2를 연결
	StringConcat(str1, "hello");

	return 0;
}
void StringConcat(char s1[], char s2[])
{
	strcat(s1, s2);
	printf("s1뒤에 s2가 연결됨: %s", s1);
}