#include <stdio.h>

struct engine{
	char serialNo[5];
	int yearOfManufacture;
	char material[20];
	int quantity;
}part[2];


void main(){
	for(int i=0; i<2; i++){
		puts("============================");
		printf("Enter details for part No.%d",i+1);
		printf("\nEnter the Serial No. :");
		scanf("%s",part[i].serialNo);
		
		printf("\nEnter Year of Manufacture :");
		scanf("%d",&part[i].yearOfManufacture);
		
		printf("\nEnter the material :");
		scanf("%s",part[i].material);
		
		printf("\nEnter quantity of Material :");
		scanf("%d",&part[i].quantity);
	}
	puts("========================================");
	
	for(int i=0; i<2; i++){
		printf("Details of Part No.%d",i+1);
		printf("\nSerial Number: %s\nYear Of Manufacture: %d\nMaterial: %s\nQuantity: %d\n",part[i].serialNo,part[i].yearOfManufacture,part[i].material,part[i].quantity);
		puts("==========================================");
	}
	
	
	
	
}
	