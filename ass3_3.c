#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,R1,R2,D;
    printf("Enter  value of a: ");
    scanf("%f", &a );
    printf("Enter  value of b: ");
    scanf("%f", &b );
    printf("Enter  value of c: ");
    scanf("%f", &c );
    D=b*b -4*a*c;
    if (D>=0)
    {
        R1= (b*(-1) +(pow(D,0.5)))/2*a;
        R2= (b*(-1) -(pow(D,0.5)))/2*a;
        printf("Roots of QE are %.3f and %.3f", R1,R2);
    }
    else printf("Root does not exists");  
}

