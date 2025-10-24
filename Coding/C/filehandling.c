#include <stdio.h>

int main() {
    char Str[20];
    FILE *fp;
    fp=fopen("newfile.txt", "w+");
    fprintf(fp, "Entering first data in a file:) ");
    printf("Lets enter a name of our choice in File\nEnter a name: ");
    scanf("%s", &Str);
    printf("Let me enter the name.....");
    fprintf(fp, "\n");
    fprintf(fp, Str);
    fclose(fp);
    return 0;
}