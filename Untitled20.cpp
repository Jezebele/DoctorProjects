#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void square(int *x2,int *a )
{
	*x2 = *a**a;
	
}


int main ()
{
	
	int x = 4,squared;
	int x2 ;
	
	square(&x2,&x);
	printf("%d",x2);
	
	return 0 ;
}
