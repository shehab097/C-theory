// 4. Write a program that read three numbers and display minimum.

#include <stdio.h>

int main() {
    int a = 5,
        b = -10,
        c = -5;

    int min = a;

    if (min > b) min = b;
    else if (min > c) min = c;

    printf("%d is minimum",min);

    return 0;
}