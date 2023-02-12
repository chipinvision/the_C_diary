// GREATEST AMONG TWO NUMBERS USING TERNARY OPERATOR
#include<stdio.h>

int main(){
	
	int n1,n2;
	
	printf("Enter first numbrs: ");
	scanf("%d", &n1);
	printf("Enter second numbers: ");
	scanf("%d", &n2);
	
	(n1>n2) ? printf("Greater") : printf("Not Greater");
	
	return 0;
}
