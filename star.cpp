#include <stdio.h>

int main ()
{
	int arows = 5;
	
	for (int i = arows; i >=1; i--)
	{
	for (int j=1; j<=i; j++)
	{
		printf("* ");
	}
	printf("\n");
	}
	return 0;
}