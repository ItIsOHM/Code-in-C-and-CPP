#include <stdio.h>
#include <conio.h>

void main() {
    int n=0;
    printf("Enter the number of denominations: ");
    scanf("%d", &n);
    int cur[n];
    printf("Enter the denominations: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &cur[i]);
    }
    //int cur[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int amount=0;
    printf("\nEnter the amount: ");
    scanf("%d", &amount);
    int origAmount = amount;
    int i=0;
    int count = 0;
    for(i=n-1; i>=0; i--) {
        while(amount>=cur[i]) {
            //printf("cur at %d : %d", i,cur[i]);
            count = amount/cur[i];
            //printf("count at %d : %d", i,count);
            amount%=cur[i];
            //printf("amount at %d : %d", i, amount);
            //printf("\n");
        }
        //printf("cur at %d : %d\n", i,cur[i]);
        printf("%d x %d\n", cur[i], count);
        count=0;
    }
}