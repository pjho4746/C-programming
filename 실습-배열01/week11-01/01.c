//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define Max 10
#define Min 5

int GetIntegerArray(int a[], int Min, int Max);
void PrintIntegerArray(int a[], int n);
double AverageIntegerArray(int a[], int n);

{
	
	int score[5];
	//배열에 양의 점수를 입력받음
	int confirm = GetIntegerArray(score, Min, Max);
	//배열 요소를 출력

	//평균 산출
	double total = AverageIntegerArray(ScoreArray, confirm);

	printf("평균은 %g 입니다.", total);
}

int GetIntegerArray(int a[], int Min, int Max)
{
	int n;
	int count = 0;
	for (int i = 0; i < Max; i++) {
		do {
			printf("양의 정수를 입력해주세요: ");
			scanf("%d", &n);
			if (n == -1)
				break;
		} while (n < 0);
		count += 1;
		if count == 5
			break;
	}

}

double AverageIntegerArray(int s[], int size)
{
	int sum = 0;
	double res = 0;

	for (int i = 0; i < size; i++) {
		sum += s[i];
	}
	res = (double)sum / size;
	return res;
}