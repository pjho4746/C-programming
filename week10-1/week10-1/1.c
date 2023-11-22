//컴퓨터공학과 20200769 박지호
#include <stdio.h>
void Gugudan(void);
void Horizontal(void);

int main(void){
    //1단계:1~9단까지 순차적으로 출력
    printf("1단계: 1~9단까지 한 단씩 순차적으로 출력\n\n");
    Gugudan();

    //2단계: 1~9단까지 2차원으로 출력
    printf("2단계: 1~9단까지를 2차원적으로 배치\n\n");
    Horizontal();

    return 0;
}
void Gugudan(void) {
    //for문 사용
    printf("### 구구단 표 ###\n");

    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {   //줄을 맞추기 위해서 공통된 공간을 설정
            printf("%3d x %3d = %3d\n", i, j, (i * j));
        }
        printf("\n");
    }
}
void Horizontal(void) {
    //2개의 for문을 사용해 2차원으로 배치
    printf("### 구구단 표 ###\n");
    for (int i = 1; i <= 9; i++)
    {   //2~5단
        for (int j = 2; j <= 5; j++)
        {   //줄을 맞추기 위해서 공통된 공간을 설정
            printf("%3d x %3d = %3d\n", j, i, (j * i));
        }
        printf("\n");
    }

    for (int i = 1; i <= 9; i++)
    {   //6~9단
        for (int j = 6; j <= 9; j++)
        {   //줄을 맞추기 위해서 공통된 공간을 설정
            printf("%3d x %3d = %3d\n", j, i, (j * i));
        }
        printf("\n");
    }
}
