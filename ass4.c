#include <stdio.h>
int main(){
    /*int n;
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
   }*/
    int n, i, j, space;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper half
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}   

