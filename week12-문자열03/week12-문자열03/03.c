//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void StringCopy(char dst[], char src[]);

int main(void)
{
	//원본 문자열 src
	char str1[10] = "hi";
	printf("원본 문자열: %s\n", str1);
	//원본 문자열이 복사될 충분한 크기 dst
	char str2[100];
	//문자열 scr를 dst로 복사
	StringCopy(str2, str1);
	
	return 0;
}
void StringCopy(char dst[], char src[])
{
	strcpy(dst, src);
	printf("src[]에 내용이 복사됨: %s", src);
}