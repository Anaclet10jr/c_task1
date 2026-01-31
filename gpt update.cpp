#include <stdio.h>

int main() {
    int IT2025[10] = {10,20,30,40,50,60,70,80,90,100};
    int position, newValue;
    int i;

    /* Output before updating */
    printf("Output before updating:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", IT2025[i]);
    }

    /* User input */
    printf("\n\nEnter position to update (1-10): ");
    scanf("%d", &position);

    printf("Enter new value: ");
    scanf("%d", &newValue);

    /* Update operation */
    if(position >= 1 && position <= 10) {
        IT2025[position - 1] = newValue;
    } else {
        printf("Invalid position!\n");
        return 0;
    }

    /* Output after updating */
    printf("\nOutput after updating:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", IT2025[i]);
    }

    return 0;
}
