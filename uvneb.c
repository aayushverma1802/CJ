#include<stdio.h>
int main(){
    //int a[100];
    // printf("Enter the number of elements")
    // scanf("%d",&n
    int a[]={12,23,4,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(k==a[i]+a[j]){
                printf("found\n");
                printf("The number are:-\n%d\n%d\n",a[i],a[j]);
                break;
        
            }
        }
    }

    printf("All done");
    
}