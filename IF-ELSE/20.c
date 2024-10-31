// 20.Write a program to check whether a character is alphabet number or any other symbol.

#include <stdio.h>

int main() {
    // Your code goes here
    char ch;
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is alphabet", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("%c is number", ch);
    }
    else {
        printf("%c is symbol", ch);
    }
    return 0;
}