#include <stdio.h>
#include <math.h>
int main(){
    //3.1 To write a C program to find if a number is negative, positive or zero using if ... else if ... else statement. 
    /*int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    if (x==0) printf("The Number %d is Zero",x);
    else if (x<0) printf("The Number %d is Negative",x);
    else printf("The Number %d is Positive",x);*/

    //3.2  Write a C program to generate the first n terms of the Fibonacci sequence.
    /*int a,b,n;
    a=0;
    b=1;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while(n>=1){
        b=a+b,a=b;
        printf("%d", b);
        n--;
    }*/


//3.3  Write a C program to find the roots of a quadratic equation.
    /*float a,b,c,R1,R2,D;
    printf("Enter  value of a: ");
    scanf("%f", &a );
    printf("Enter  value of b: ");
    scanf("%f", &b );
    printf("Enter  value of c: ");
    scanf("%f", &c );
    D=b*b -4*a*c;
    R1= (b*(-1) +(pow(D,0.5)))/2*a;
    R2= (b*(-1) -(pow(D,0.5)))/2*a;
    printf("%f   %f", R1,R2);*/

//3.4  Write a C program to generate all the prime numbers between 1 and n is a value supplied by the user.
    int x,i;
    printf("Enter a Number: ");
    scanf("%d", &x);

    i=2;
    int num =4;
    while (1){
        while(num=!i)
        {if (num%i==0) {
            print("%d", num);
            ++i;}
    }}
}