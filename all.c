#include <stdio.h>

int main() {
    int a, b;
    int add, subtract, multiply, divide;

    printf("Enter two numbers");
    scanf("%d %d", &a, &b);

    add = a + b;
    subtract = a - b;
    multiply = a * b;

    if (b != 0) {
        divide = a / b;
    }

    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, subtract);
    printf("%d * %d = %d\n", a, b, multiply);

    if (b != 0) {
        printf("%d / %d = %d\n", a, b, divide);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
