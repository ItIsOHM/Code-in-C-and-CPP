#include <stdio.h>
#include <conio.h>

float area(float l, float b) {
    return (l*b);
}

void main() {
    float l, b;
    printf("Enter the length: ");
    scanf("%f", &l);
    printf("Enter the width: ");
    scanf("%f", &b);

    printf("The area of the rectangle is %.2f", area(l, b));
}