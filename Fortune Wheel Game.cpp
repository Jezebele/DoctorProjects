#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	char name[30], surname[30];
	int option;
	int number;
	
	
	printf("Welcome To Fortune Wheel...\n\n\n");
	
	printf("Enter Your Name To Progress : ");
	scanf("%s",&name);
	
	printf("\n");
	
	printf("Enter Your Surname To Progress : ");
	scanf("%s",&surname);
	
	printf("\nEnter Your Selection.\n\n[1]_Fortune Wheel\n[2]_Check Your Informations.\n");
	printf("\nChoose An Option :");
	scanf("%d",&option);
	
	if(option == 1)
	{
		printf("\nYou Are Now In Fortune Wheel.\nEnter a number 1 to 9 to continue.\n");
		scanf("%d",&number);
		
		srand(time(NULL));
		
		int random = (rand() % 10) +1 ;
		
		if(number == random)
		{
			printf("Your Number : %d\nRandom Number : %d\n",number,random);
			printf("You Win....\n");
		}
		
		else
		{
			printf("Your Number : %d\nRandom Number : %d\n",number,random);
			printf("You Lose....");
		}
	}
	
	else if(option == 2)
	{
		printf("Your Name : %s\nYour Surname : %s\n",name,surname);
	}
	
	return 0;
}
