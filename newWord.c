#include <stdio.h>
#include <conio.h>

void main() {
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);
    int n = a, dig = 0;

    while(a > 0) {
        ++dig;
        a/=10;
    }

    int num[dig], i=0;
    while(dig)
}