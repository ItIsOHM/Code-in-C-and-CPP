// Rhythm Garg

#include<stdio.h>
 
void main() {
    int size, i;
    
    printf("Enter the size of an Array : ");
    scanf("%d", &size);
    
    int a[size];

    printf("Enter the Array Elements:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    int f=0;
    printf("Enter the element to be found: ");
    scanf("%d", &f);

    int r=0;
    printf("Enter the element to be replaced: ");
    scanf("%d", &r);

    for (i = 0; i < size; i++)
        if (a[i] == f)
            a[i]=r;
    
    printf("The Array Elements:\n");
    for(i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }

}