#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	float a,b,c;
	
	puts("Roots of Qudratic Equation:");
	
	printf("Enter a=");
	scanf("%f",&a);
	
	
	printf("Enter b=");
	scanf("%f",&b);
	
	printf("Enter c=");
	scanf("%f",&c);
	
	float discriminant=sqrt(b*b-4*a*c);
	float root1=(-b-discriminant)/2*a;
	float root2=(-b+discriminant)/2*a;
	
	printf("root1: %f\n",root1);
	printf("root2: %f\n",root2);

	
}
