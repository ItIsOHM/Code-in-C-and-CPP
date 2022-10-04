#include <stdio.h>
#include <conio.h>

void main() {
    int a, pro=1;

    printf("Enter A: ");
    scanf("%d", &a);

	while(a>0) {
		pro=pro*a;
		a--;
	}

    printf("\n%d", pro);
}