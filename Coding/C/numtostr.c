#include <stdio.h>
char* digit(int n){
    char* arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine",
                 "Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    return arr[n];
}
char* alpha(int n){
    char* arr[]={"Hundred","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    return arr[n];
}
int main() {
    long long int Number=0;
    printf("ENter a Number: ");
    scanf("%lld", &Number);
    int num=Number%10;
    printf("%s", digit(num));
    return 0;
}