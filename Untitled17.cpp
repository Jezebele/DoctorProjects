#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main ()
{
	char name1[20] = "Ali";
	char name2[20] = "Ahmet";
	char temp[20];
	
	printf("name1 : %s\n",name1);
	printf("name2 : %s\n",name2);
	
	
	strcpy(temp,name1);
	strcpy(name1,name2);
	strcpy(name2,temp);
	
	printf("name1 : %s\n",name1);
	printf("name2 : %s\n",name2);
	
	
	
	
	return 0 ;
}
