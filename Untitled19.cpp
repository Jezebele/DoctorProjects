#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{   
    int i,j;
	int matrix[4][3] = {{1,2,3},
						 {4,5,6},
						 {7,8,9},
						 {5,9,8}
						 };			
	
	for(i=0; i<4; i++)
	{
		
		for(j=0; j<3; j++)
		{
			printf("%4d",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("this is your matrix you created...\n");
	
	
	
	
	
	
	return 0 ;
}
