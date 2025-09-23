#include <stdio.h>
int main(){
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    if (x==0) printf("The Number %d is Zero",x);
    else if (x<0) printf("The Number %d is Negative",x);
    else printf("The Number %d is Positive",x);
}
    

