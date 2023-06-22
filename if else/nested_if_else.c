#include<stdio.h>

int main() {
    int Ram,Shyam,Ajay;
    printf("Enter the age of Ram: ",Ram);
    scanf("%d",&Ram);
    printf("Enter the age of Shyam: ",Shyam);
    scanf("%d",&Shyam);
    printf("Enter the age of Ajay: ",Ajay);
    scanf("%d",&Ajay);
    if(Ram<Shyam){ //Shyam is out
        if(Ram<Ajay){
            printf("Ram is youngest");
        }
        else{
            printf("Ajay is youngest");
        }
    }
    else{
        if(Shyam<Ajay){
            printf("Shyam is youngest");
        }
        else{
            printf("Ajay is youngest");
        }
    }
    return 0;
}