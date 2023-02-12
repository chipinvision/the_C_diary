#include<stdio.h>

int main(){

    int num[10], i, sum = 0;

    printf("Enter Elements: \n");

    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
    }

    /*printf("Displaying Elements: \n");

    for(i=0; i<10; i++){
        printf("%d\n", num[i]);
    }*/

    for(i=0; i<10; i++){
        sum = sum + num[i];
    }

    printf("Sum: %d", sum);

    return 0;
}