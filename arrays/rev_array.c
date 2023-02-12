#include<stdio.h>

int main(){

    int num[5], i;

    printf("Enter 5 numbers:\n");

    for(i=0; i<5; ++i){
        scanf("%d", &num[i]);
    }

    printf("Displaying Array:\n");

    for(i=0; i<5; i++){
        printf("%d", num[i]);
    }

    printf("\nDisplaying Array in reverse:\n");

    for(i=5-1; i>=0; i--){
        printf("%d", num[i]);
    }

    return 0;
}