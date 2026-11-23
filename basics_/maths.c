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
