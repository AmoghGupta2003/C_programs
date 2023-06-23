#include<stdio.h>
#include<limits.h>
int main() {
    int arr[7] = {4,6,0,13,19,3,12};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<=6; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    //max = 19
    for(int i=0; i<=6; i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}