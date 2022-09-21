//#include<bitches_learning.c>
#include<stdio.h>
void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void selectionSort(int *A, int n){
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
}
void checker(int a[],int n){
    for (int i=0;i<n;i++){
        if (a[i]==100){
            printf("Searching element found\n");
            return;
        }
        else{
            printf("No element found\n");
            return ;
        }

    }
}
int main(){
    int A[] = {250,245, 240, 235, 230,225,220,215,210,205};
    int n = 10;
   // printArray(A, n);
    selectionSort(A, n);
    checker(A,n);
    printArray(A, n);
    return 69;
}
