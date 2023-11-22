//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void GetScore(int[][6], int, int);
void TotalScore1(int[][6], int, int);

//void ShowArray(int [][6], int, int);

int main(void)
{
	//성적을 입력받음
	int score[3][6]; //2명의 학생들의 5과목 성적을 체크
	GetScore(score, 3, 6); //2명의 학생들의 5과목 성적을 체크
	
	//가로합, 세로합, 총합을 저장
	TotalScore1(score, 3, 6);

	//

	return 0;
	
}

void GetScore(int a[][5], int a,int b)
{
	int i, j;
	for (i = 0; i < (a - 1); i++) {
		for (j = 0; j < (b - 1); j++) {
			printf("학생 %d의 성적 : ", i + 1);
			scanf("%d", &a[i][j])
		}
	}
}

void TotalScore1(int f[][6], int a, int b)
{
	for (int i = 0; i < (a - 1); i++) {
		for (int j = 0; j < (b - 1); j++) {
			//각 행의 가로합을 저장
			f[i][6] += f[i][j];
			//각 행의 세로합을 저장
			f[3][j] += f[i][j];
			//전체 합을 저장
			f[3][6] += arr[i][j];
			
		}
	}
}



/*void ShowArray(int a[][3], int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", a[i][j]);
		}
		printf("\n"); //2차 배열로 출력
	}
}*/