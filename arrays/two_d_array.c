#include<stdio.h>

void main(){
	
	int i,j,n1,n2;
	scanf("%d", &n1);
	scanf("%d", &n2);
	int arr[n1][n2];
	
	for(i=0; i<n1; i++){
		for(j=0; j<n2; j++){
			printf("Enter Elements for arr[%d][%d]: ", i,j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Displaying Array: ");
	for(i=0; i<n1; i++){
		//printf("\n");
		for(j=0; j<n2; j++){
			printf("%d\n", arr[i][j]);
		}
	}

}
