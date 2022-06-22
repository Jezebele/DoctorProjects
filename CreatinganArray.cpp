#include<stdio.h>

int main ()
{
	int i;
	int numberofelement;
	int array[numberofelement];
	int number;
	
	printf("Enter the number of elements :");
	scanf("%d",&numberofelement);
	
	for(i=0; i<numberofelement; i++)
	{
		printf("\nEnter an element : ");
		scanf("%d",&number);
		array[i] = number;
	}
	
	for(i=0; i<numberofelement; i++)
	{
		printf("\n%d.element : %d",i+1,array[i]);
	}
	
	return 0;
}
