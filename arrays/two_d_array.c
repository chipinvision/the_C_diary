#include<stdio.h>
int main(){

    int i,j,r,c;
    printf("Enter the size of row:");
    scanf("%d", &r);
    printf("Enter the size of column:");
    scanf("%d", &c);
    int arr[r][c];

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Enter element [%d,%d]:", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}