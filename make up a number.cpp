#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int number, total;
	
	printf("Enter the Limit : ");
	scanf("%d",&total);
	
	printf("You have %d numbers \n",total);
	
	while(total>0)
	{
		printf("Enter the Number : ");
		scanf("%d",&number);
		printf("Your number : %d \n\n",number);
		total--;
	}
	
	
	return 0;
}
