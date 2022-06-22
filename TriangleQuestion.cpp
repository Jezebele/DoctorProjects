#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int angle1, angle2, angle3;
	
	printf("Enter the angle of a triangle :\n");
	scanf("%d %d %d",&angle1,&angle2,&angle3);
	printf("Angle 1 : %d\nAngle 2 : %d\nAngle 3 : %d\n",angle1,angle2,angle3);
	
	
	if(angle1 + angle2 + angle3 == 180)
	{
		printf("These angles are compatible to create a triangle\n\n");
		
		if(angle1==angle2)
		{
			printf("two angles are equal and this triangle is isoscles\n");
		}
		
		else if(angle1==angle3)
		{
			printf("two angles are equal and this triangle is isoscles\n");
		}
		
		else if(angle2==angle3)
		{
			printf("two angles are equal and this triangle is isoscles\n");
		}
		
		else if(angle1==angle2==angle3)
		{
			printf("the triangle is equilateral\n");
		}
		
		else
		{
			printf("the triangle is scalene\n");
		}
	}
	
	else 
	{
	printf("Angles are not convenient to make up a triangle");
	}
	
	
	
	return 0 ;
}
