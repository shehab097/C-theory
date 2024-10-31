// 6. Write a program that read mark and display result in division.

#include <stdio.h>

int main() {
    int mark = 77;

    if (100 >= mark && mark >= 0) {
        
        if (mark >= 80) printf("A+");
        else if (mark >= 70) printf("A");
        else if (mark >= 60) printf("A-");
        else if (mark >= 50) printf("B");
        else if (mark >= 40) printf("C");
        else if (mark >= 33) printf("D");
        else printf("F");
    }
    return 0;
}