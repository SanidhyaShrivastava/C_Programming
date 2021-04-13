#include <stdio.h>

void main()
{
	puts("----------Range between two Numbers-----------");
	
	printf("Enter smaller number: ");
	int smallNum;
	scanf("%d",&smallNum);
	
	printf("Enter large number: ");
	int largeNum;
	scanf("%d",&largeNum);
	
	listNumbers(smallNum,largeNum,1);
	
	
}




void listNumbers(int small, int large, int k)
{
	printf("Step[%d]: %d\n",k,small);
	if(small<large)
	listNumbers(small+1,large,k+1);
}
	