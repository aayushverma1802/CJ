#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int maximum(int a[], int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    
}
void countSort(int a[],int n){
    int i,j;
    int maxi=maximum(a,n);
    int *count=(int*)malloc(sizeof(int)*(maxi+1));
    for(int i=0;i<(maxi+1);i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[a[i]]=count[a[i]]+1;
    }
    i=0;
    j=0;
    while(i<=maxi+1){
        if(count[i]>0){
            a[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else{
            i++;
        }
    }
}
int main()
{
    int a[]={23,75,3,23,65,34,1};
    int n=sizeof(a)/sizeof(a[0]);
    countSort(a,n);
    printArray(a,n);
    return 69;
}