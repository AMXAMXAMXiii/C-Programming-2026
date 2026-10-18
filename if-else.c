#include <stdio.h>

int main() {
    int grade;
    printf("학년을 입력하세요 : ");
    scanf("%d", &grade);

    if (grade == 1) {
        printf("1학년입니다.\n");
    } else if (grade == 2) {
        printf("2학년입니다.\n");
    } else if (grade == 3) {
        printf("3학년입니다.\n");
    } else {
        printf("잘못된 값을 입력함\n");
    }

    return 0;
}
