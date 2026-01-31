#include <stdio.h>

int main()
{
	FILE *file;
	char filename[100];
	char ch;
	
	printf("Enter the full file path with .txt: \n");
	scanf("%s", filename);
	
	file = fopen(filename, "r");
	
	if (file == NULL)
	{
		printf("ERROR: the is no fille ");
		return 1;
	}
	
	printf("\n The file content: \n\n");
	while((ch = fgetc(file)) !=EOF)
	{
		putchar(ch);
    }
    fclose(file);
    return 0;
}