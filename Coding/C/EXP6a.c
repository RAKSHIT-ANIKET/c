//6.1 Write a program in C to read n number of values in an array and display them in reverse order. 
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf(" %d", &array[i]);
    }
    //Print reverse order of array
    for (int i=n; i>0; i--){
        printf("%d  ", array[i-1]);
    }
    return 0;
}