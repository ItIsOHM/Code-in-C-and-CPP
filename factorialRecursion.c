#include<stdio.h>
#include <conio.h>

long int fac(int n) {
    if (n>=1)
        return n*fac(n-1);
    else
        return 1;
}

void main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Factorial of %d = %ld", n, fac(n));
    printf("\n");
}