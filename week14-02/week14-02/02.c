//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SumRangeWithPostition(int* pStart, int* pEnd);

int main(void)
{
	//정수 배열
	int array[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//start와 end는 부분합을 구하고자 하는 배열의 요소 첨자를 받는다고 가정
	int* pStart = &array[2];
	int* pEnd = &array[7];

	//정수 배열에서 지정된 범위의 요소들의 합을 구하시오
	int sum = SumRangeWithPostition(pStart, pEnd);

	printf("지정된 범위의 요소들의 합은: %d", sum);

	return 0;
}
int SumRangeWithPostition(int* pStart, int* pEnd)
{
	int sum = 0;
	for (int* ip = pStart; ip <= pEnd; ip++) {
		sum += *ip;
	}
	return sum;
}