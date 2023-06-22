#include<stdio.h>

int main() {
    float x1,y1;
    printf("Enter first coordinates:",x1,y1);
    scanf("%d %d",&x1,&y1);
    float x2,y2;
    printf("Enter second coordinates:",x2,y2);
    scanf("%d %d",&x2,&y2);
    float x3,y3;
    printf("Enter third coordinates:",x3,y3);
    scanf("%d %d",&x3,&y3);
    float m = (y2-y1)/(x2-x1);
    float n = (y3-y2)/(x3-x2);
    if(m==n){
        printf("Points lie on a straight line");
    }
    else{
        printf("The points does not lie on the straight line");
    }
    return 0;
}