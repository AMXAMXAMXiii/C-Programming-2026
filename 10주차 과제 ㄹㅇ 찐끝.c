#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define SIZE 10
//duaaaaa
typedef struct {
    int id;
    int score;
} Student;

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

    printf("\n= rank (high to low) =\n");

    Student students[SIZE];
    for (int i = 0; i < SIZE; i++) {
        students[i].id = i + 1;     
        students[i].score = scores[i];
    }

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - 1 - i; j++) {
            if (students[j].score < students[j + 1].score) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        printf("rank %02d | student %02d: %d point\n", i + 1, students[i].id, students[i].score);
    }

    return 0;
}
