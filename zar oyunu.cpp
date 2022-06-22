#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{	
	int i;
	srand(time(NULL));
	int random;
	int array[i];
	for(i=0; i<2; i++)
	{	
		random = 1 + rand() % 6;
		
		array[i] = random;
		
		printf("\t%d\t",array[i]);	
	}
	
	if(array[0] == 6 && array[1] == 6)
	{
		printf("\n----YOU WÝN----");	
	}
	
	
	return 0;
}
