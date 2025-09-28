#include <stdio.h>
int main()
{
    int num, counter;
    printf("Enter a Number: ");
    scanf("%d", &num);
    for (int cnum=1; cnum<=num; ++cnum)
    {
        counter=0;
        for (int i=1; i<=cnum; ++i)
        {
            if (cnum%i==0) counter++;
        }
        if (counter==2) printf(" %d ", cnum);

    }
}


