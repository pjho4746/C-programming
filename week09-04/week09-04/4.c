//��ǻ�Ͱ��а� 20200769 ����ȣ
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
		printf("���� ������ %c�Դϴ�\n", grade);
		printf("\n");

	}
	return 0;
}
int InputScore(void) {
	int score;
	do {
		printf("������ �Է����ּ���: ");
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