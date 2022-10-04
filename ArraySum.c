// Rhythm Garg

#include<stdio.h>

void main() {

    int size, i, sum = 0;
    
    printf("Enter array size: \n");
    scanf("%d",&size);
    
    int a[size];

    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&a[i]);
          
    
    for(i = 0; i < size; i++)
          sum += a[i]; 
    
    printf("Sum of the array = %d\n",sum);
}