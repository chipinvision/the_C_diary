#include<stdio.h>
#include<string.h>

int main(){

    char name1[50], name2[50];
    printf("Enter your name: ");
    scanf("%s", name1);
    strcpy(name2,name1);
    printf("The value of name1 is: %s\n", name1);
    printf("The value of name2 is: %s", name2);

    return 0;
}