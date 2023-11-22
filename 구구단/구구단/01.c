#include <stdio.h>

void GuGuDanTable(void);

int main(void)
{
	printf("### 구구단 표 ###\n");

	//구구단표 출력
	GuGuDanTable();

	return 0;
}
void GuGuDanTable(void)
{
	int offset = 0;
	for (int j = 0; j < 2; j++) {
		for (int i = 1; i <= 9; i++) {
			for (int dan = 2 + offset; dan <= 5 + offset; dan++)
				printf("%d × %d = %2d\t", dan, i, dan * i);

			printf("\n");
		}
		printf("\n");
		offset += 4;
	}
}
