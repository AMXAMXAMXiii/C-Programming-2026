#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define SIZE 10

int main() {
    int scores[SIZE];
    int id[SIZE];
    
    int sum = 0;
    int a, b;
    double average;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < SIZE; i++) {
        scores[i] = rand() % 101;
        id[i] = i + 1; 
    }

    a = scores[0];
    b = scores[0];
    for (int i = 0; i < SIZE; i++) {
        sum += scores[i];
    }
    
    for (int i = 0; i < SIZE; i++) {
        if (scores[i] > a) {
            a = scores[i];
        }
        if (scores[i] < b) {
            b = scores[i];
        }
    }

    average = (double)sum / SIZE;

    printf("=== students score ===\n");
    for (int i = 0; i < SIZE; i++) {
        printf("student %02d: %d point\n", id[i], scores[i]);
    }

    printf("\n= end =\n");
    printf("max score: %d point\n", a);
    printf("min score: %d point\n", b);
    printf("average score: %.2f point\n", average);
    printf("\n= rank (high to) =\n");

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (scores[j] < scores[j + 1]) {
                int temp1 = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp1;

                int temp2 = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp2;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        printf("rank %02d | student %02d: %d point\n", i + 1, id[i], scores[i]);
    }
    return 0;
}
