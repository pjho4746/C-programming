#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayMenu(void);
int InputMenu(void);
void ProcessMenu(int);
int GetInteger(void);
void Process_cm2inch(void);
void Process_inch2cm(void);
double GetReal(void);
double Cm2Inch(double);
double Inch2Cm(double);
void DrawLine(int);

int main(void)
{
	
	do {
		//메뉴 표시
		DisplayMenu();
		//choice = 메뉴값 입력
		int choice = InputMenu();
		//if choice == 3이면 반복 종료
		if (choice == 3) break;
		//choice에 따라 변환 연산 처리
		ProcessMenu(choice);
	} while (1);

	return 0;
}
void DisplayMenu(void)
{
	DrawLine(20);
	printf("1. cm를 인치로 변환\n");
	printf("2. 인치를 cm로 변환\n");
	printf("3. 프로그램 종료\n");
	DrawLine(20);
}
int InputMenu(void)
{
	int choice;

	do {
		//프롬프트 메시지를 출력
		printf(">> 선택: ");
		//choice = 하나의 정수를 입력
		choice = GetInteger();
	} while (choice<1 || choice>3);

	return choice;
}
void ProcessMenu(int choice)
{
	switch (choice) {
	case 1:
		//cm -> inch
		Process_cm2inch();
		break;
	case 2:
		//inch -> cm
		Process_inch2cm();
		break;
	}
}
int GetInteger(void)
{
	int n;
	scanf("%d", &n);
	return n;
}
void Process_cm2inch(void)
{
	//cm = 변환할 cm를 입력
	printf("\n인치로 변환할 cm는? ");
	double cm = GetReal();
	//inch = cm를 inch로 변환
	double inch = Cm2Inch(cm);
	//변환된 inch를 출력
	printf("%.2f cm = %/2f inch\n\n", cm, inch);

}
void Process_inch2cm(void)
{
	printf("\ncm로 변환할 인치는? ");
	double inch = GetReal();
	double cm = Inch2Cm(inch);
	printf("%.2f inch = %/2f cm\n\n", inch, cm);
}
double GetReal(void)
{
	double n;
	scanf("%lf", &n);
	return n;
}
double Cm2Inch(double cm)
{
	return 0.393701 * cm;
}
double Inch2Cm(double inch)
{
	return 2.54 * inch;
}
void DrawLine(int n)
{
	for (int i = 0; i < n; i++)
		printf("-");
	printf("\n");
}