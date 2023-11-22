//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumRangeWithIndex(int* array, int start, int end);
int AskNumber(void);

int main(void)
{
	//정수 배열
	int array[10] = {0,1,2,3,4,5,6,7,8,9};
	//start와 end는 부분합을 구하고자 하는 배열의 요소 첨자를 받는다고 가정
	printf("범위를 설정합니다(시작)\n");
	int start = AskNumber();
	printf("범위를 설정합니다(끝)\n");
	int end = AskNumber();
	//정수 배열에서 지정된 범위의 요소들의 합을 구하시오
	int sum = sumRangeWithIndex(array, start, end);
	printf("지정된 범위의 요소들의 합은: %d", sum);

	return 0;
}
int AskNumber(void)
{
	int ans;
	printf("0~9 사이 중 정수를 입력해주세요: ");
	scanf("%d", &ans);
	return ans;
}
int sumRangeWithIndex(int* a, int s, int e)
{
	int sum = 0;
	for (int i = s; i <= e; i++) {
		sum += *(a+i);
	}
	return sum;
}