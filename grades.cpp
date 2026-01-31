#include<stdio.h>

int main()
{
	float marks;
	
	printf("Enter marks");
	scanf("%d",&marks);
	
	if (marks>=90 && marks <=100)
	printf("GRADE A");
	else if (marks>=80 && marks <=90)
	printf("GRADE B");
	else if (marks>=80 && marks <=90)
	printf("GRADE B");
	else if (marks>=70 && marks <=80)
	printf("GRADE C");
	else if (marks>=60 && marks <=70)
	printf("GRADE D");
	else if (marks>=50 && marks <=60)
	printf("GRADE E");
	else if (marks<50)
	printf("FAIL");
	
	return 0;
}