#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    int n, num, dig;
    printf("Enter the number: ");
    scanf("%d", &n);

    int c=0;
    num=n;
    while(num>0) {
        dig=num%10;
        c++;
        num/=10;
    }

    int p=c-1;
    while(n>0) {
        dig=n/((int)(pow(10,p)));
        printf("\n%d", dig);
        n%=(int)(pow(10,p));
        --p;
    }
}