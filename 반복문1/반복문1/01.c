#include <stdio.h>

void DisplayOdd(int start, int end, int multiple);

int main(void)
{
	printf("### 1���� 100 ������ 5�� ����� ������ ��� Ȧ�� ����ϱ� ###\n");
	DisplayOdd(1, 1000, 5);
	return 0;
}
void DisplayOdd(int s, int e, int m)
{
	int cnt = 0;

	for (int i = s; i <= e; i++) {
		if (i % 2 == 1 && i % 5 != 0) {
			printf("%5d", i);
			cnt++;
		}
	
		//10���� ��µǾ��ٸ� �����ٷ� ����
		if (cnt % 10 == 0)
			printf("\n");
		else
			printf(" ");

	}
}
