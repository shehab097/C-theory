// 11. Write a program that read mark and display pass or fail.

#include <stdio.h>

int main() {
    // Your code goes here
    int n = 14;
    if (n <= 100 && n >= 33) printf("pass");
    else if (n <= 32 && n >= 0) printf("fail");
    else printf("Input not valid");
    return 0;
}