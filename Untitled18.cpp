#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i = 5;
	printf("%d\n",++i);	//++i deðerini artýrýr i ve sonra da artan deðeri döndürür.
	printf("%d\n",i++);	//i++ deðerini artýrýr i, ancak i artýrýlmadan önce tutulan orijinal deðeri döndürür .
	printf("%d\n",i = i+1);		// i += 1 -----> i = i + 1 
	
	return 0 ; 
}
