#include<iostream>
#include<vector>
#include<algorithm>
#include<functinal>
#include<climits>
using namespace std;
class Ans{                                                 
    public:
    int solve(vector<int>&price,int n,int ind ){
        if(ind==0){
            return n*price[0];

        }
        int take=INT_MIN;
        int rodLength=ind+1;
        if(rodLength<=n){
            take=price[ind]+solve(ind,n-rodLength,rpice);
        }
        int notTake=0+solve(ind-1,n.price);
        return max(take,notTake);

    }
    int cut_rod(vector<int>&price,int n){
        return solve(n-1,n,price);
    }
}
int main(){

    return 0;
}