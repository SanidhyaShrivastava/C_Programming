#include <stdio.h>
float calculatePrice(float, float, float);
void main()
{
	float price, comm_rate, disc_rate;
	printf("Enter product Price: ");
	scanf("%f",&price);
	printf("\nEnter product Commision Rate: ");
	scanf("%f",&comm_rate);
	printf("\nEnter product Discount Rate: ");
	scanf("%f",&disc_rate);
	puts("==================================");
	
	float finalOutput= calculatePrice(price,comm_rate,disc_rate);
	printf("\nFinal Price = %f", finalOutput);
	
}


float calculatePrice(float price, float comm_rate, float disc_rate){
	float comm_amount=(comm_rate/100)*price;
	
	float disc_amount=(disc_rate/100)*price;
	
	float finalPrice=price+comm_amount+disc_amount;
	return finalPrice;
}
	