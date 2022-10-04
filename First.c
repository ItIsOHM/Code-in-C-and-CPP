#include <stdio.h>
#include <conio.h>
#include <math.h>

int fac(int a) {
	int pro=1;
	while(a>0) {
		pro=pro*a;
		a--;
	}
	return pro;
}

int main() {
	float sum=0, x, n, i;
	printf("Enter the value of X: ");
	scanf("%f", &x);
	printf("Enter the number of terms: ");
	scanf("%f", &n);

	for(i =1; i<=n; i++)
		sum=sum+((pow(-1, i))*(x*i/fac(i)));
	sum=1+sum;
	printf("\nSum: %.2f", sum);
	getch();
	return 0;
}