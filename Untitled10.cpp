#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int matrice[10][10] ;
	
	int i ,j;
	
	for(i=0; i<10; i++)							// First Step is Assignment
	{
	
		for(j=0; j<10; j++)
		{
			if(i==j)
			{
				matrice[i][j] = 1 ;
			}
			
			else 
			{
				matrice[i][j] = 0 ;
			}
		}
	
	
	}
	
	for(i=0; i<10; i++)							// Second Step is Print
	{
		
		for(j=0; j<10; j++)
		{
			printf("%4d",matrice[i][j]);
		}
		
		printf("\n");
	}
	
	return 0 ;
}
