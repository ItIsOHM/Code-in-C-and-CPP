#include <stdio.h>
#include <conio.h>

void main() {
    int n=300, i, j, flag=0;
    printf("Prime numbers between 1 and %d:",n);
    for(i=2; i<=n; i++) {
        for(j=2; j<=i/2; j++)
            if(i%j==0) {
            flag=1;
            break;
            }
        if(flag==1) printf("");
        else printf("\n%d", i);
        flag=0;
    }
    getch();
}