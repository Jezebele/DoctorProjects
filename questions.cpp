#include<stdio.h>

int main ()
{
	printf("%d", printf("%s","Hello World!"));
	
	printf("%10s\n\n","Hello");
	
	char c = 255;
	c = c + 10;
	printf("%d\n\n",c);
	
	unsigned i =1;
	int j = -4;
	printf("%u\n\n",i+j);
	
	int var = 052;
	printf("%d %o", var, var);
	
	
	return 0;
}
