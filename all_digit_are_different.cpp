#include<stdio.h>

int main ()
{
	int counter = 0 ;
	int i ;
	int a,b,c;		// abc is 3-digit number.
	
	for(i=100; i<=999; i++)
	{
		a = i/100;
		b= (i/10)%10;
		c= i%10;
		
		if(a != b && a !=c && b != c)
		{
			counter++;
		}
		
	}
	
	printf("there are %d numbers that have different digit that are different from each other ",counter);
	
	
	return 0;
}
