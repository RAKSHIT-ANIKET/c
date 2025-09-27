#include <stdio.h>
void check(int Tens, int Ones);
void ONES(int var);
void logic(int num, int Ones,int Tens,int Hundread,int Thousand,int TenThousand);
//For 2 digit number logic
void check(int Tens, int Ones)
{   
    int numT=10*Tens + Ones;
    //For Num=(1-10)
    if (numT<11)
    {
        ONES(numT);
    }
    //For Num=(11-19)
    else if (numT<20 && numT>10)
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
    ////For Num=(20-99)
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
//For 1 digit number Logic
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
//For Logic
void logic(int num, int Ones,int Tens,int Hundread,int Thousand,int TenThousand)
{
    if (num<100) check(Tens, Ones);
    else if (num<1000) 
    {
        ONES(Hundread);
        printf(" Hundred ");
        check(Tens, Ones);
    }
    else if (num<100000) //28011  28911
    {
        if (Hundread==0)
        {
            check(TenThousand, Thousand);
            printf(" Thousand ");
            check(Tens, Ones);
        }
        else 
        {
            check(TenThousand, Thousand);
            printf(" Thousand ");
            ONES(Hundread);
            printf(" Hundred ");
            check(Tens, Ones);
        }

    }
}

void RPL()
{
    int num=0,Ones=0,Tens=0,Hundread=0,Thousand=0,TenThousand=0;
    printf("Enter any Number upto 5 digit: ");
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
    printf("%d\n",num);
    logic(num,Ones,Tens,Hundread,Thousand,TenThousand);
}  
    
int main()
{
    while (1)
    {
        int I;
        RPL();
        printf("\nEnter 1 to Stop, anything else to continue: ");
        scanf("%d", &I);
        if (I==1) break;
    }
    
}