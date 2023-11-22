//컴퓨터공학과 20200769 박지호
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int InputPositiveData(void);

int main(void) {
	printf("성년/미성년자를 구별합니다\n");

	if (InputPositiveData() == 1)
		printf("성인입니다");
	else if (InputPositiveData() == 2)
		printf("미성년자입니다");
	else
		printf("미성년자입니다");
	return 0;
}


int InputPositiveData(void) {
	int age;
	do {
		printf("나이: ");
		scanf("%d", &age);
		if (age >= 20)
			return 1;
		else
			return 2;
	} while (age > 0);
	return 0;

}