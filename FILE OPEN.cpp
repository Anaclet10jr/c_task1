#include <stdio.h>
#include <stdlib.h>
 int main (){
 	char filename[100];
 	char path[200] = "C:\\Users\\YourUsername\\Desktop\\";
 	char ch;
 	FILE *fptr;
 	
 	
 	printf("Enter the text file name to open (include .txt): \n");
 	scanf("%s", filename);
 	
 	fptr = fopen(filename, "r");
 	
 	
 	if (fptr == NULL){
 	   printf("Error: could not open file. Make sure the path is correct.\n");
		return 1;	
	 }
	 
	 printf("\n---File Content---\n\n");
	 while ((ch = fgetc(fptr)) != EOF){
	 	printf("%c",ch);
	 }
	 
	 fclose(fptr);
	 return 0;
 }