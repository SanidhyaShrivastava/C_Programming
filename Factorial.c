#include <stdio.h>

void main()
{
	int number;
	printf("Enter the number: ");
	scanf("%d",& number);
	int factorial=1;
	
	puts("==========================");
	if(number>=1){
		for(int i=1; i<=number; i++){
			factorial *=i;
		}
		
		printf("Factorial of %d is %d",number,factorial);
	}
	
	else{
		printf("Invalid Number");
	}
}
	