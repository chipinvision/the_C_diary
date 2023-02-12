#include<stdio.h>

int main(){

    int i,j,r,c,sum;
    sum = 0;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int arr[r][c];

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("Enter Element[%d,%d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            sum = sum+arr[i][j];
        }
    }
    printf("Sum of matrix: %d", sum);

    return 0;
}