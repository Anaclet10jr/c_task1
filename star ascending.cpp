#include<stdio.h>

int main()
{
	int rows = 6; 
	
	for (int a = 1; a<= rows; a++)
	{
		for (int j = 1; j<=a; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}