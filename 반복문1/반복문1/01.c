#include <stdio.h>

void DisplayOdd(int start, int end, int multiple);

int main(void)
{
	printf("### 1부터 100 사이의 5의 배수를 제외한 모든 홀수 출력하기 ###\n");
	DisplayOdd(1, 1000, 5);
	return 0;
}
void DisplayOdd(int s, int e, int m)
{
	int cnt = 0;

	for (int i = s; i <= e; i++) {
		if (i % 2 == 1 && i % 5 != 0) {
			printf("%5d", i);
			cnt++;
		}
	
		//10개가 출력되었다면 다음줄로 개행
		if (cnt % 10 == 0)
			printf("\n");
		else
			printf(" ");

	}
}
