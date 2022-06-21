#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int number;
	int total;
	int sum=0;
	int division;
	
	printf("Enter the limit : ");
	scanf("%d",&total);
	
	division = 0;
	
	while(total>0)
	{
		printf("Enter your number : ");
		scanf("%d",&number);
		
		sum += number;
		
		total--;
		division++;
	}
	
	float mean = sum/division;
		
	printf("the sum is %d\n",sum);
	printf("the arithmetic mean is %f",mean);
	
	return 0;
}
