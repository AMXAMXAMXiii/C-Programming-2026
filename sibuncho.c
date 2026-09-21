#include<stdio.h>
int main() {
    int total = 7386;
    int hours = total / 3600;
    int minutes = (total % 3600) / 60;
    int seconds = total % 60;
    printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
}