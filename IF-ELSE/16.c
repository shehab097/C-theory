// 16. Write a C program to find number of days in a month using switch - case.

#include <stdio.h>

int main() {
    printf("\n january - 1, February - 2, March - 3, April - 4, May - 5, June - 6 , July - 7, August - 8, September - 9, October - 10, November - 11, and December - 12");
    printf("Enter Month number :: ");

    printf("\n\n");

    int month;
    scanf("%d", &month);


    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;

    case 2:
        printf("28/29 days");
        break;

    default:
        printf("Invalid input");
        break;
    }

    return 0;
}