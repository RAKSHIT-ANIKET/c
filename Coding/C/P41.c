#include <stdio.h>
int main() {
    for (int i=0; i<7; i++){
        for (int j=1; j<=7-i; j++){
            printf(" ");
        }
        for (int j=1; j<=7; j++){
            printf("*");
        }
        printf("\n");
    }    
}
