//��ǻ�Ͱ��а� 20200769 ����ȣ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DisplayOdd(int s, int e, int m);

int main(void) {
	int s, e, m;
	printf("������ �������ּ���\n");
	
	printf("����: ");
	scanf("%d", &s);
	printf("��: ");
	scanf("%d", &e);
	printf("���: ");
	scanf("%d", &m);
	printf("\n");

	DisplayOdd(s, e, m);

	return 0;

}
void DisplayOdd(int s, int e, int m) {
	int index = 0;
	int count = 0;

	printf("%d���� %d���̿� �ִ� ���� �߿��� %d�� ����� ������ Ȧ���� 10���� ���\n", s, e, m);
	printf("\n");

	//s���� e���� ���
	for (index = s; index <= e; index++) {
		//5�� ����̰ų� ¦���� ��� ���ư�
		if ((index % m == 0) || (index % 2 == 0))
			continue;
		//ȭ�鿡 ���
		printf("%5d", index);

		count++;
		if (count % 10 == 0)
			printf("\n");
	}
	printf("\n");
}