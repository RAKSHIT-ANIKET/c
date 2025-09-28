// Make a rand number 1,2,3 as Stone Paper Scissor
// Take input from user
// compare it and show results
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{   
    for (int i=5; i>=1; i--)
    {
        srand(time(NULL));
        int Rnum1,Rnum2;
        Rnum1=(rand()%3)+1;
        Rnum2=(rand()%3)+1;
        printf("%d  %d\n", Rnum1,Rnum2);

    }
}