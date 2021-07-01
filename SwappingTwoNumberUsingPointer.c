#include <stdio.h>
void swap(int*, int*);
void main()
{
	int a,b;
	printf("Enter value of a = ");
	scanf("%d",&a);
	printf("Enter value of b = ");
	scanf("%d",&b);
	puts("===========================================");
	printf("Value before swapping: \n a = %d\n b = %d\n",a,b);
	puts("===========================================");
	swap(&a,&b);
	printf("Value after swapping: \n a = %d\n b = %d\n",a,b);
	
	
	
}
void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
	