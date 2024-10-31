// 15. Write a C program to check whether number is EVEN or ODD using switch - case.

#include <stdio.h>

int main() {
    int n = 121;

    switch (n % 2 == 0) {
    case 0:
        printf("%d is odd", n);
        break;
    case 1:
        printf("%d is even", n);
    }

    return 0;
}