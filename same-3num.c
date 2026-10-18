#include <stdio.h>

int main() {
    int num;
    int aa_num = 0;
    int bb_count = 0;
    int total_count = 0;

    while (1) {
        scanf("%d", &num);
        total_count++;

        if (num == aa_num) {
            bb_count++;
        } else {
            bb_count = 1;
            aa_num = num;
        }

        if (bb_count == 3) {
            break;
        }
    }

    printf("숫자 %d가 3번 연속 -> 전체 %d회\n", num, total_count);

    return 0;
}
