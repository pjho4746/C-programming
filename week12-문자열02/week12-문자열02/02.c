//��ǻ�Ͱ��а� 20200769 ����ȣ
#include <stdio.h>
#include <ctype.h>
void ToupperString(char s[]);

int main(void)
{
	char str[10] = "hi!";
	//���ڿ� ���
	printf("���ڿ�: %s\n", str);
	//�빮�� ���ڿ��� ��ȯ
	ToupperString(str);

	return 0;
}
void ToupperString(char s[])
{
	for (int i = 0; s[i]; i++) {
		s[i] = (char)toupper(s[i]);
	}
	printf("�빮�ڷ� ��ȯ�� ���ڿ� ���: %s", s);
}