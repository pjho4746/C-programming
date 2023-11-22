//컴퓨터공학과 20200769 박지호
#include <stdio.h>
int StringLength(char s[]);

int main(void)
{
	char str[10] = "hi";
	//문자열 출력
	printf("문자열: %s\n", str);
	//문자열 길이 계산
	int n = StringLength(str); /*n에 2가 저장*/
	//문자열 길이 출력
	printf("길이: %d", n);

	return 0;
}
int StringLength(char s[])
{
	
}