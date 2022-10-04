#include <stdio.h>
#include <conio.h>

void main() {
    int a=0;
    printf("Enter the range: ");
    scanf("%d", &a);

    for(int i=0; i<a; i++) {
        for(int x=a-1; x>i; x--) {
            printf("\t");
        }
        for(int j=0; j<i; j++) {
            printf("%d\t", (j+1));
        }
        for(int k=i; k>=0; k--) {
            printf("%d\t", (k+1));
        }
        printf("\n");
    }

    for(int i=a-2; i>0; i--) {
        for(int x=0; x<i; x++) {
            printf("\t");
        }
        for(int j=0; j<=i; j++) {
            printf("%d\t", (j+1));
        }
        for(int k=i-1; k>=0; k--) {
            printf("%d\t", (k+1));
        }
        printf("\n");
    }
}