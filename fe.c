#include <stdio.h>
int main()
{
    int n,i,j,t,min;
    printf("Enter array size:\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter array elemts:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int indexOfMin, temp;
   // printf("Running Selection sort...\n");
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d ",A[i],A[6-i]);
    }
    return 0;
}