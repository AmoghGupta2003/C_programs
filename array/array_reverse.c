#include<stdio.h>

int main() {
    int arr[5];
    for(int i=0; i<=4; i++){
        printf("Enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The array is: ");
    for(int i=0; i<=4; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The reverse of the array is: ");
    for(int i=4; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}