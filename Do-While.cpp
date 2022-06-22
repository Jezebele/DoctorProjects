#include<stdio.h>

int main ()
{
	int number;
	int sum = 0;
	
	do
	{
	
	printf("Enter a number : \n");
	scanf("%d",&number);
	
	sum = sum + number;
	
		
	}while(number != 0);
	
	printf("The Result is %d",sum);
	
	return 0;
}
