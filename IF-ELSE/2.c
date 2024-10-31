// 2. Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h>

int main() {
    int n = 0;

    if (n > 0) printf("%d is positive", n);
    else if (n < 0) printf("%d is negative", n);
    else  printf("%d is zero", n);

    return 0;
}