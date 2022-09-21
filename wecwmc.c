#include<stdio.h>
#include<stdlib.h>

int main()
{
    int MAX=-1e9;
    int a[]={12,13,14,15,16};
    int n=sizeof(a)/sizeof(a[0]);
    int curr=0;
    for(int i=0;i<n;i++){
        curr+=a[i];
        if(curr>MAX){
            MAX=curr;
        }
        else{
            curr=0;
        }
    }
    printf("%d",MAX);
    return 69;
}