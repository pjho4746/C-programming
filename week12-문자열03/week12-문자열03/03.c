//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void StringCopy(char dst[], char src[]);

int main(void)
{
	//���� ���ڿ� src
	char str1[10] = "hi";
	printf("���� ���ڿ�: %s\n", str1);
	//���� ���ڿ��� ����� ����� ũ�� dst
	char str2[100];
	//���ڿ� scr�� dst�� ����
	StringCopy(str2, str1);
	
	return 0;
}
void StringCopy(char dst[], char src[])
{
	strcpy(dst, src);
	printf("src[]�� ������ �����: %s", src);
}