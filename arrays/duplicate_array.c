#include<stdio.h>

int main(){

    int i,j,n,count;
    count = 0;
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=1; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    printf("Duplicate Items: %d", count);

    return 0;
}