//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int AskTime(void);
void ConvertTimeToHMS(int time, int* hour, int* min, int* sec);

int main(void)
{
	//(초 단위로 입력된) 분리할 시간값 time 입력받음
	int time = AskTime();
	//배열 [hour, min, sec] 정수 배열 초기화
	int TimeArray[3] = { 0 };
	//시/분/초 포인터 지정
	int* hour = &TimeArray[0];
	int* min = &TimeArray[1];
	int* sec = &TimeArray[2];
	//time 분할하고 시/분/초로 나누어 저장
	ConvertTimeToHMS(time, hour, min, sec);
	//배열 출력
	printf("\n입력받은 %d 시간값(초단위)은 ", time);
	printf("%d시 ", TimeArray[0]);
	printf("%d분 ", TimeArray[1]);
	printf("%d초 입니다", TimeArray[2]);

	return 0;
}
int AskTime(void)
{
	int t;
	printf("시간을 입력해주세요(초단위) ");
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