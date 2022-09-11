#include<stdio.h>
int max(int x,int y){
    return (x>y)?x:y;
}
int min(int x,int y){
    return (x<y)?x:y;
}
int trap(int arr[],int n){
    int res =0;
    for(int i=0;i<n;i++){
        int left=arr[i];
        for(int j=0;j<n;j++){
            left=max(left,arr);
        }
        int right=arr[i];
        for (int j = i+1;j<n; j++){
            right=max(right,arr[j]);
        }
        res=res+(min(left,right)-arr[i]);
    }
    return res;
    
}
int main()
{
    int arr[] = {7, 0, 4, 2, 5, 0, 6, 4, 0, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d", trap(arr, n));
    return 0;
}