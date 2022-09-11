#include<stdio.h>
#include<stdlib.h>
int max(int x,int y){
    return (x>y?x:y);
}
int min(int x,int y){
    return (x<y?x:y);
}
int trap_water(int a[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int left=a[i];
        for(int j=0;j<i;j++){
            left=max(left,a[j]); 
            printf("%d\n",i);
        }
        printf("%d\n",left);
        int right=a[i];
        //printf("f\n");
        for (int j=i+1;j<n;j++){
            right=max(right,a[j]);
        }
       // printf("%d\n",right);
        res+=(min(left,right)-a[i]);  
    }
    return res;
}
int main(){
    int arr[] = {3,0,0,2,0,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\n%d", trap_water(arr, n));
    return 0;
}