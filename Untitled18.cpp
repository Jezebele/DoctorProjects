#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i = 5;
	printf("%d\n",++i);	//++i de�erini art�r�r i ve sonra da artan de�eri d�nd�r�r.
	printf("%d\n",i++);	//i++ de�erini art�r�r i, ancak i art�r�lmadan �nce tutulan orijinal de�eri d�nd�r�r .
	printf("%d\n",i = i+1);		// i += 1 -----> i = i + 1 
	
	return 0 ; 
}
