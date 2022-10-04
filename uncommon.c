#include<stdio.h>
int main()
{
    int n,m;
    printf("Rajiv kumar Singh\n 2100290120137\n");
    printf("Enter the number of elements of set A: ");
    scanf("%d", &n);
    int A[n];
    //Input the elements of array 1;
    int i,j;
    printf("Input the Set A: ");
    for(i=0; i<n; i++){
        scanf("%d", &A[i]);
    } 
    int B[m];
    printf("Enter the number of elements of set B : ");
    scanf("%d", &m);
    //Input the elements of array 2;
    printf("Input the Set B: ");
    for(j=0; j<m; j++){
        scanf("%d", &B[j]);
    }
    //counting the number of same elements and saving them in a new array.
    int k=0;
    int C[k];
    for(i=0; i<n; i++){
        for(j=0; j<m;j++){
            if(A[i]!=B[j]){
                C[k]=A[i];
                k++;
            }
        }
    }
    printf("The intersection of two sets is: ");
    for(i=0; i<k; i++)
        printf("%d ", C[i]);
    return 0;
}
