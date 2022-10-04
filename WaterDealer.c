#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main () {
    int n;
    printf("Enter the number of water tankers: ");
    scanf("%d", &n);

    if(n<1||n>100000) {
        printf("Invalid N value.");
    }
    else {
        int c[n], w[n];
        int i=1, totalWater=0, totalCap=0;

        while(i<=n) {
            printf("Max Capacity for tanker %d: ", (i));
            scanf("%d", &c[i-1]);
            printf("Amount of water filled in tanker %d: ", (i));
            scanf("%d", &w[i-1]);
            if(c[i-1]>100000) {
                printf("Invalid amount of capacity. Re-enter.\n");
                --i;
                i++;
                continue;
            }
            else if(w[i-1]>c[i-1]) {
                printf("Invalid amount of water stored. Re-enter.\n");
                --i;
                i++;
                continue;
            }
            totalCap+=c[i-1];
            totalWater+=w[i-1];
            i++;
        }

        printf("Total amount of water that can be stored: %d", totalCap);
        printf("\nTotal amount of water stored: %d", totalWater);

        int need=0, sum=0;
        for(int i=0; i<n; i++) {
            sum+=c[i];
            if(totalWater<=sum) break;
            need++;
        }
        printf("\nMinimum number of tankers needed: %d", (need+1));
    }
}