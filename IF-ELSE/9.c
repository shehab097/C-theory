// 9. Write a program that read three numbers (a,b,c) and determine the root of the quadratic equation: ax2+bx+c=0

#include <stdio.h>
#include<math.h>

int main() {
    float a = 1,
        b = 5,
        c = 6;

    float discriminant = b * b - 4 * a * c;

    float root1 = (-b + sqrt(discriminant)) / (2 * a);
    float root2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("discriminant: %.3f\nroot1: %.3f\nroot2: %.3f",discriminant,root1,root2);
    return 0;
}