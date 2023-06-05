#include<stdio.h>

int main() {
    int n;
    printf("Enter the number: %d",n);
    scanf("%d",&n);
    int r = 0;
    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n = n/10;
    }
    printf("The reverse of the given number is: %d",r);
    return 0;
}