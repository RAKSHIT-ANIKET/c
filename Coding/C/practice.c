#include <stdio.h>
#include <math.h>
/*//Write a program using sqrt(), pow(), and abs() functions.
int main() {
    float num=0;
    printf("Enter a number: ");
    scanf("%f", &num);
    if (num>0){
        printf("Square root of number is %.2f\n", sqrt(num));
    } else printf("Square root of number does not exists\n");
    printf("Square of number is %.2f\n", pow(num,2));
    printf("Modulas of number is %d\n", abs(num));
    return 0;
}
long long int factorial(int n){
    long long int a=1;
    for (int i=1; i<=n; i++){
        a*=i;
    }
    return a;
}
int main(void){
    int num=0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("The factorial of %d is : %lld",num,factorial(num));
}
//Write a function that checks if a number is prime.
void isprime(int n);
int main(){
    int num;
    printf("Enter a Num: ");
    scanf("%d",&num);
    isprime(num);
}
void isprime(int n){
    int checker=0;
    for (int i=1; i<=n; i++) if(n%i==0) checker++;
    if (checker>2) printf("The number %d is not a prime number",n);
    else printf("The number %d is a prime number",n);
}*/
//Write a program with a function to reverse a given integer.
int reverse(int n){
    int rev=0;
    for (int i=0; n!=0;++i){
        rev+=n%10;
        n/=10;
        rev*=10;
    }
    rev/=10;
    return rev;
}
int main(){
    printf("%d",reverse(2345));
}