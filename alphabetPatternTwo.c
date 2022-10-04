#include <stdio.h>
#include <conio.h>

void main() {
    int n=5;
    for(int i=0; i<n; i++) {
        for(int j=n-i-1; j>=0; j--)
            printf("%c\t", (65+j));

        
    printf("\n");    
    }
} 