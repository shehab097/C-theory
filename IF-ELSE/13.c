// 13. Write a C program to check whether a character is VOWEL or CONSONANT using switch - case.

#include <stdio.h>

int main() {
    char ch = 'A';

    switch (ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("VOWEL");
        break;
    default:
        printf("CONSONANT");
        break;
    }
    return 0;
}