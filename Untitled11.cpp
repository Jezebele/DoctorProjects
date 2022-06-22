#include<stdio.h>
#include<stdlib.h>

int main()
{
	int mat1[2][2] = { {1,2}, {3,4} }; 
	
	int mat2[2][2] = { {5,6}, {7,8} };
	
	int sum[2][2] ; 
	int i,j ; 
	
	for(i=0; i<2; i++)					// First Step is Assigment
	{
		for(j=0; j<2; j++)
		{
			sum[i][j] = mat1[i][j] + mat2[i][j]; 
		}
	}
	
	for(i=0; i<2; i++)			      // Second Step is Print
	{
		for(j=0; j<2; j++)
		{
			printf("%4d",sum[i][j]);
		}
		printf("\n");
	}
	return 0 ;
}
