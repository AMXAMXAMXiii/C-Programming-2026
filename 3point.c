#include <stdio.h>
int main() {
    int score;
    int count = 0;
    int sum = 0;

    while (count < 3) {
        scanf("%d", &score);

        if (score == -1) {
            break;
        }

        if (score >= 0 && score <= 100) {
            sum += score;
            count++;
        } else {
            printf("오류: 0~100 사이의 점수를 입력하세요.\n");
        }
    }

    if (count == 0) {
        printf("입력된 점수가 없습니다.\n");
    } else {
        printf("%d개, 평균 %.2f\n", count, (float)sum / count);
    }

    return 0;
}
