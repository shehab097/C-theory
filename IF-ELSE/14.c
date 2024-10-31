// 14. Write a C program to design a calculator with basic operations using switch-case.

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    int a, b;
    scanf("%d %d", &a, &b);

    switch (ch) {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;

    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;

    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;

    case '/':
        printf("%d / %d = %.2f\n", a, b, (float)((float)a / (float)b));
        break;

    case '%':
        printf("%d % %d = %d\n", a, b, (a % b));
        break;

    }
    return 0;
}