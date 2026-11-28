Program: Basic Input and Output using printf() and scanf()
Description: Reads a user's age and GPA, then displays them formatted on the console.
 

#include <stdio.h>

int main() {
    int age;
    float gpa;

    // Prompting and reading user input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    // Displaying formatted output
    printf("\n--- Summary ---\n");
    printf("Age: %d years\n", age);
    printf("GPA: %.2f\n", gpa);

    return 0;
}
