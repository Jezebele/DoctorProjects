#include<stdio.h>
#include<stdlib.h>

int main ()
{
	
	int i, number, x;
	
	printf("Enter a number : ");
	scanf("%d",&number);
	
	while(i<=number){
		if(i%17 == 0)
		{
			printf("%4d",i);
		}
		i++;
	}
	
	return 0;
}

