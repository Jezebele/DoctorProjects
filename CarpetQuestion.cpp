#include<stdio.h>

int main ()
{
	char codes;
	float area, price;
	
	printf("Enter the Type of Your Carpet(T B or S) : \n");
	scanf("%c",&codes);
	
	printf("Enter the Area of Your Carpet : \n");
	scanf("%f",&area);
	
	if(codes=='T'){
		
		price = area*18;
	}
	
	else if(codes=='B'){
		
		price = area*17;
	}
	
	else if(codes=='S'){
		
		price = area*19;
	}
	
	else {
		printf("Unvalid Code Detected...");
	}
	
	printf("The price is %.2f",price);
	
	return 0;
}
