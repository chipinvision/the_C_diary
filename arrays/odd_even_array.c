#include<stdio.h>

int main(){

    int i,j,k,n;
    scanf("%d", &n);
    int arr[n], even[n], odd[n];

    printf("Enter Elements:\n ");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if (arr[i]%2==0){
            even[j] = arr[i];
            j++;
        }else{
            odd[k] = arr[i];
            k++;
        }
    }

    printf("Even Numbers: ");
    for(i=0; i<j; i++){
        printf("%d", even[i]);
    }

    printf("Odd Numbers: ");
    for(i=0; i<k; i++){
        printf("%d", odd[i]);
    }

    return 0;
}