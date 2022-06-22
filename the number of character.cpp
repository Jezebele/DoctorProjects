#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char statement[100];
	int i=0;
	
	printf("Type a sentence : \n");
	gets(statement);
	
	while(statement[i])
	{
		i++;
	}
	printf("the number of character in this sentence : %d",i);
	
	return 0;
}
