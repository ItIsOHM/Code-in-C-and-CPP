#include <stdio.h>
#include <conio.h>

int fac(int n) {
    int pro=1;
    while (n>0) {
        pro*=n;
        n--;
    }
    return pro;
}

void main() {
    float n, sum=0;

    printf("Enter the number of terms: ");
    scanf("%f", &n);

    for(int i=1; i<=n;i++) {
        sum+=fac(i);
    }
    printf("\nThe sum is: %.2f", sum);
}