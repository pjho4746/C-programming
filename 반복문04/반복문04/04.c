#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STUD_NUM 5

int InputScore(void);
char GetGrade(int, int, int);
void ProcessSocre(int id);

int main(void)
{
	printf(" ### ���� ��� ### ");

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
			//score1 = ù��° ���� ���� �Է�
			printf("ù ��° ���� ");
			score1 = InputScore();
		} while (score1 < 0 || score1>100);

		do {
			//score2 = �ι�° ���� ���� �Է�
			printf("�� ��° ���� ");
			score2 = InputScore();
		} while (score2 < 0 || score2>100);

		do {
			//score3 = ����° ���� ���� �Է�
			printf("�� ��° ���� ");
			score3 = InputScore();
		} while (score3 < 0 || score3>100);

		//grade = �Էµ� �� ������ ���� ���� �Ǻ�
		char grade;
		grade = GetGrade(score1, score2, score3);

		//���� ���
		printf("\n>>> %d�� �л��� ������ %c�Դϴ�.\n\n", id, grade);
	}
}

int InputScore(void)
{
	int n;
	printf("����? ");
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
