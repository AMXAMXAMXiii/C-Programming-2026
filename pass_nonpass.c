#include<stdio.h>

int main() {
    int num;
    printf("Enter your score: ");
    scanf("%d", &num);
    printf("Enter your attendance: ");
    int attendance; 
    scanf("%d", &attendance);

    if (num >= 60 && attendance >= 80) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
    
    return 0;
}