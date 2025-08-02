#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, percentage;

    // Input marks for 5 subjects
    printf("Enter marks of 5 subjects out of 100:\n");
    printf("Subject 1: ");
    scanf("%f", &sub1);
    printf("Subject 2: ");
    scanf("%f", &sub2);
    printf("Subject 3: ");
    scanf("%f", &sub3);
    printf("Subject 4: ");
    scanf("%f", &sub4);
    printf("Subject 5: ");
    scanf("%f", &sub5);

    // Calculate total and percentage
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;

    // Output the result
    printf("\nTotal Marks = %.2f / 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
