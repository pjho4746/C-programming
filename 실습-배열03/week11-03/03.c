//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 5

void Find_Array(int[], int);

int main(void)
{
	//������ ������ �ʱ�ȭ�� �迭 ����
	int list[] = { 11, 22, 33, 44, 55 };

	printf("���� �迭 : ");
	for (int i = 0; i < size; i++) {
		printf(" %d ", list[i]);
	}
	//�迭���� ����ڰ� �Է��� ���� ã�� �� ��ġ�� ���
	Find_Array(list, size);

	return 0;
}

void Find_Array(int f[], int s)
{   
	int num;
	printf("ã���� �ϴ� ����? ");
	scanf("%d", &num);
	
	for (int i = 0; i < s; i++) {
		if (f[i] == num) {
			//�迭�� �ִ� ��쿡 �ε��� ���� ���
			printf("%d�� �迭 ��� %d�� ���Դϴ�.", num, i);
		}
		else
			//�迭�� ���� ��쿣 ���� �޽��� ���
			printf("%d�� �迭�� �����ϴ�.", num);
	}
}