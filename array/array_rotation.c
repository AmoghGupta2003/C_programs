#include<stdio.h>
void reverse(int arr[],int a , int b){
    for(int i=a , j=b ; i<j ; i++ , j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main() {
    int arr[100];
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter the value of rotation: ");
    scanf("%d",&k);
    if(k>n){
        k = k % n;
    }
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i = 0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}