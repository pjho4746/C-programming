//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 5

void Find_Array(int[], int);

int main(void)
{
	//임의의 값으로 초기화된 배열 선언
	int list[] = { 11, 22, 33, 44, 55 };

	printf("기준 배열 : ");
	for (int i = 0; i < size; i++) {
		printf(" %d ", list[i]);
	}
	//배열에서 사용자가 입력한 값을 찾아 그 위치를 출력
	Find_Array(list, size);

	return 0;
}

void Find_Array(int f[], int s)
{   
	int num;
	printf("찾고자 하는 값은? ");
	scanf("%d", &num);
	
	for (int i = 0; i < s; i++) {
		if (f[i] == num) {
			//배열에 있는 경우에 인덱스 값을 출력
			printf("%d는 배열 요소 %d의 값입니다.", num, i);
		}
		else
			//배열에 없는 경우엔 오류 메시지 출력
			printf("%d는 배열에 없습니다.", num);
	}
}