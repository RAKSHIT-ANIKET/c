#include <stdio.h>
int main(){
    float a,l,b,h;
    printf("Enter Side of cube in meters: ");
    scanf("%f", &a);
    printf("Enter Length of cuboid in meters: ");
    scanf("%f", &l);
    printf("Enter Breath of cuboid in meters: ");
    scanf("%f", &b);
    printf("Enter Height of cuboid in meters: ");
    scanf("%f", &h);
    printf("Volume of cube is: %.2f m^3", a*a*a);
    printf("Volume of Cuboid is: %.2f m^3", l*b*h);