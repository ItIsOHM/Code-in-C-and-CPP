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
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    printf("Factorial: %d", fac(a));
}