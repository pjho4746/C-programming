#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_FLOORS 4

int main(void)
{
	int nPeople[MAX_FLOORS];

	for (int i = 0; i < MAX_FLOORS; i++) {
		//nPeople[i]=i+1층의 거주 인원수를 입력받음
		printf("%d층의 거주인원수는? ", i + 1);
		scanf("%d", &nPeople[i]);
	}

	int total = 0;
	for (int i = 0; i < MAX_FLOORS; i++)
		total += nPeople[i];
	
	//각 층의 거주인원수를 출력
	for (int i = 0; i < MAX_FLOORS; i++) {
		printf("%d층의 거주 인원수는 %d명입니다.\n", i + 1, nPeople[i]);
	}

	//총 거주인원수(total)을 출력
	printf("총 거주인원수는 %d입니다.\n", total);

	return 0;
}