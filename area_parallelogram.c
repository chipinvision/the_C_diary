#include<stdio.h>

int main(){
	
	int base, vheight, area;
	
	printf("Enter the base of parallelogram: ");
	scanf("%d", &base);
	
	printf("Enter the vertical height of parallelogram: ");
	scanf("%d", &vheight);
	
	area = base*vheight;
	
	printf("Area of parallelogram: %d", area);
	
	return 0;
}
