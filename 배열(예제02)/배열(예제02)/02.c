#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_FLOORS 4

void Show(int[], int);
int Sum(int[], int);
void Input(int[], int);

int main(void)
{
	int nPeople[MAX_FLOORS];

	Input(npeople, MAX_FLOORS);

	int total;
	total = Sum(nPeople, MAX_FLOORS);

	//각 층의 거주인원수를 출력
	Show(nPeople, MAX_FLOORS);

	//총 거주인원수(total)을 출력
	printf("총 거주인원수는 %d입니다.\n", total);

	return 0;
}
void Show(int f[], int n)
{
	for int(i = 0; i < n; i++) {
		printf("%d층의 거주 인원수는 %d명입니다.\n", i+1, f[i])
	}
}

int Sum(int a[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total += a[i];

	return total;
}

void Input(int f[], int n)
{
	for (inr i = 0; i < n; i++) {
		//nPeople[ㅑ]=i+1층의 거주 인원수를 입력받음
		printf("%d층의 거주 인원수는? ", i + 1);
		scanf("%d", &f[i]);
	}
}