// CONVERING MINUTE TO SECONDS
#include<stdio.h>

int main(){

    int time;

    printf("Enter time in minute: ");
    scanf("%d", &time);
    int seconds = time * 60;

    printf("Time in Seconds: %d",seconds);

    return 0;
}