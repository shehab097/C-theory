// 10. Write a program that read three numbers and display maximum.
#include<stdio.h>
int main() {
    int a = 15,
        b = -10,
        c = -5;

    int max = a;

    if (max < b) max = b;
    else if (max < c) max = c;

    printf("%d is maximum", max);


    return 0;
}