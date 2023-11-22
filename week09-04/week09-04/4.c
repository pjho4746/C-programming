//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int InputScore(void);
char GetGrade(int, int, int);

int main(void) {
	int i= 0;

	for (i = 1; i <= 5; i++) {
		
		int score1 = InputScore();
		int score2 = InputScore();
		int score3 = InputScore();
		
		char grade = GetGrade(score1, score2, score3);
		printf("최종 학점은 %c입니다\n", grade);
		printf("\n");

	}
	return 0;
}
int InputScore(void) {
	int score;
	do {
		printf("점수를 입력해주세요: ");
		scanf("%d", &score);
	} while ((score > 100) || (score < 0));
	return score;
}
char GetGrade(int s1, int s2, int s3) {
	double avg = (double)(s1 + s2 + s3) / 3;

	if (avg >= 90) return 'A';
	else if (avg >= 80) return 'B';
	else if (avg >= 70) return 'C';
	else if (avg >= 60) return 'D';
	else return 'F';
}