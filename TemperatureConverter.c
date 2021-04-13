#include <stdio.h>

void main()
{
	printf("Celcius to Fahrenheit:\n");
	puts("------------------------------");
	
	double celcius;
	printf("Enter the temp.:");
	scanf("%lf",&celcius);
	
	double fahrenheit=celcius*(9/5)+32;
	printf("Converted temp. in Fahrenheit: %lf\n",fahrenheit);
	
	
	
	puts("------------------------------------------");
	printf("Celcius to Kelvin:\n");
	puts("-------------------------------");
	
	double kelvin=celcius+273;
	printf("Converted temp. in Kelvin: %lf",kelvin);
	
	
}