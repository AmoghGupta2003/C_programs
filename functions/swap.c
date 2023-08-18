#include<stdio.h>

int main() {
    int a;
    printf("Enter number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter number b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a becomes: %d\n",a);
    printf("The value of b becomes: %d",b);
    return 0;
}