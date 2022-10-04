#include <stdio.h>
#include <conio.h>

void main() {
    for(int i=3, k=i; i>0; i--, k=i) {
        for(int j=1; j<=i; j++) {
            printf("%d\t", k--);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=i; j++)
            printf("*\t");
        printf("\n");    
    }
}