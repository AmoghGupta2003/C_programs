#include<stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columns: ");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){ // outer loop -> number of lines to be printed (no. of rows)
        for(int i=1; i<=m; i++){ // inner loop -> number of iterations of the object in each line (no. of columns)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}