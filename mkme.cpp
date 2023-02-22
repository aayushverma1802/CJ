#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<climits>
using namespace std;
int knapsack(vector<int>&v,vector<int>&w,int n,int W){
    if(n==0){
        if(w[0]<=W){
            return v[0];
        }
        else{
            return 0;
        }
    }
    int include=0;
    if(w[n]<=W){
        include=v[n]+knapsack(v,w,n-1,W-w[n]);
    }
    int exclude=0+knapsack(v,w,n-1,W);
    int ans=max(exclude,include);
    return ans;     
}
int main(){
    int Maxweight;
    int N;
    vector<int>Value={1,2,3};
    vector<int>Weight={4,5,1};
    cout<<knapsack(Value,Weight,3,4);
    return 0;
}
