#include<stdio.h>
#include<stdlib.h>

void power(int x, int y,int *result)
{
	int i;
	*result = 1;
	for(i=0; i<y; i++)
	{
		*result = *result*x;
	}
	
}

int main ()
{
	int x=4, y=5;
	int result;

	power(x,y,&result);
	printf("%d",result);
	
	return 0 ;
}
