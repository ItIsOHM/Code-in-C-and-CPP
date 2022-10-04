#include <stdio.h>
#include <conio.h>

void main() {
    int n=5;
    for(int i=0; i<n; i++) {
        for(int j=n-i-1; j>0; j--) 
            printf("\t");
        
        for(int j=1; j<=i; j++)
            printf("%d\t", j);

        for(int j=i-1; j>0; j--)
            printf("%d\t", j);    
    printf("\n");   
    }
}       