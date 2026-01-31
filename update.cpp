#include <stdio.h>

int main()
{
	int IT2025[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int position, newvalue, i;
	
	
	printf("Output before updating: ");
	for(i = 0; i < 10; i++)
	{
		printf("%d ", IT2025[i]);
	}
	printf("\n");
	
	
	printf("Enter the postion you want to update (1-10): ");
	scanf("%d", &position);
	
	printf("Enter the new value: ");
	scanf("%d",&newvalue);
	
	
	if (position >= 1 && position <= 10)
	{
		IT2025[position - 1] = newvalue;
		
		
		printf("Output after updating: ");
		for(i = 0; i < 10; i++)
		{
			printf("%d", IT2025[i]);
		}
	}
	else
	{
		printf("INvalid position! Please enter a number between 1 and 10. ");
	}
	
	return 0;
}