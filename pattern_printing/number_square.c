#include<stdio.h>

int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}