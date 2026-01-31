



#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;


    printf("Enter the full path of the .txt file:\n");
    scanf("%s", filename);


    file = fopen(filename, "r");


    if (file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }


    printf("\nContents of the file:\n\n");
    while ((ch = fgetc(file)) != EOF) {
    printf("%c", ch);
    }


    fclose(file);

    return 0;
}
