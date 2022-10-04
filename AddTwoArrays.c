// Rhythm Garg

#include<stdio.h>

void main() {
 	int n1, n2, n3, i, j;

 	printf("Enter the number of elements for First Array: ");
 	scanf("%d", &n1);

    int a[n1];    

 	printf("Enter the elements for First Array:");
 	for(i = 0; i < n1; i++) {
      	scanf("%d", &a[i]);
  	}
    
  	printf("Enter the number of elements for Second Array: ");
 	scanf("%d", &n2);

    int b[n2];    

 	printf("Enter the elements for Second Array:");
 	for(i = 0; i < n2; i++) {
      	scanf("%d", &b[i]);
  	}
    
	n3 = n1 + n2;    
    int c[n3];       
  	for(i = 0; i < n1; i++) {
      	c[i] = a[i];
  	}

 	for(i = 0, j = n1; j < n3 && i < n2; i++, j++) {
  		c[j] = b[i];
  	}
    
 	printf("Array Elements After Merging \n"); 
 	for(i = 0; i < n3; i++){
    	printf(" %d \t ",c[i]);
  	}
}