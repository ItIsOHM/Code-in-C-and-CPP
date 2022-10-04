#include <stdio.h>
#include <conio.h>
#include <math.h>

float add(float x, float y) {
    return (x+y);
}

float sub(float x, float y) {
    return (x-y);
}

float div(float x, float y) {
    return (x/y);
}

float mul(float x, float y) {
    return (x*y);
}

float rem(float x, float y) {
    return (fmod(x, y));
}
void main() {
    int choice;

    printf("\nRhythm Garg, 2100290120141\n");

    printf("What operation would you like to perform?");
    printf("\n1. Addition.");
    printf("\n2. Subtraction.");
    printf("\n3. Division.");
    printf("\n4. Multiplication.");
    printf("\n5.Remainder.");
    printf("\n\n");

    scanf("\n%d", &choice);
    float x, y;
    switch (choice)
    {
        case 1:
            
            printf("\nEnter the two variables: \n");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("The result is: %.4f", add(x, y));
            break;
        case 2:
            
            printf("\nEnter the two variables: \n");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("The result is: %.4f", sub(x, y));
            break;
        case 3:
            
            printf("\nEnter the two variables: \n");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("The result is: %.4f", div(x, y));
            break;
        case 4:
            
            printf("\nEnter the two variables: \n");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("The result is: %.4f", mul(x, y));
            break;
        case 5:
            
            printf("\nEnter the two variables: \n");
            scanf("%f", &x);
            scanf("%f", &y);
            printf("The result is: %.4f", rem(x, y));
            break;
        default:
            break;
    }
}