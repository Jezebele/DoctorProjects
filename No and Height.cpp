#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

int main ()
{
	int ID,height,difference,min_height,min_ID;
	
	printf("Student ID :\n");
	scanf("%d",&ID);
	printf("Student Height : \n");
	scanf("%d",&height);

	
	min_ID = ID;
	difference = abs(height-150);
	
	while(ID>0)
	{
		printf("\nStudent ID :");
		scanf("%d",&ID);
		printf("\nStudent Height :");
		scanf("%d",&height);
		
		if(abs(height-150)<difference)
		{
			difference = abs(height-150);
			min_ID = ID;
			min_height = height;
		}
	}
	
	printf("\n%d ID Student has %d height and closer to 150 height",min_ID,min_height);
	return 0 ;
}
