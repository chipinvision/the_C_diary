#include<stdio.h>

int main(){

    int num, cube;

    printf("Number: ");
    scanf("%d", &num);

    cube = num*num*num;
    printf("The cube of %d is %d", num, cube);
    
    return 0;
}