#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	
	char name[] = "mustafakemalataturk" ; 
	
	printf("the size of name is %d\n",strlen(name)) ;			// dont read the "\0" at the end of the char
	printf("the size of name is %d",sizeof(name)) ;				// reads the "\0" at the end of the char
	
	return 0 ;
}
