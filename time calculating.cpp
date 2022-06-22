#include<stdio.h>

int main ()
{
	int time=10553,hour,minutes,seconds;
	
	hour = time/3600;
	minutes = (time%3600)/60;
	seconds = (time%3600)%60;
	
	printf("%d : %d : %d ",hour,minutes,seconds);
	
	
	return 0;
}
