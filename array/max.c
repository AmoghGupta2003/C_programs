#include<stdio.h>
#include<limits.h>

int main() {
    int arr[7] = {10,12,5,9,19,3,4};
    int max = INT_MIN;
    for(int i = 0; i<=6; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}