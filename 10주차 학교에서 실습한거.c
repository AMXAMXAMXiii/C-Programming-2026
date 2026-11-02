#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


#define SIZE 10

int main() {
    int scores[SIZE];
    int sum = 0;
    int max, min;
    double average;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < SIZE; i++) {
        scores[i] = rand() % 101;
    }

    max = scores[0];
    min = scores[0];
    sum = scores[0];

    for (int i = 1; i < SIZE; i++) {
        sum += scores[i];

        if (scores[i] > max) {
            max = scores[i];
        }
        if (scores[i] < min) {
            min = scores[i];
        }
    }


    average = (double)sum / SIZE;

    printf("=== students score ===\n");
    for (int i = 0; i < SIZE; i++) {
        printf("student %02d: %d point\n", i + 1, scores[i]);
    }
    
    printf("\n= end =\n");
    printf("max score: %d point\n", max);
    printf("min score: %d point\n", min);
    printf("average score: %.2f point\n", average);

    return 0;
}
