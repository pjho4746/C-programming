//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int StringLength(char s[]);

int main(void)
{
	char s[] = { 'h', 'i', '\0' };
	//�־��� ���ڿ� s�� ���̸� ���ϴ� �Լ�
	int answer = StringLength(s);
	//���ڿ� ���̸� ���
	printf("���ڿ��� ���̴� %d�Դϴ�.", answer);

	return 0;
}
int StringLength(char s[])
{
	//���ڿ��� ���̸� for������ ����
	int n1 = 0;
	for (int i = 0; s[i]; i++) {
		n1 += 1;;
	}
	return n1;
}