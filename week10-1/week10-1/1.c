//��ǻ�Ͱ��а� 20200769 ����ȣ
#include <stdio.h>
void Gugudan(void);
void Horizontal(void);

int main(void){
    //1�ܰ�:1~9�ܱ��� ���������� ���
    printf("1�ܰ�: 1~9�ܱ��� �� �ܾ� ���������� ���\n\n");
    Gugudan();

    //2�ܰ�: 1~9�ܱ��� 2�������� ���
    printf("2�ܰ�: 1~9�ܱ����� 2���������� ��ġ\n\n");
    Horizontal();

    return 0;
}
void Gugudan(void) {
    //for�� ���
    printf("### ������ ǥ ###\n");

    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {   //���� ���߱� ���ؼ� ����� ������ ����
            printf("%3d x %3d = %3d\n", i, j, (i * j));
        }
        printf("\n");
    }
}
void Horizontal(void) {
    //2���� for���� ����� 2�������� ��ġ
    printf("### ������ ǥ ###\n");
    for (int i = 1; i <= 9; i++)
    {   //2~5��
        for (int j = 2; j <= 5; j++)
        {   //���� ���߱� ���ؼ� ����� ������ ����
            printf("%3d x %3d = %3d\n", j, i, (j * i));
        }
        printf("\n");
    }

    for (int i = 1; i <= 9; i++)
    {   //6~9��
        for (int j = 6; j <= 9; j++)
        {   //���� ���߱� ���ؼ� ����� ������ ����
            printf("%3d x %3d = %3d\n", j, i, (j * i));
        }
        printf("\n");
    }
}
