#include<stdio.h>
int main() {
    float kee;
    float mooge;
    float BMI;
    printf("your kee(m)): ");
    scanf("%f", &kee);
    printf("your mooge(kg): ");
    scanf("%f", &mooge);
    BMI = mooge / ((kee) * (kee));
    printf("your BMI: %.2f\n", BMI);
    return 0;
}