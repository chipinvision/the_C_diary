#include<stdio.h>
void main(){
	double n1, n2;
	char op;
	printf("Enter two numbers: ");
	scanf("%lf %lf", &n1, &n2);
	printf("Enter Operator (+,-,*,/): ");
	scanf("%c", &op);
	
	if(op == '+'){
		printf("Sum: %.1lf + %.1lf", n1,n2, n1+n2);
	}else if(op == '-'){
		printf("Difference: %.1lf - %.1lf", n1,n2, n1-n2);
	}else{
		printf("Invalid Entry!!");
	}
}
