//��ǻ�Ͱ��а� 20200769 ����ȣ
#include <stdio.h>
int ArrayCmp(int a1[], int a2[], int size);
void AnswerStr(int);

int main(void)
{
	int size = 5;
	//�ʱⰪ�� ���� �� ���� �迭 list1, list2 ����
	int list1[] = { 1, 2, 3, 4, 5 };
	int list2[] = { 1, 2, 3, 4, 5 };
	//ArrayCmp()�� �迭�� ������ ��
	int result = ArrayCmp(list1, list2, size);
	//��� ���
	AnswerStr(result);
}

int ArrayCmp(int a1[], int a2[], int size)
{
	//�� ����� ���� ���������� ���ؾ� �Ѵ�
	for (int i = 0; i < size; i++) {
		if (a1[i] != a2[i]) {
			return 3;
			break;
		}
	}
	return 0;
}

void AnswerStr(int n)
{
	//�� ��� ���
	if (n == 3)
		printf("�� �迭�� �ٸ��ϴ�.");
	else
		printf("�� �迭�� �����ϴ�.");
}