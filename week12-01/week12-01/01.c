//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void GetScore(int[][6], int, int);
void TotalScore1(int[][6], int, int);

//void ShowArray(int [][6], int, int);

int main(void)
{
	//������ �Է¹���
	int score[3][6]; //2���� �л����� 5���� ������ üũ
	GetScore(score, 3, 6); //2���� �л����� 5���� ������ üũ
	
	//������, ������, ������ ����
	TotalScore1(score, 3, 6);

	//

	return 0;
	
}

void GetScore(int a[][5], int a,int b)
{
	int i, j;
	for (i = 0; i < (a - 1); i++) {
		for (j = 0; j < (b - 1); j++) {
			printf("�л� %d�� ���� : ", i + 1);
			scanf("%d", &a[i][j])
		}
	}
}

void TotalScore1(int f[][6], int a, int b)
{
	for (int i = 0; i < (a - 1); i++) {
		for (int j = 0; j < (b - 1); j++) {
			//�� ���� �������� ����
			f[i][6] += f[i][j];
			//�� ���� �������� ����
			f[3][j] += f[i][j];
			//��ü ���� ����
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
		printf("\n"); //2�� �迭�� ���
	}
}*/