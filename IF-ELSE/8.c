// 8. Write a program that read any year and display leap year or not leap year.


#include <stdio.h>

int main() {
    int y = 2024;

    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        printf("%d is leap year", y);
    }
    else {
        printf("%d is not leap year", y);
    }

    return 0;
}