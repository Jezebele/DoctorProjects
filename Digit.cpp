#include<stdio.h>
#include<stdlib.h>
int main ()
{	
	int digit;
	int number;
	
	printf("Enter a number : ");	// For positive numbers
	scanf("%d",&number);
	
	digit =0;
	
	while(number>0)
	{
		number=number/10;
		digit++;	
	}
	
	printf("the number of digit is %d ",digit);
	
	return 0;
}
