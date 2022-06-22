#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	
	int n,i;
	float x, series=0;
	char condition;
	
	do
	{
	printf("Welcome...\nPRess e or E to activate the program later entering numbers\n");
	printf("Enter a positive number : \nPositive integer: ");
	scanf("%d",&n);
	
	printf("Enter a real number :\nReal Number :");
	scanf("%f %c",&x,&condition);
		
	for(i=1; i<=2*n-1; i+=2)
	{
		series += i/pow(x,i+1);
	}
	
	printf("The sum of series : %f\n\n\n",series);
	
;

	
	}while(condition == 'e' || condition == 'E');
	
	printf("Nice to see you.\nGoodBye...");
	
	return 0;
}
