#include<stdio.h>
#include<stdlib.h>

int main ()
{
	
	int num1, num2;
	char op;
	
	 printf("Enter an operator (+,-) : ");
	 scanf("%c",&op);
	 
	 printf("Enter two numbers :\n");
	 scanf("%d %d",&num1,&num2);
	
	if( num1 == 0 || num2 == 0)
	{
		printf("Unvalid Progress For Numbers Entered..\n");
	} 
	
	else if (op == '+')
	{
		printf("1/%d + 1/%d = %d/%d",num1,num2,num1+num2,num1*num2);
	}
	
	else if( op == '-')
	{
		printf("1/%d - 1/%d = %d/%d",num1,num2,num1-num2,num1*num2);

	}
	
	else if ( op != '+' || op != '-')
	{
		printf("Unvalid Operation Sign.\nTry Again...");
	}
	
	return 0 ;
}
