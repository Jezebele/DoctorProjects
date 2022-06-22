#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char sentence[100];
	int i;
	
	printf("Type a sentence :\n");
	gets(sentence);
	
	for(i=0; sentence[i]; i++)
	{
		printf("%c\n",sentence[i]); 
	}
	
	return 0;
}
