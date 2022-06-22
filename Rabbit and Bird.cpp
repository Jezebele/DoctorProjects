#include<stdio.h>
#include<stdlib.h>
#define Vrabbit 0.038
#define Vbird   0.012

int main ()
{
	float rabbit =1042, bird = 2272;
	int year = 0;
	
	while(rabbit<=bird)
	{
		rabbit += rabbit*Vrabbit;
		bird += bird*Vbird;
		year++;
		printf("%d year : bird : %d and rabbit : %d\n",year,int(bird),int(rabbit));
			
	}
	
	printf("\nAfter %d year the number of rabbit exceed the number of bird",year);
	
	return 0 ;
}
