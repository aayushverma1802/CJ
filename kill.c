#include<stdio.h>
void printArr(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
}
int partition(int a[],int low,int high){
    int pivot=a[low];
    int i=low+1;
    int j=high;
    int temp;
    do{
        while(a[i]<=pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<j){
            temp=a[i];
            temp=a[j];
            a[j]=temp;
        }
    }while(i<j);
} 
void quick_sort(int a[],int low,int high){
    int partition_index;
    partition_index=partition(a,low,high);


}

int main(){
    int a[]={3,5,2,13,12};
    int n=5;
    int low,high;
    quick_sort(a,low,high);
    printArr(a,n);
    return 69;
}