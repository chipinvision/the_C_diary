#include<stdio.h>

int main(){
	
	int length, width, area;
	
	printf("Enter the length of rectangle: ");
	scanf("%d", &length);
	
	printf("Enter the width of rectangle: ");
	scanf("%d", &width);
	
	area = length*width;
	
	printf("Area of Rectangle: %d", area);
	
	return 0; 
}
