#include <stdio.h>

int main() {
    int day = 4;

    switch (day){
    case 1:
        printf("Saturday ");
        break;
    
    case 2:
        printf("Sunday ");
        break;
    
    case 3:
        printf("Monday ");
        break;
    
    case 4:
        printf("Tuesday ");
        break;
    
    case 5:
        printf("Wednesday ");
        break;
    
    case 6:
        printf("Thsursday ");
        break;
    
    case 7:
        printf("Friday ");
        break;
    
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}