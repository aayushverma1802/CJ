#include<stdio.h>
int bubble_Sort(int n , int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int a[]={12,2,63,4,785,6};
    int n=6;
    bubble_Sort(n,a);
    int o=0;
    while(o<6){
        printf("%d\n",a[o]);
        o++;
    }

}
