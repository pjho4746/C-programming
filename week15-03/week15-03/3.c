//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* GetIntegerArray(int);
void PrintArray(int[], int);

int main(void)
{
	//n = ����ڰ� ���ϴ� �迭�� ��� �Է¹���
	int n;
	printf("������ ����? ");
	scanf("%d", &n);

	//n���� int �迭�� �����, n���� ������ �Է¹���
	//�Ű�����: ������ ����� ����, ��ȯ��: �迭�� �����ּ�
	int* plist = GetIntegerArray(n);
	//������ �迭 ����Ʈ
	PrintArray(plist, n);
	plist = NULL;

	return 0;
}
int* GetIntegerArray(int n)
{
	int* ip = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		printf("%d��° ������ �Է����ּ��� ", i);
		scanf("%d", &ip[i]);
	}
	return ip;
}
void PrintArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}