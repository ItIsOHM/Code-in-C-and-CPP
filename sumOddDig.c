#include <stdio.h>
#include <conio.h>

int n, sum=0, dig=0;

int sumOdd(int n) {
    while (n>0) {
        dig=n%10;
        sum+=dig;
        n/=100;
    }
    return sum;
}

void main() {
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\nSum of odd placed digits in %d is %d.", n, sumOdd(n));
}