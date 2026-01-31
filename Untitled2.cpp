#include<stdio.h>

int main()
{
	FILE *file;
	char ch;
	char filename[100];
	
	printf("Enter the file with .txt: \n");
	scanf("&s",filename);
	
	file =fopen(filename, "r");
	
	if (file == NULL)
	{
		printf("error");
		return 1;
	}
	
	printf("\n The content of file i: \n\n");
	while((ch=fgetc (file)) !=EOF){
	putchar(ch);}
	
	fclose(file);
	
	return 0;
}