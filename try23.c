#include <stdio.h>
void check(int Ones, int Tens);
void ONES(int var);
void check(int Ones, int Tens)
{   
    int numT=10*Tens + Ones;
    if (numT<20 && numT>10)
    {
        switch (numT)
        {
        case 11:
            printf("Eleven");
            break;
        case 12:
            printf("Twelve");
            break;
        case 13:
            printf("Thirteen");
            break;
        case 14:
            printf("Fourteen");
            break;
        case 15:
            printf("Fifteen");
            break;
        case 16:
            printf("Sixteen");
            break;
        case 17:
            printf("Seventeen");
            break;
        case 18:
            printf("Eighteen");
            break;
        case 19:
            printf("Nineteen");
            break;      
        default:
            break;
        }
    }
    else if (numT<11)
    {
        ONES(numT);
    }
    else if (numT>19)
    {
        switch (Tens)
        {
        case 2:
            printf(" Twenty ");
            ONES(Ones);
            break;
        case 3:
            printf(" Thirty ");
            ONES(Ones);
            break;
        case 4:
            printf(" Fourty ");
            ONES(Ones);
            break;
        case 5:
            printf(" Fifty ");
            ONES(Ones);
            break;
        case 6:
            printf(" Sixty ");
            ONES(Ones);
            break;
        case 7:
            printf(" Seventy ");
            ONES(Ones);
            break;
        case 8:
            printf(" Eighty ");
            ONES(Ones);
            break;
        case 9:
            printf(" Ninty ");
            ONES(Ones);
            break;
        
        default:
            break;
        }        
    }
}
void ONES(int var)
{
    switch (var)
       {
       case 1:
           printf("One");
           break;
       case 2:
           printf("Two");
           break;
       case 3:
           printf("Three");
           break;
       case 4:
           printf("Four");
           break;
       case 5:
           printf("Five");
           break;
       case 6:
           printf("Six");
           break;
       case 7:
           printf("Seven");
           break;
       case 8:
           printf("Eight");
           break;
       case 9:
           printf("Nine");
           break;
       case 10:
           printf("Ten");
           break;
       
       default:
           break;
       }
    }

int main()
{
    int num,Ones,Tens,Hundread,Thousand,TenThousand;
    printf("Enter any Five digit number: ");
    scanf("%d", &num);
    //13013
    Ones=num%10;
    num/=10;
    Tens=num%10;
    num/=10;
    Hundread=num%10;
    num/=10;
    Thousand=num%10;
    num/=10;
    TenThousand=num%10;
    num/=10;
    num=TenThousand*10000 + 1000*Thousand+ 100*Hundread + 10*Tens+Ones;
    printf("%d %d %d %d %d %d \n",num,Ones,Tens,Hundread,Thousand,TenThousand);

    if (Hundread==0)
    {
        check(Thousand, TenThousand);
        printf(" Thousands ");
        check(Hundread, 0);
        check(Ones, Tens);
    }
    else{
    check(Thousand, TenThousand);
    printf(" Thousands ");
    check(Hundread, 0);
    printf(" Hundred ");
    check(Ones, Tens);
}
    
    
    
}