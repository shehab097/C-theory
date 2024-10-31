// 17. Write a program to check a number whether positive or negative.

#include <stdio.h>

int main() {
    // Your code goes here

    int n = -10;
    if (n > 0) printf("+ve");
    else if (n < 0) printf("-ve");
    else printf("zero");
    return 0;
}