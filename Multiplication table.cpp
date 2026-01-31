#include<stdio.h>
#include<conio.h>


main()
{
	int i,j;
	for (i=1; i<=12; i++)
	{
		printf("Table %d", i);
		for(j=1; j<=10; j++)
		{
			printf("\n %d X %d =%d", i,j,i*j);
		}
		printf("\n\n");
	}
	getch();
}