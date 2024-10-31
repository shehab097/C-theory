// 1. Write a C program to find maximum between two numbers.

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    if (x > y) printf("%d is maximum", x);
    else if (x < y) printf("%d is maximum", y);
    else printf("Both are equual");

    return 0;
}