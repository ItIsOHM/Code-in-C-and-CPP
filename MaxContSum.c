#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumSubArray(int a[], int size)  
{  
    int curSum = 0, maxSum = 0;  
   
    for (int i = 0; i < size; i++)  
    {  
        curSum = curSum + a[i];  
        if (curSum > maxSum)  
           maxSum = curSum;  
   
        if (curSum< 0)  
           curSum = 0;  
    }  
    return maxSum;  
} 

int main()  
{  
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
    }
    
    int maxSum = sumSubArray(a, n);  
    printf("%d", max_sum);  
    return 0;  
}  