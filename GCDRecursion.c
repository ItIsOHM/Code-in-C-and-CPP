#include <stdio.h>

int hcf(int n1, int n2) {
    if (n2 > 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}

void main() {
    int a, b;
    printf("Enter the two integers: ");
    scanf("%d %d", &a, &b);
    printf("G.C.D of %d and %d is %d.", a, b, hcf(a,b));
}