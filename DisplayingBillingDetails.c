#include <stdio.h>

void main()
{
    puts("------------Electricity Bill Details------------");
    
    char name[50];
    printf("Enter your Name: ");
    scanf("%[^\n]%*c",name);
    
    char addr[90];
    printf("Enter your Address: ");
    scanf("%[^\n]%*c",addr);
    
    int customerID;
    printf("Enter your customer ID: ");
    scanf("%d",&customerID);
    
    int pincode;
    printf("Enter your Pincode: ");
    scanf("%d",&pincode);
    
    double billAmt;
    printf("Enter your Bill Amount: ");
    scanf("%lf",&billAmt);
    
    char billMonth[20];
    printf("Enter your Billing Month: ");
    scanf("%s",billMonth);
    
    puts("-----------------------------------------------");
    
    printf("Name: %s\n",name);
    printf("Address: %s\n",addr);
    printf("Customer ID: %d\n",customerID);
    printf("Pincode: %d\n",pincode);
    printf("Bill Amount: %.2lf\n",billAmt);
    printf("Billing Month: %s\n",billMonth);
    
    
}