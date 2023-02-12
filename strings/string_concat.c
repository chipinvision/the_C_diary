#include<stdio.h>
#include<string.h>
int main(){

    char fname[50], lname[50];
    printf("Enter First Name: ");
    scanf("%s", fname);
    printf("Enter Second Name: ");
    scanf("%s", lname);
    printf("String after concatenation: %s", strcat(fname,lname));

    return 0;
}