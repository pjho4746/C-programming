//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int InputNum(void);
void DrawStar(int);

int main(void)
{
	//����ڷκ��� ������ �Է¹���
	int answer = InputNum();

	//��ǥ �׸�
	DrawStar(answer);

	return 0;
}
int InputNum(void)
{
	int answer;
	printf("0~100 ������ ������ �Է����ּ��� ");
	scanf("%d", &answer);
	return answer;
}
void DrawStar(int a)
{
	int b, c;
	b = a % 10;
	c = (int)a / 10;
	char f[10];

	if (b >= 5) {
		for (int i = 0; i < c + 1; i++) {
			printf("���ڸ� �Է����ּ��� ");
			scanf(" %c", &f[i]);
		}
		for (int i = 0; i < c + 1; i++) {
			printf("%c", f[i]);
		}
	}

	else {
		for (int i = 0; i < c; i++) {
			printf("���ڸ� �Է����ּ��� ");
			scanf(" %c", &f[i]);
		}
		for (int i = 0; i < c; i++) {
			printf("%c", f[i]);
		}
	}

	/*
	//�迭�� ���ڿ��� ���� ��, �ݿø��� ���ڸ�ŭ�� ����ϰ��� ����
	//* ��ſ� 42�� ��µ� > scanf�� ���� ���� ��, ����ϴ� �������� �ۼ���

	if (b >= 5) {
		char f[10] = "**********";
		for (int i = 0; i < c + 1; i++) {
			printf("%d", f[i]);
		}
	}
	else
		char f[10] = "**********";
	for (int i = 0; i < c; i++) {
		printf("%d", f[i]);
	}
	*/
}
