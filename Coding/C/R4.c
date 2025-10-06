//Write a program to calculate sum of first n natural numbers using recursive function
#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 1)
        printf("Please enter a positive integer greater than 0.\n");
    else
        printf("Sum of first %d natural numbers is %d\n", num, sum(num));
    return 0;
}
