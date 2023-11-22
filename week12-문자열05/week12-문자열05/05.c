//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int StringComp(char s1[], char s2[]);

int main(void)
{
	//문자열 s1
	char str1[100] = "hi";
	printf("문자열 s1: %s\n", str1);
	//문자열 s2
	char str2[100] = "hello";
	printf("문자열 s2: %s\n", str2);
	
	//문자열 s1 뒤에 s2를 비교
	int res = StringComp(str1, str2);

	printf("%d", res);

	return 0;
}
int StringComp(char s1[], char s2[])
{
	return (strcmp(s1, s2));
}