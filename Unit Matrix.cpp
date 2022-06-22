#include<stdio.h>

/*		1	0	0
		0	1	0
		0	0	1
*/

int main()
{
int num1, num2;
int i,j;

for(i=0; i<7; i++)
{
	for(j=0; j<7; j++)
	{
		if(i==j)	printf("1\t");
		else		printf("0\t");
	}
			printf("\n");	
}

	return 0 ;
}
