#include <stdio.h>
#include<string.h>

void main()
{
	puts("-----------------Color Mixer------------------");
	
	char color1[20];
	printf("Enter First Color: ");
	scanf("%s",color1);
	
	char color2[20];
	printf("Enter Second Color: ");
	scanf("%s",color2);
	
	puts("----------------------------------------------");              // strcmp is used to compare between strings.
	
	if(strcmp(color1,"red")==0 && strcmp(color2,"blue")==0 || strcmp(color1,"blue")==0 && strcmp(color2,"red")==0)
	{
		printf("Mixed Color is Purple");
	}
	
	else if(strcmp(color1,"red")==0 && strcmp(color2,"yellow")==0 || strcmp(color1,"yellow")==0 && strcmp(color2,"red")==0)
	{
		printf("Mixed Color is Orange");
	}
	
	else if(strcmp(color1,"blue")==0 && strcmp(color2,"yellow")==0 || strcmp(color1,"yellow")==0 && strcmp(color2,"blue")==0)
	{
		printf("Mixed Color is Green");
	}
	
	else
	{
		printf("This is Error");
	}
}
	