#include<stdio.h>

int main(){

    int i,mx,mn,n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    mx = arr[0];
    mn = arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
        if(arr[i]<mn){
            mn = arr[i];
        }
    }
    printf("Max: %d", mx);
    printf("\n");
    printf("Min: %d", mn);

    return 0;
}