// 19. Write a program to check a number is divisible by both 11 and 9 or not.

#include <stdio.h>

int main() {
    // Your code goes here

    int n = 10;

    if (n % 9 == 0 && n % 11 == 0) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}