#include <stdio.h>
#include <conio.h> 
#include <stdbool.h>

void main() {
    printf("Rhythm Garg, 2100290120141\n");
    int x, y;
    printf("Enter the first array legnth: ");
    scanf("%d", &x);
    printf("Enter the second array legnth: ");
    scanf("%d", &y);

    int a[x], b[y], c[x];

    printf("Enter the elements of first array: ");
    for(int i=0; i<x; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the elements of second array: ");
    for(int i=0; i<y; i++) {
        scanf("%d", &b[i]);
    }
    int k=0;
    bool flag = false;
    int j=0;
    for(int i=0; i<x; i++) {
        for(j=0; j<y; j++) {
            if(a[i]!=b[j]) {
                flag = true;
            } else { 
                flag = false;
                break;
            }
        }
        if(flag) {
            c[k]=a[i];
            ++k;
            flag = false;
        }
    }

    printf("\nUncommon Elements:\n");
    for(int i=0; i<k; i++)
        printf("%d\t", c[i]);
}