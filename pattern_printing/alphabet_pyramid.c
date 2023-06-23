#include<stdio.h>

int main() {
    int n;
    printf("Enter no. of rows: ");
    scanf("%d",&n);
    int nsp = n-1;
    for(int i=1; i<=n; i++){
        int a = i-1;
        for(int q=1; q<=nsp; q++){
            printf("  ");
        }
        nsp--;
        for(int j=1; j<=i; j++){
            int d = j + 64;
            char ch = (char)d;
            printf("%c ",(char)ch);
        }
        for(int k=1; k<=i-1; k++){
            int m = a + 64;
            char ch = (char)m;
            printf("%c ",(char)ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}