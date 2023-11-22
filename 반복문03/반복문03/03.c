#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputPositiveData(void);

int main(void)
{
	printf("### 성년/미성년 판별 ###\n");

	int age;
	printf("당신의 만 나이는");
	age = InputPositiveData();

	if (age < 19)
		printf("당신은 미성년자이군요.\n");
	else
		printf("당신은 성년이군요.\n");

	return 0;
}
int InputPositiveData(void)
{
	int n;
	do {
		printf("? ");
		scanf("%d", &n);
	} while (n < 0);

	return n;
}