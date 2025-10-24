//6.3 Write a C Program to Find Union and Intersection of Two Arrays
#include <stdio.h>
int main() {
    int array1[]={1,2,3,4,5};
    int array2[]={6,7,8,4,5};
    printf("The elements of the first array are: \n");
    for (int i=0; i<5; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");
    printf("The elements of the second array are: \n");
    for (int i=0; i<5; i++){
        printf("%d ", array2[i]);
    }
    printf("\n");
    printf("The intersection of the two arrays are: \n");
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            if (array1[i]==array2[j]){
                printf("%d ", array1[i]);}}}
    printf("\nThe union of the two arrays are: \n");
    for (int i=0; i<5; i++){
        printf("%d ", array1[i]);
    }
    
    for (int i=0; i<5; i++){
        int found = 0;
        for (int j=0; j<5; j++){
            if (array2[i]==array1[j]){
                found = 1;
                break;}}
        if (!found) printf("%d ", array2[i]);}}