#include<stdio.h>

int main()
{
	int day;
	
	printf("Enter a number (1-7): ");
	scanf("%d", &day);
	
	switch (day)
	{
		case 1: printf("monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednasday\n"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("saturday\n"); break;
        case 7: printf("sunday\n"); break;
        default: printf("Invalid input! Please enter 1-7.\n");
    }
    return 0;
}