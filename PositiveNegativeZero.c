#include <stdio.h>

void main()
{
	puts("----------------+ve,-ve or 0-----------------");
	
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	puts("----------------------------------------------");
	
	if(num>0)
	{
		printf("Number is Positive.");
	}
	
	else if(num<0)
	{
		printf("Number is Negative.");
	}
	
	else
	{
		printf("Number is Zero.");
	}
}	
	