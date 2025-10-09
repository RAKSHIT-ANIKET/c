//Write a code to find the average of n numbers.
#include <stdio.h>

int main() {
    int n;
    printf("Enter how many numbers you want to find the average of: ");
    scanf("%d", &n);
    float avg=0, number;
    for (int i=1; i<=n; i++){
        printf("Enter number %d: ", i);
        scanf("%f", &number);
        avg += number;
        if (i==n){
            avg/=n;
            printf("The average is: %.2f", avg);
        }
    }
    
    return 0;
}