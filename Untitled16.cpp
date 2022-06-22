#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int x =5;
	int y = 15;
	
	printf("x : %d\n",x);
	printf("y : %d\n",y);
	
	
	int temp ;
	temp =x ;		// temp = 5 
	x = y ;			// x = 10 
	y = temp ; 		// y = 5 
	
	printf("x : %d\n",x);
	printf("y : %d\n",y); 
		
	
	return 0 ;
}
