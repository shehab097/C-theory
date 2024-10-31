// 21. Write a program to check whether a triangle is equilateral, bilateral or isosceles


#include <stdio.h>

int main() {
    // Your code goes here
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c ) {
        printf("equilateral");
    }

    else if (a == b || b == c || c == a) {
        printf("isosceles");
    }

    else {
        printf("scalene");
    }


    return 0;
}