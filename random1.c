#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{   
    int Rnum,Guess,min,max,status;
    min=25;
    max=75;
    srand(time(0));
    Rnum= (rand()%(max +1 -min)) + min;

    printf("_-_-_-_-_-_-_-_- ~~ WELCOME TO THE GAME ~~ -_-_-_-_-_-_-_-_\n\n");
    printf("You will get 5 chances to Guess a Random Number between [25,75].\n");
    //Random Number Guessing Game 25-75;
    status=0;
    for (int i = 5; i >0; i--)
    {   
        printf("\n\n\n\tChances left: %d\n",i);
        printf("Enter Your Guess: ");
        scanf("%d", &Guess);
        if (Guess==Rnum)
        {
            printf("Congratulations, You Won!!!\n");
            printf("The Number was: %d \n", Rnum);
            status=1;
            break;
        }
        else if (Guess>Rnum)
        {
            printf("Your Guess is Incorrect\n");
            printf("Think of a Smaller Number\n");
        }
        else if (Guess<Rnum)
        {
            printf("Your Guess is Incorrect\n");
            printf("Think of a Larger Number\n");
        }
    }
    if (status==0) printf("You Have Lost the Game.\n The number Was : %d\n", Rnum);
}