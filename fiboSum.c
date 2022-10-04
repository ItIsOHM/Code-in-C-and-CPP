#include <stdio.h>
#include <conio.h>

void main() {
	int f=1, s=2, t=0, n=0, sum=0, i=0;
	printf("Enter the number of terms: ");
	scanf("%d", &n);

	if(n==1) {
		sum=1, printf("Sum: %d", sum);
	}
	else if(n==2) {
		sum=3, printf("Sum: %d", sum);
	}
	else {
		sum=3;
		for(i=3; i<=n; i++) {
				t=f+s;
				f=s;
				s=t;
				sum+=t;
			}
    	printf("Sum: %d", sum);
	}
}