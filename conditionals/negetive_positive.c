// CHECK WHETHER NUMBER IS NEGETVE OR POSITIVE
#include<stdio.h>

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0){
        if (num == 0){
            printf("Number is positive");
        }else{
            printf("Number is negetive");
        }
    }else{
        printf("Number is positive.");
    }

    return 0;
}