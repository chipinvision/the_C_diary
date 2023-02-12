// C PROGRAM TO FIND THE FACTORIAL OF A NUMBER

#include<stdio.h>

int main(){

    int i, fact = 1, num;
    printf("Number: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        fact = fact*i;
    }
    printf("Fatorial of %d: %d", num, fact);

    return 0;
}
