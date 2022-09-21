#include<stdio.h>
void printArr(int a[],int n){
    for (int k = 0; k < n; k++){
        printf("%d ",a[k]);
    }
    printf("\n");
}
void insertion_Sort(int a[],int n){
    int key,j;
    for (int i = 1; i <=n-1; i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
        for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            printf("%d\n",a[i]);
        }
        else if(a[i]%2==0){
            printf("%d\n",a[i]);
        }
    }

}
int main(){
    int a[]={5,9,1,11,0,4,16,19}; 
    int n=sizeof(a)/sizeof(a[0]);
    insertion_Sort(a,n);
    printArr(a,n);
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            printf("%d\n",a[i]);
        }
        else if(a[i]%2==0){
            printf("%d\n",a[i]);
        }
    }
    return 69;
}