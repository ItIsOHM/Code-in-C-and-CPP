#include <stdio.h>

int digSum(int n)
{
	if (n == 0)
	return 0;
    else
	return (n % 10 + digSum(n / 10));
}

void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
	
	printf("Sum of digits in %d is %d\n.", n, digSum(n));
}