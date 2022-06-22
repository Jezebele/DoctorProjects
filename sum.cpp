#include<stdio.h>
#include<stdlib.h>

int main ()
{	
	int number, i, sum;
	
	printf("Enter a number : ");
	scanf("%d",&number);
	
	i=1;
	sum =0;
	
	while(i<=number)
	{
		
		if(i != number)
		{
		printf("%3d +",i);	
		}
		
		else 
		{
			printf("%3d",i);
			
		}
		
		sum = sum+i;
		i++;
		
		
	}
	printf(" = %d",sum);
	
	return 0 ;
}
