#include <stdio.h>
int main() {
    int array[5]={ 1, 2, 3,4,5};
    printf("The elements of the array are: \n");
    for (int i=0; i<5; i++){
        printf("%d ", array[i]);
    }
    printf("\nThe square of the elements of the array are: \n");
    for (int i=0; i<5; i++){
        printf("%d ", array[i]*array[i]);
    }
}