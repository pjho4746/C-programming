//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void StringConcat(char s1[], char s2[]);

int main(void)
{
	//���ڿ� s1
	char str1[100] = "hi";
	printf("���ڿ� s1: %s\n", str1);
	//���ڿ� s2
	char str2[100] = "hello";
	printf("���ڿ� s2: %s\n\n", str2);
	//���ڿ� s1 �ڿ� s2�� ����
	StringConcat(str1, "hello");

	return 0;
}
void StringConcat(char s1[], char s2[])
{
	strcat(s1, s2);
	printf("s1�ڿ� s2�� �����: %s", s1);
}