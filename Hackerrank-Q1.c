#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primesum(int n) {
    int i, j, sum=0, flag=0;
    for(i=2; i<=n; i++) {
        for(j=2; j<=i/2; j++)
            if(i%j==0) {
            flag=1;
            break;
            }
        if(flag==0) sum+=i;
    }
    return sum;
}

int main() {
    int t;
    
    scanf("%d", &t);
    int a[t];
    
    for(int i=0; i<t; i++)
        scanf("%d", &a[i]);
    
    for(int i=0; i<t; i++) {
        printf("%d\n",primesum(a[i]));
    }
    
    return 0;
}
