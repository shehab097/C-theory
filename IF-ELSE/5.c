// 5. Write a program that read three numbers and display medium.
#include<stdio.h>
int main() {
    int a = 6,
        b = 5,
        c = 4;

    if      ((b > a && a > c) || (b < a && a < c)) printf("%d", a);
    else if ((a > b && b > c) || (a < b && b < c)) printf("%d", b);
    else if ((a > c && c > b) || (a < c && c < b)) printf("%d", c);

    return 0;
}