#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int n;
    scanf("%d", &n);

    if(n>=1||n<=100000) {
        int c[n], w[n];
        int i=1, totalWater=0;

        while(i<=n) {
            scanf("%d", &c[i-1]);
            scanf("%d", &w[i-1]);
            if(c[i-1]>100000) {
                --i;
                i++;
                continue;
            }
            else if(w[i-1]>c[i-1]) {
                --i;
                i++;
                continue;
            }
            totalCap+=c[i-1];
            totalWater+=w[i-1];
            i++;
        }
        
        int need=0, sum=0;
        for(int i=0; i<n; i++) {
            sum+=c[i];
            if(totalWater<=sum) break;
            need++;
        }
        printf("%d", (need+1));
    }
    return 0;
}