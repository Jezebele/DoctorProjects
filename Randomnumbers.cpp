#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>

int main ()
{
	srand(time(NULL));
	
	for(int i=0; i<=10; i++)
	{
		printf("%d\n",rand() % 10);
		Sleep(300);
	}
	
	return 0;
}
