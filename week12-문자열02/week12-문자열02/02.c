//컴퓨터공학과 20200769 박지호
#include <stdio.h>
#include <ctype.h>
void ToupperString(char s[]);

int main(void)
{
	char str[10] = "hi!";
	//문자열 출력
	printf("문자열: %s\n", str);
	//대문자 문자열로 변환
	ToupperString(str);

	return 0;
}
void ToupperString(char s[])
{
	for (int i = 0; s[i]; i++) {
		s[i] = (char)toupper(s[i]);
	}
	printf("대문자로 변환된 문자열 출력: %s", s);
}