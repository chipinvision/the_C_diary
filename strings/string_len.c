#include<stdio.h>
#include<string.h>

int main(){

    char name[100];
    printf("Enter a String: ");
    scanf("%s", name);
    int length = strlen(name);
    printf("Length: %d", length);

    return 0;
}