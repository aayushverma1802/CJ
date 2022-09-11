#include<stdio.h>
int main(){
    int a[]={25,19,22,23,21,12,10,17,11,13,10};
    int n=sizeof(a)/sizeof(a[0]);
    int k=0;
    for(int i=0;i<n;i++){
        int key=a[i];
        
       for(int j=1;j<n;j++){
           if (a[i]>a[j-1]&&a[i]>a[j+1]){
               
               
               k=k+1;
           }
       }
    }
    printf("The Largest no:- %d\n",k);
}