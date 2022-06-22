#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int a, b;
	
	printf("Enter a number : \n");
	scanf("%d %d",&a,&b);
	printf("Number 1 : %d\nNumber 2 : %d\n",a,b); 
	
	if(a*b<0){
		printf(">>sign(%d*%d) = %d --> -1",a,b,a*b);
	}
	if(a*b>0){
		printf(">>sign(%d*%d) = %d --> +1",a,b,a*b);
	}
	else{
		printf(">>sign(%d*%d) = %d -->  0",a,b,a*b);
	}
	
	return 0;
}
