#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int>&weight,vector<int>&value,int index,int W){
    //Base Case
    // if only 1 item to steal,just compare
    if(index==0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0;
        }
        int include=0;
        if(weight[index]<=capacity){
            include=value[index]+solve(weight,value,index-1,capacity-weight[index]);
            
        }

    }

}
int main(){


}