#include <stdio.h>

struct BTech_B 
{
	char name[50];
	int id;
};

struct BTech_A 
{
	char name[50];
	int id;
	struct BTech_B student2;
};

int main()
{
	struct BTech_A student1;
	
	
	sprintf(student1.name, "Kalisa");
	student1.id = 01;
	
	sprintf(student1.student2.name, "Mugisha");
	student1.student2.id = 10;
	
	
	printf("information of student1: Name: %s\n", student1.name);
	printf("Id :%d\n", student1.id);
	printf("Information of student2: Name: %s\n", student1.student2.name);
	printf("Id: %d\n", student1.student2.id);
	
	return 0;
}