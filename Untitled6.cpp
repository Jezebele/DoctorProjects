#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a,b ;
	char operation ;
	printf("Select an operation...\n");
	scanf("%c",&operation);
	
	printf("Insert two numbers...\n");
	scanf("%f%f",&a,&b);
	
	switch(operation)
	{
		case '+' : printf("%f + %f = %f",a,b,a+b);
		break;	
		
		case '-' : printf("%f - %f = %f",a,b,a-b);
		break;
		
		case '/' : printf("%f / %f = %f",a,b,a/b);
		break;
		
		case '*' : printf("%f * %f = %f",a,b,a*b);
		break;
		
		default : printf("invalid progress detected...");
	}

	
	return 0 ;
}
