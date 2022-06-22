#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{	
	int number;
	
	srand(time(NULL));
	int random = rand() % 10;
	
	
	do
	{
	int random = rand() % 10;
	
	printf("Estimate a number : \n\t");
	scanf("%d",&number);
	
	if(random == number)
	{
		printf("you win !!!\n");
		break;
	}
	
	else
	{
		printf("you lose !!!\n");
	}
	
	}while(random != number);
	
	
	
	return 0;
}
