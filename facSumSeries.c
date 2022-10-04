#include <stdio.h>
#include <conio.h>

int fac(int a) {
	int pro=1;
	while(a>0) {
		pro=pro*a;
		a--;
	}
	return pro;
}

void main() {
	int sum=0, n, i;

	printf("Enter the number of terms: ");
	scanf("%d", &n);

	for(i=1; i<=n; i++) {
		sum=sum+fac(i);
		//printf();
	}
	printf("\nSum: %d", sum);
}