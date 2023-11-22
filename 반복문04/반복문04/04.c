#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STUD_NUM 5

int InputScore(void);
char GetGrade(int, int, int);
void ProcessSocre(int id);

int main(void)
{
	printf(" ### 학점 계산 ### ");

	for (int i = 0; i < STUD_NUM; i++) {
		ProcessScore(i + 1);
	}

	return 0;
}

void ProcessSocre(int id)
{
	int score1, score2, score3;

	for (int i = 0; i < STUD_NUM; i++) {
		do {
			//score1 = 첫번째 과목 점수 입력
			printf("첫 번째 과목 ");
			score1 = InputScore();
		} while (score1 < 0 || score1>100);

		do {
			//score2 = 두번째 과목 점수 입력
			printf("두 번째 과목 ");
			score2 = InputScore();
		} while (score2 < 0 || score2>100);

		do {
			//score3 = 세번째 과목 점수 입력
			printf("세 번째 과목 ");
			score3 = InputScore();
		} while (score3 < 0 || score3>100);

		//grade = 입력된 세 성적에 대한 학점 판별
		char grade;
		grade = GetGrade(score1, score2, score3);

		//학점 출력
		printf("\n>>> %d번 학생의 학점은 %c입니다.\n\n", id, grade);
	}
}

int InputScore(void)
{
	int n;
	printf("점수? ");
	scanf("%d", &n);

	return n;
}
char GetGrade(int s1, int s2, int s3)
{
	double avg = (double)(s1 + s2 + s3) / 3;

	if (avg >= 90) return 'A';
	else if (avg >= 80) return 'B';
	else if (avg >= 70) return 'C';
	else if (avg >= 60) return 'D';
	else return 'F';
}
