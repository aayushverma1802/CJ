#include<stdio.h>
int main(){
    printf("Enter the Number:- ");
    int k,sum=0;
    scanf("%d",&k);
    while(k){
        if(k%10==0){
            sum+=1;
            k/=10;
        }
        else{
            k/=10;
        }
    }
    printf("No of ""0"":- %d",sum);
}