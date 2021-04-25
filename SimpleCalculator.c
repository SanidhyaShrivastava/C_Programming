#include <stdio.h>

void main()
{
	puts("-------------Simple Calculator-------------");
	
	int num1,num2,addition,subtraction,multiplication,division,rem;
	double percentage,partvalue,total;
	
	printf("Enter First Number: ");
	scanf("%d",&num1);
	
	printf("Enter Second Number: ");
	scanf("%d",&num2);
	
	printf("Enter Partial Value: ");
	scanf("%lf",&partvalue);
	
	printf("Enter Total Value: ");
	scanf("%lf",&total);
	
	addition=num1+num2;
	subtraction=num1-num2;
	multiplication=num1*num2;
	division=num1/num2;
	rem=num1%num2;
	percentage=((partvalue/total)*100);
	
	
	puts("-----------Answer----------");
	
	printf("Addition: %d\n",addition);
	printf("Subtraction: %d\n",subtraction);
	printf("Multliplication: %d\n",multiplication);
	printf("Division: %d\n",division);
	printf("Remainder: %d\n",rem);
	printf("Percentage: %lf\n",percentage);
	
}