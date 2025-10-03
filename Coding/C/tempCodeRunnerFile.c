#include <stdio.h>
int main()
{
    char Name[20],Address[60];
    printf("Enter Your Name=> ");
    fgets(Name, 20, stdin );
    printf("Enter Your Address=>  ");
    fgets(Address, 60, stdin );
    printf("\nYour Name is %s",Name);
    printf("You live in %s",Address);
}
