#include<stdio.h>
#include<stdlib.h>
#include<time.h>	// random fonksiyonunun kütüphanesi

int main ()
{
	
	int i;
	int random;
	srand(time(NULL)) ; // her zaman yazýlmalý
	for(i=0; i<10; i++)
	{
		printf("%3d",-5 + rand() %10);
	}
	
	return 0;
}
