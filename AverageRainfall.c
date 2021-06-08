#include <stdio.h>

void main()
{
	int years,rainfall,total=0;
	printf("Enter no. of years: ");
	scanf("%d",& years);
	puts("=======================================================");
	for(int i=1; i<=years; i++){
		for(int j=1; j<=12; j++){
			printf("Enter inches of Rainfall for the month %d : ",j);
			scanf("%d",& rainfall);
			total +=rainfall;
		}
	}
	
	int totalNoOfMonths= years*12;
	int average= total/totalNoOfMonths;
	puts("=========================================================");
	printf("\n Total Rainfall = %d \n Total No. of Months = %d \n Average = %d",total,totalNoOfMonths,average);
}
	