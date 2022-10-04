#include <stdio.h>
#include <conio.h>

void main() {
    int n=6;
    for(int i=0; i<n; i++) {
        for(int j=1; j<n-i; j++)
            printf("%d\t", (j));

        for(int j=1;j<=i*2;j++)
            printf("\t");
        
        for(int j=n-1-i; j>0; j--) {
            printf("%d\t", (j));
        }
    printf("\n");    
    }
}     