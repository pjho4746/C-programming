//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void WorkSelect(int);

int main(void) {
	int select;
	do {
		printf("------------------\n");
		printf("1. cm를 인치로 변환\n");
		printf("2. 인치를 cm로 변환\n");
		printf("3. 프로그램 종료\n");
		printf("------------------\n");
		//1,2,3 중에서 선택
		printf(">> 선택: ");
		scanf("%d", &select);
		printf("\n");
		//각 결과값에 해당하는 과정을 수행하는 함수
		WorkSelect(select);
		//정상적으로 프로그램 종료
	} while (select != 3);
	//정상적으로 프로그램 종료
	return 0;
}
void WorkSelect(int num) {
	if (num == 1){
		double n1, res1;
		printf("인치로 변환할 cm는? ");
		scanf("%lf", &n1);
		res1 = n1 * (0.393701);
		printf("%5.2f cm = %5.2f inch\n", n1, res1);
		printf("\n");
	}
	else if (num == 2) {
		double n2, res2;
		printf("cm로 변환할 인치는? ");
		scanf(" %lf", &n2);
		res2 = n2 * (2.54);
		printf("%5.2f cm = %5.2f inch\n", n2, res2);
		printf("\n");
	}
}