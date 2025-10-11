#include <stdio.h>
long long f(int n);

int main() {
    int num;
    printf("Enter a positive integer to find factorial: ");
    scanf("%d", &num);
    printf("%d \n", f(num));
    return 0;
}

long long f(int n){
    if (n==1) return 1;
    else {
        return n*f(n-1);
    }
}