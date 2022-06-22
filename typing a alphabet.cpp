#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main ()
{
	
	char word[100];
	
	int i=0;
	int j=0;
	
	printf("Type a sentence : \n");
	gets(word);
	
	while(i<strlen(word))
	{	
		j=0;
		
		while(j<=i)
		{
			printf("%c",word[j]);
			j++;	
		}
		printf("\n");
		i++;
	}
	
	
	return 0;
}
