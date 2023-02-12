#include<stdio.h>
#include<string.h>

int main(){

    char str1[50], str2[50];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    int compare = strcmp(str1,str2);
    
    if(compare == 0){
		printf("Both Strings are equal\n");
	}else if(compare > 0){
		printf("str1 is greater than str2\n");
	}else if(compare < 0){
		printf("str1 is lower than str2\n");
	}
    
    printf("ASCII value of str1: %d\n", str1);
    printf("ASCII value of str2: %d\n", str2);
    printf("Value after Comparision: %d", compare);

    return 0;
}