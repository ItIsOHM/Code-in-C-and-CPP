// Rhythm Garg

#include<stdio.h>
 
void main() {
    int size, i;
    int Even_Sum = 0, Odd_Sum = 0;
    
    printf("Enter the size of an Array : ");
    scanf("%d", &size);
    
    int a[size];

    printf("Enter the Array Elements:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < size; i ++) {
        if(a[i] % 2 == 0) {
            Even_Sum += a[i];
        }
        else {
            Odd_Sum += a[i];
        }
    }
    
    printf("Sum of Even Numbers  = %d ", Even_Sum);
    printf("Sum of Odd Numbers  = %d ", Odd_Sum);
}