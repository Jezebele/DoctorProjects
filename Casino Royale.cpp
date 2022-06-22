#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	int number;
	int random ;
	srand(time(NULL));
	int count = 0;
	random = rand() % 10;
	
	
	while(count < 3){
		
	printf("Enter a number(0 - 9 ) : \n");
	scanf("%d",&number);
	
	if(random == number)
	{
		printf("...ADAMSIN...\n\n");
		count++;
	}
	else
	{
		printf("...OROSPU EVLADI...\n\n");
		count++;
		
	}
		
}
	
	return 0;
}
