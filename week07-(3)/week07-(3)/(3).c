//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputNum(void);
void readNum(int);

int main(void)
{
	//����ڷκ��� ���ڸ� ������ �ϳ� �Է¹���
	int num;
	num = InputNum();

	//���ڸ��� �и�
	int a, b, c;
	a = (int)num / 100;
	num = num - 100 * a;
	b = (int)num / 10;
	num = num - 10 * b;
	c = num;

	//����� ���
	readNum(a);
	readNum(b);
	readNum(c);

	//����
	return 0;

}

int InputNum(void)
{
	printf("���ڸ� ���� �ϳ��� �Է����ּ���: ");
	int word;
	scanf("%d", &word);

	return word;
}

void readNum(int t) {
	char number;

	switch (t) {
	case 1: printf(" one "); break;
	case 2: printf(" two "); break;
	case 3: printf(" three "); break;
	case 4: printf(" four "); break;
	case 5: printf(" five "); break;
	case 6: printf(" six "); break;
	case 7: printf(" seven "); break;
	case 8: printf(" eight "); break;
	case 9: printf(" nine "); break;
	case 0: printf(" zero "); break;
	}
}