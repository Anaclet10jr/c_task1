#include<stdio.h>
#include<conio.h>

int main ()
{

int a,b,result,ch;
printf("\t ***********************");
printf("\n\t MENU");
printf("\t ***********************");
printf("\n\t 1. Addition");
printf("\n\t 2. Substraction");
printf("\n\t 3. Multiplication");
printf("\n\t 4. Division");
printf("\n\t 5. reminder");
printf("\n\t 0. Exist");
printf("\n\t =====================");
printf("\n\t Enter two numbers");
scanf("%d %d",&a,&b);
printf("\n\n\t Enter your choice");
scanf("%d",&ch);
switch(ch)
{
	case 1:
		result= a+b;
		printf("Addition of two numbers:%d", result);
		break;
	case 2:
		result= a-b;
		printf("Substraction of two numbers:%d", result);
		break;
	case 3:
		result= a*b;
		printf("Multiplication of two numbers:%d", result);
		break;
	case 4:
		result= a/b;
		printf("Division of two numbers:%d", result);
		break;
	case 5:
		result= a%b;
		printf("The Reminder of two numbers:%d", result);
		break;
	case 0:
		printf("Invalid choice");
		break;
}
getch();
}