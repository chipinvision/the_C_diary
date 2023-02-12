#include<stdio.h>

int main(){

    int num, sqr;

    printf("Number: ");
    scanf("%d", &num);

    sqr = num*num;
    printf("The square of %d is: %d", num, sqr);

    return 0;
}