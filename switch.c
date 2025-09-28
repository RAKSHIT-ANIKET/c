#include <stdio.h>
#include <math.h>   
int main() {
    float P, R, T, SI, CI;
    printf("Enter Principal Amount: ");
    scanf("%f", &P);
    printf("Enter Rate of Interest: ");
    scanf("%f", &R);
    printf("Enter Time (in years): ");
    scanf("%f", &T);
    SI = (P * R * T) / 100;
    CI = P * pow((1 + R / 100), T) - P;
    printf("\n--- Interest Calculation ---\n");
    printf("Simple Interest = %f\n", SI);
    printf("Compound Interest = %f\n", CI);
}
