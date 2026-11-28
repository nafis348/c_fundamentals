                                                  Day-1
# Basics: Hello, World!

A minimal C program demonstrating standard output and basic program structure.

   c
#include <stdio.h>

int main(void)
{
    printf("Hello, World!\n");
    return 0;
}


Key Takeaways
#include <stdio.h>: Imports the Standard Input/Output library required for printf().
int main(void): Entry point of the program; takes no arguments and returns an integer status code.
printf("Hello, World!\n");`: Prints formatted text to the console, where \n moves the cursor to a new line.
return 0;: Signals successful program termination to the operating system.
Semicolons (;) & Braces{}: Statements end with ; and function bodies are enclosed within {}.
                                                 Day-2
#A C program demonstrating basic arithmetic operations (+, -, *, /, %) and floating-point division using typecasting.

#include <stdio.h>

int main() {
    int num1 = 2;
    int num2 = 3;

    // Integer Arithmetic Operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int int_quotient = num1 / num2;      // Integer division (truncates decimal)
    int remainder = num1 % num2;         // Modulo (remainder after division)

    // Floating-Point Division
    // Typecasting num1 to float prevents integer truncation
    float float_quotient = (float)num1 / num2;

    // Output Results
    printf("Numbers: num1 = %d, num2 = %d\n", num1, num2);
    printf("----------------------------------------\n");
    printf("Addition (num1 + num2)        : %d\n", sum);
    printf("Subtraction (num1 - num2)     : %d\n", difference);
    printf("Multiplication (num1 * num2)  : %d\n", product);
    printf("Integer Division (num1 / num2): %d\n", int_quotient);
    printf("Modulo / Remainder (num1 %% num2): %d\n", remainder);
    printf("Float Division ((float)num1 / num2): %.4f\n", float_quotient);

    return 0;
}

# Basic Arithmetic & Floating-Point Operations in C
key takeways
This program demonstrates fundamental arithmetic operations in C using two integer variables (`num1 = 2` and `num2 = 3`). It covers addition (`+`), subtraction (`-`), multiplication (`*`), integer division (`/`), and modulo (`%`) to find the remainder. Since dividing two integers in C truncates the decimal value, the program also uses explicit typecasting (`(float)num1 / num2`) to perform floating-point division and preserve decimal precision (`0.6667`).

                                                   Day-3
## User Input & Formatted Output (`printf` & `scanf`)

### Concept
In C, `<stdio.h>` provides `printf()` to display formatted output on the console and `scanf()` to read user input from standard input (keyboard).

### Example Code
```c
#include <stdio.h>

int main() {
    int age;
    float gpa;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Age: %d | GPA: %.2f\n", age, gpa);
    return 0;
}
Key Takeaways
Header Requirement: Both printf() and scanf() require #include <stdio.h>.

Format Specifiers: Use %d for integers (int), %f for floating-point numbers (float), and %c for single characters (char).

Address-of Operator (&): scanf() requires & before the variable name (e.g., &age) so it knows the exact memory address where the input value should be stored.

Precision Formatting: Using %.2f inside printf() rounds and displays a float up to 2 decimal places.

Escape Sequences: \n moves the cursor to a new line for cleaner console output.
