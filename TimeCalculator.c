#include <stdio.h>
void main()
{
	puts("-------------------Time Calculator-----------------");
	
	int sec, min,hour,day,min_rem,sec_rem,rem;
	printf("Enter the Seconds: ");
	scanf("%d",&sec);
	
	puts("-----------------------------------------------");
	if(sec>=60 && sec<=3600){
		min=sec/60;
		sec_rem=sec%60;
		printf("Result in Minute: %d min and %d sec",min,sec_rem);
	}
	
	else if(sec>=3600 && sec<=86400)
	{
		hour=sec/3600;
		rem=sec%3600;
		min_rem=rem/60;
		printf("Result in Hour: %d hour, %d min",hour,min_rem);
	}
	
	else if(sec>=86400)
	{
		day=sec/86400;
		printf("Result in Days: %d day",day);
	}
	else{
		printf("Result in Seconds: %d sec",sec);
	}
}
	