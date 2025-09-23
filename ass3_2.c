#include <stdio.h>
int main(){
    //Fibonicci Series
    int an, first, sec,counter;
    first =0, sec=1;
    printf("Enter n : ");
    scanf("%d", &counter);
    printf("0 1 ");
    while (counter>0)
    {
        an=first+sec;
        printf("%d ", an);
        first = sec;
        sec= an;
        counter-=1;
    }
}


