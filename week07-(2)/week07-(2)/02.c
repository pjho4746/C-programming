//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int FindCharType(char);
char GetType();

int main(void) {
	//���ڸ� �Է¹޴� �Լ�
	char word;
	word = GetType();

	//������ ������ �Ǻ��ϴ� �Լ�
	int res;
	res = FindCharType(word);


	//��ȯ���� ���� ���
	printf("%d", res);

	return 0;
}

char GetType() {
	char w;
	printf("�ϳ��� ���ڸ� �Է��ϼ��� ");
	scanf("%c", &w);

	return w;
}

int FindCharType(char t) {
	if (t == ' ') return 1;
	else if (t == '\t') return 2;
	else if (t == '\n') return 3;
	else if ((t >= 'a' && t <='Z') || (t >= 0 && t <= 9)) return 4;
	else return 0;



}