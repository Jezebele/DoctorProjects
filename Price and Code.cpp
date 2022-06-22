#include<stdio.h>
#include<stdlib.h>
#define tax_of_book 4.0
#define tax_of_food 5.6
#define tax_of_lux 19.6

#define code_of_book 0 
#define code_of_food 1
#define code_of_lux 2

int main ()
{
	int code;
	float price;
	
	printf("***WELCOME TO SECRET SHOP***\n\n");
	printf("Press 0 to get the price of book\nPress 1 to get the price of food\nPress 2 to get the price of lux product\n\n");
	printf("Enter the Code of Product :");
	scanf("%d",&code);
	printf("Enter the Price of Product :");
	scanf("%f",&price);	
	
	switch(code)
	{
		case code_of_book : printf("\nSale price of books : %.2f",price+(price*tax_of_book)/100);
		break;
		
		case code_of_food : printf("\Sale price of foods : %.2f",price+(price*tax_of_food)/100);
		break;
		
		case code_of_lux : printf("\nSale price of lux products : %.2f",price+(price*tax_of_lux)/100);
		break;
		
		default : printf("Unvalid Code Detected...\nTry Again..");
	}
	
	
	return 0;
}
