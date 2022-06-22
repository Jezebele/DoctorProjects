#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float duration;

	
	printf("Enter the duration you want to talk on phone\n");
	scanf("%f",&duration);
	
	printf("the price is %.2f TL you have to pay",(25 + (duration - 3)*8)/100);
	
	return 0;
}
