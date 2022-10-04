#include <stdio.h>
#include <conio.h>

void main() {
    int n=7;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++)
            printf("%c\t", (65+j));

        for(int j=n-1-i; j<n-1; j++)
            printf("\t");

        for(int j=2;j<=i;j++)
            printf("\t");
        
        for(int j=n-1-i; j>=0; j--) {
            if(j!=(n-1)) printf("%c\t", (65+j));
        }
    printf("\n");    
    }
} 