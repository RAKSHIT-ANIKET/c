#include <stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int i=1;i<=n; i++){
        printf("\n");
        for (int j=1;j<=i; j++){
            printf("*");
        }
    }
    printf("\n\n\n");
    for (int i = 1; i <=n; i++)
   {
    printf("\n");
    for (int j = 1; j <= i; j++)
    {
        if (i%2==0)
        {
            printf("%c ", j+64);
        }
        else
        {
            printf("%d ", j);
        }
    }
   }
   
}


/*
        

    */