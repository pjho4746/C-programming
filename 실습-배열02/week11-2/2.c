//컴퓨터공학과 20200769 박지호
#include <stdio.h>
int ArrayCmp(int a1[], int a2[], int size);
void AnswerStr(int);

int main(void)
{
	int size = 5;
	//초기값을 갖는 두 정수 배열 list1, list2 선언
	int list1[] = { 1, 2, 3, 4, 5 };
	int list2[] = { 1, 2, 3, 4, 5 };
	//ArrayCmp()로 배열이 같은지 비교
	int result = ArrayCmp(list1, list2, size);
	//결과 출력
	AnswerStr(result);
}

int ArrayCmp(int a1[], int a2[], int size)
{
	//각 요소의 값을 개별적으로 비교해야 한다
	for (int i = 0; i < size; i++) {
		if (a1[i] != a2[i]) {
			return 3;
			break;
		}
	}
	return 0;
}

void AnswerStr(int n)
{
	//비교 결과 출력
	if (n == 3)
		printf("두 배열은 다릅니다.");
	else
		printf("두 배열은 같습니다.");
}