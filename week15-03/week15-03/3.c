//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* GetIntegerArray(int);
void PrintArray(int[], int);

int main(void)
{
	//n = 사용자가 원하는 배열의 요소 입력받음
	int n;
	printf("생성할 개수? ");
	scanf("%d", &n);

	//n개의 int 배열을 만들고, n개의 정수를 입력받음
	//매개변수: 생성할 요소의 개수, 반환값: 배열의 시작주소
	int* plist = GetIntegerArray(n);
	//생성한 배열 프린트
	PrintArray(plist, n);
	plist = NULL;

	return 0;
}
int* GetIntegerArray(int n)
{
	int* ip = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		printf("%d번째 정수를 입력해주세요 ", i);
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