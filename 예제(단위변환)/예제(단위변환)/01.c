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
		//�޴� ǥ��
		DisplayMenu();
		//choice = �޴��� �Է�
		int choice = InputMenu();
		//if choice == 3�̸� �ݺ� ����
		if (choice == 3) break;
		//choice�� ���� ��ȯ ���� ó��
		ProcessMenu(choice);
	} while (1);

	return 0;
}
void DisplayMenu(void)
{
	DrawLine(20);
	printf("1. cm�� ��ġ�� ��ȯ\n");
	printf("2. ��ġ�� cm�� ��ȯ\n");
	printf("3. ���α׷� ����\n");
	DrawLine(20);
}
int InputMenu(void)
{
	int choice;

	do {
		//������Ʈ �޽����� ���
		printf(">> ����: ");
		//choice = �ϳ��� ������ �Է�
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
	//cm = ��ȯ�� cm�� �Է�
	printf("\n��ġ�� ��ȯ�� cm��? ");
	double cm = GetReal();
	//inch = cm�� inch�� ��ȯ
	double inch = Cm2Inch(cm);
	//��ȯ�� inch�� ���
	printf("%.2f cm = %/2f inch\n\n", cm, inch);

}
void Process_inch2cm(void)
{
	printf("\ncm�� ��ȯ�� ��ġ��? ");
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