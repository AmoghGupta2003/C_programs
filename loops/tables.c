#include<stdio.h>

int main() {
    int n;
    printf("Enter whose table you want to print:",n);
    scanf("%d",&n);
    for(int i=n; i<=n*10; i=i+n){
        printf("%d ",i);
    }
    return 0;
}