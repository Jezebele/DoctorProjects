#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char word[100];
	int i=0;
	int counter=0;
	
	printf("Type a sentence :\n");
	gets(word);
	
	while(word[i])
	{
		if(word[i] == 32)
		{
			counter++;	
		}
		i++;
	}
	
	printf("The number of words : %d",counter +1);
	
	return 0;
}
