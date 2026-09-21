#include <stdio.h>

int main(void) {
        float wndrks;
        float rlakf;
        float rhkwp;
        float A;
        float B;
        float C;
        printf("중간 기말 과제 점수 순으로 입력하세요.\n");
        scanf("%f %f %f", &wndrks, &rlakf, &rhkwp);
        A = wndrks*30/100;
        B = rlakf*40/100;
        C = rhkwp*30/100;

        printf("Average: %10.1f\n", A + B + C);
        return 0;
    }
