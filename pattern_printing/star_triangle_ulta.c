// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter number of rows : ");
//     scanf("%d",&n);
//     for(int i = n; i>=1; i--){
//         for(int j = i; j>=1; j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>

int main() {
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int a = n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=a; j++){
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
}