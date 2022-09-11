#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter the Number k:- \n");
    int k,h,sum=0,d,count=0;
    scanf("%d",&k);
    printf("Enter the Number d:- \n");
    scanf("%d",&d);
    int gg=0;
    h=k;
    while(k!=0)  
   {  
       k=k/10;  
       count++;  
   }  
   count++;
    while(h!=0){
        count--;
        if(h%10==d){
            sum+=1;
            h/=10;
            printf("Matching Position:-\n%d\n",count);
        }
        else{
            h/=10;
        }    
    }
    printf("No of ""occurence"":- %d",sum);
}