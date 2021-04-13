#include <stdio.h>
#include <math.h>

void main()
{
	printf("Converting Centimeters to Inch\n");
	puts("------------------------------------");
	
	double centimeters;
	printf("Enter the value:");
	scanf("%lf",&centimeters);
	
	double inches=centimeters/2.54;
	printf("Converted value in Inches: %f\n",inches);
	
	
	
	puts("------------------------------------");
	printf("Converting Centimeters to Feets\n");


	double feet=centimeters/30.48;
	printf("Converted value in Feets: %f",feet);
	
	
}