#include <stdio.h>
int main(){
    int num=1;
    int i;
    printf("Enter Number: ");
    scanf("%d",&i);
    while(i>0)
    {   
        num*=i;
        i-=1;
    }
    printf("The Value of factorial is %d",num);
}