#include<stdio.h>
#include<stdlib.h>

int main ()
{
	
	int number;
	printf("Enter a number : ");
	scanf("%d",&number);
	
	for (int i=1; i<=number; i++)
	{
	if(i%17==0){
	
	printf("%4d",i);
		
			if(i%10==0)
			{
				printf("\n");
			}
		}
	}
	
	
	
	return 0;
}
