//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int AskTime(void);
void ConvertTimeToHMS(int time, int* hour, int* min, int* sec);

int main(void)
{
	//(�� ������ �Էµ�) �и��� �ð��� time �Է¹���
	int time = AskTime();
	//�迭 [hour, min, sec] ���� �迭 �ʱ�ȭ
	int TimeArray[3] = { 0 };
	//��/��/�� ������ ����
	int* hour = &TimeArray[0];
	int* min = &TimeArray[1];
	int* sec = &TimeArray[2];
	//time �����ϰ� ��/��/�ʷ� ������ ����
	ConvertTimeToHMS(time, hour, min, sec);
	//�迭 ���
	printf("\n�Է¹��� %d �ð���(�ʴ���)�� ", time);
	printf("%d�� ", TimeArray[0]);
	printf("%d�� ", TimeArray[1]);
	printf("%d�� �Դϴ�", TimeArray[2]);

	return 0;
}
int AskTime(void)
{
	int t;
	printf("�ð��� �Է����ּ���(�ʴ���) ");
	scanf("%d", &t);
	return t;
}
void ConvertTimeToHMS(int time, int* hour, int* min, int* sec)
{
	int h, m, s;
	
	h = time / 3600;

	time %= 3600;
	m = time / 60;

	time %= 60;
	s = time;

	*hour = h;
	*min = m;
	*sec = s;
}