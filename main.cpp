#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<climits>
using namespace std;
class Ans{
    public:
    int solve(vector<int>&arr,int N, int prev,int curr){
        
        //Base Case
        if(curr==N){
            return 0;
        }
        //Same goes for the unbounded knapsack
        //Condition when thecases are satisfied
        int take=0;
        if(prev==-1 or arr[curr]>arr[prev]){
            take=1+solve(arr,N,curr,curr+1);
        }
        
        //Conditions when the cases are not satisfied
        // int notTake=0;
        int notTake=0+solve(arr,N,prev,curr+1);
        //Same goes like knapsack
        //Now we take out the max from the above main lines
        // return me the max of (include :: not include)
        return max(notTake,take);

    }
};

int main(){
    vector<int>arr{0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
    int N=arr.size();
    Ans *obj;
    /*Considering that the curr starts from the 0 index position  
    and 
    prev will start from the -1 index position
    */
    cout<<obj->solve(arr,N,-1,0);
    
}