// CONVERTING HOUR TO SECOND
#include<stdio.h>

int main(){

    int hour;

    printf("Enter time in hour: ");
    scanf("%d", &hour);

    int seconds = hour * 3600;

    printf("Time in seconds: %d", seconds);
    return 0;
}