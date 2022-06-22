#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int is_prime(int number)
{	
	int i ;
	
	for(i=2; i<number; i++)
	{
		if(number % i == 0)
		{
			return 0 ;
		}
	}
	
	return 1 ;
}


int main()
{
	int n ; 
	printf("Enter a number : ");
	scanf("%d",&n);
	
	if(is_prime(n)==0)
	{
		printf("%d is not a prime number",n);
	}
	
	else
	{
		printf("%d is a prime number",n);
	}
	
	return 0 ;
}
