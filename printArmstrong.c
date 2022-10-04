#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    int num=500, num2, c=3, sum=0, n, a, i;

    printf("Armstrong numbers between 100 and 500: ");
    for(i=100; i<=num; i++) {
        n=a=num2=i;
        while (c>0) {
            a=n%10;
            sum=pow(a,3)+sum;
            n/=10;
            c--;
        }
        //printf("sum: %d", sum);
        if(num2==sum) printf("\n%d", i);
        c=3;
        sum=0;
    }
}