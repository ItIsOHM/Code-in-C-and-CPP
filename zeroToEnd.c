#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {
    int a;
    printf("Enter the length of the array:\n");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<a; i++) {
        scanf("%d", &arr[i]);
    }

    int n=0;

    for(int i=0; i<a; i++) {
        if(arr[i]!=0) {
            arr[n]=arr[i];
            n++;
        }
    }
    while(n<a) {
        arr[n++] = 0;
    }

    printf("Final Array: \n");
    for(int i=0; i<a; i++) {
        printf("%d\t", arr[i]);
    }
}