#include <stdio.h>
#include <math.h>

void main ()
{
    int n , x, fact, i, j, term, sign=-1;
    float sum;
    
    printf ("Input number of terms: ");
    scanf ("%d", &n);
    printf ("Input x: ");
    scanf ("%d", &x);

    sum = 0;
    fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = 1;
        for (j = 1; j <= i; j++)
            fact *= j;
        printf("\tfact: %d", fact);
        term=(x*i)/fact;
        printf("\tTerm: %d", term);
        sum=sum+(term*sign);
        sign=sign*-1;
    }

    printf ("Sum of Series: %.2f", sum);
}