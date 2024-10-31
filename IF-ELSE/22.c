// 22.Write a program to check whether a triangle is valid or not. (a + b > c)

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b) > c) printf("triangle is valid ");
    else printf("triangle is not valid ");
    return 0;
}