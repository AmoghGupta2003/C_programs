#include<stdio.h>

int main() {
    int n , count = 1 , ld , sum; 
    while(count <= 500){
        n = count;
        sum = 0;
        while(n){
            ld = n%10;
            sum = sum + (ld*ld*ld);
            n = n/10;
        }
        if(count==sum){
            printf("%d is an Armstrong number\n",count);
        }
        count++;
    }
    return 0;
}