#include<stdio.h>

int main(){
    
    char name[100];
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Your name is: %s", name);
    
    /*
    char name[50];
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    printf("Name: ");
    puts(name);
    */
    return 0;
}