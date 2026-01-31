#include <stdio.h>


/* Structure2 */
struct BTech_B {
    char name[20];
    int id;
};

/* Structure1 (Nested Structure) */
struct BTech_A {
    char name[20];
    int id;
    struct BTech_B Student2;   // Nested structure
};

int main() {
    struct BTech_A Student1;

    /* Assign values to Structure1 */
    sprintf(Student1.name, "kalisa");
    Student1.id = 1;

    /* Assign values to Structure2 */
    sprintf(Student1.Student2.name, "Mugisha");
    Student1.Student2.id = 10;

    /* Print output */
    printf("Information of student1:\n");
    printf("Name: %s\n", Student1.name);
    printf("Id :%02d\n", Student1.id);

    printf("Information of student2:\n");
    printf("Name: %s\n", Student1.Student2.name);
    printf("Id :%02d\n", Student1.Student2.id);

    return 0;
}
