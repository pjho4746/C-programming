//��ǻ�Ͱ��а� 20200769 ����ȣ
#include <stdio.h>
int StringLength(char s[]);

int main(void)
{
	char str[10] = "hi";
	//���ڿ� ���
	printf("���ڿ�: %s\n", str);
	//���ڿ� ���� ���
	int n = StringLength(str); /*n�� 2�� ����*/
	//���ڿ� ���� ���
	printf("����: %d", n);

	return 0;
}
int StringLength(char s[])
{
	
}