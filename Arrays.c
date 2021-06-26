#include <stdio.h>

void main()
{
	int stud;
	int marks[12];
	int id[12];
	
	for(int i=0; i<10; i++){
		int total=0;
		printf("\nEnter no. of students present in classroom %d : ",i+1);
		scanf("%d",&stud);
		
		for(int j=0; j<stud; j++){
			printf("\nEnter the Student ID for Student no. %d : ",j+1);
			scanf("%d",&id[stud]);
			printf("\nEnter the marks of the students %d : ",j+1);
			scanf("%d",&marks[stud]);
			total+=marks[stud];
		}
		printf("\nTotal marks achieved by classroom no. %d = %d\n",i+1,total);
		puts("==================================================");
		
	}
	
}
	