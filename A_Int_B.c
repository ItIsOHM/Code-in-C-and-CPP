#include <stdio.h>
#include <conio.h> 

void main() {
    printf("Rhythm Garg, 2100290120141\n");
    int x, y;
    printf("Enter the first array legnth: ");
    scanf("%d", &x);
    printf("Enter the second array legnth: ");
    scanf("%d", &y);

    int a[x], b[y];

    printf("Enter the elements of first array: ");
    for(int i=0; i<x; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the elements of second array: ");
    for(int i=0; i<y; i++) {
        scanf("%d", &b[i]);
    }

    int count=0;
    printf("Common elements: \n");
    for(int i=0; i<x; i++) {
        for(int j=0; j<y; j++) {
            if(a[i]==b[j]) { 
                printf("%d\n", a[i]);
                continue;
            }
        }
    }    
}