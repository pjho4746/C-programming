//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayOdd(int s, int e, int m);

int main(void) {
	int s, e, m;
	printf("범위를 설정해주세요\n");
	
	printf("시작: ");
	scanf("%d", &s);
	printf("끝: ");
	scanf("%d", &e);
	printf("배수: ");
	scanf("%d", &m);
	printf("\n");

	DisplayOdd(s, e, m);

	return 0;

}
void DisplayOdd(int s, int e, int m) {
	int index = 0;
	int count = 0;

	printf("%d부터 %d사이에 있는 정수 중에서 %d의 배수를 제외한 홀수를 10개씩 출력\n", s, e, m);
	printf("\n");

	//s부터 e까지 출력
	for (index = s; index <= e; index++) {
		//5의 배수이거나 짝수인 경우 돌아감
		if ((index % m == 0) || (index % 2 == 0))
			continue;
		//화면에 출력
		printf("%5d", index);

		count++;
		if (count % 10 == 0)
			printf("\n");
	}
	printf("\n");
}