#include<stdio.h>
#include<stdlib.h>

int main()
{
	int array[5];
    int i=0;
	int sum = 0;
	
	while(i<5){
		
		printf("Enter a number :\n");
		scanf("%d",&array[i]);
		
		printf("your value is %d\n",array[i]);
		i++;
	}	
	for(i=0; i<5; i++){
		sum =sum + array[i];
	}    
	printf("The sum is %d",sum);
	return 0 ;
}
