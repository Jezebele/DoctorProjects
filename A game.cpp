#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	int random;
	int number;
	int life =3;
	srand(time(NULL));
	random = rand() % 10;
	
	printf("Your Starting Life is 3...\n\n");
	
	while(life>0)
	{
		printf("Enter a number (0 - 9) : \n");
		scanf("%d",&number);
		
		random = rand() % 10;
		
		if(random == number)
		{
			printf("You Win !!!\n");
			life++;
			printf("Your remaining life : %d\n\n",life);
			
			if(life == 0)
			{
				printf("YOU DEAD...");
			}
		}
		
		else
		{
			printf("You Lose !!!\n");
			life--;
			printf("Your remaining life : %d\n\n",life);
			
			if(life == 0)
			{
				printf("YOU DEAD...");
			}
		}
	}
	
	return 0;
}
