//Write a program to read an integer number and print the reverse of that number 
#include <stdio.h>
int reverse(int n, int rev)
{
    if (n == 0)
        return rev;
    rev = rev * 10 + n % 10;
    return reverse(n / 10, rev);
}
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Reverse is not defined for negative numbers.\n");
    else
        printf("Reverse of %d is %d\n", num, reverse(num, 0));
    return 0;
}