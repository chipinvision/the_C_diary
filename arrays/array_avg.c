#include<stdio.h>

int main(){

    float arr[100], sum = 0.0, avg;
    int i, n;

    scanf("%d", &n);
    
    while(n>100 || n<1){
        printf("Error Occured!!");
        scanf("%d", &n);
    }

    for(i=0; i<n; ++i){
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum/n;
    printf("%.2f", avg);

    return 0;
}