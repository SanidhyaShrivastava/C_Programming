#include <stdio.h>
#include <math.h>
#define pi 3.1459

void main()
{

	
	puts("-----------------------------");
	printf("Circumference of Circle:\n");
	
	float radius;
	printf("Enter radius of Circle: ");
	scanf("%f",& radius);
	float circumference;
	circumference=2*pi*radius;
	printf("%f\n",circumference);
	
	
	
	
	
	
	
	
	
	
	puts("---------------------------------------");
	printf("Area of Circle:\n");
	
	float area;
	area=pi*radius*radius;
	printf("%f",area);
	
	
	
}