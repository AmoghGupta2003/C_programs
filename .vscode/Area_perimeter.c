#include<stdio.h>

int main() {
    int l;
    int b;
    printf("Enter the length of rectangle: ",l);
    scanf("%d",&l);
    printf("Enter the length of rectangle:2 ",b);
    scanf("%d",&b);
    int A = l * b;
    int P = 2*(l + b);
    if(A>P){
        printf("The area is greater than perimeter");
    }
    if(A<P){
        printf("The area is less than perimeter");
    }
    if(A==P){
        printf("The area is equal to the perimeter");
    }
    return 0;
}