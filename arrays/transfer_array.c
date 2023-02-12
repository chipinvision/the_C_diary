#include<stdio.h>

int main(){

    int arr1[5], arr2[5], i;
    printf("Enter Elements: ");
    for(i=0; i<5; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Copying Data...\n");
    for(i=0; i<5; i++){
        arr2[i] = arr1[i];
    }
    printf("Displaying Elements: ");
    for(i=0; i<5; i++){
        printf("%d", arr2[i]);
    }

    return 0;
}