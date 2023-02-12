#include<stdio.h>
#include<math.h>

void main(){
	int num, result;
	printf("Enter a number: ");
	scanf("%d", &num);
	result = sqrt(num);
	printf("Square Root of %d is %d", num, result);
}
