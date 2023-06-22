#include<stdio.h>

int main() {
    int a,b,c;
    printf("Enter the value of a: ",a);
    scanf("%d",&a);
    printf("Enter the value of b: ",b);
    scanf("%d",&b);
    printf("Enter the value of c: ",c);
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is the greatest number");
    }
    if(b>a && b>c){
        printf("b is the greatest number");
    }
    if(c>a && c>b){
        printf("c is the greatest number");
    }
    return 0;
}