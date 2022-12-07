 #include <stdio.h> 


int main() 
{ 
	int order,i, j, flag = 1; 
printf("Enter the order of Square Matrix: ");
scanf("%d",&order);

	int a[order][order]; 

	printf("Enter the elements of 3*3 matrix\n"); 
	for (i = 0; i < order; i++) 
		for (j = 0; j < order; j++) 
			scanf("%d", &a[i][j]); 
	
	for (i = 0; i < order; i++) 
		for (j = 0; j < order; j++) 
			if (i > j && a[i][j] != 0) 
				flag = 0; 
	
	if (flag == 1) 
		printf("Given matrix is an upper triangular matrix\n"); 
	else
		printf("Given matrix is not an upper triangular matrix\n"); 
	
	return 0; 
}