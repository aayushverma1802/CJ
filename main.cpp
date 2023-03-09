#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<climits>
using namespace std;
class Ans{
    public:
    long long solve(vector<long long>&arr,long long N,long long m){
        //Sort the array based on the condition
        sort(arr.begin(),arr.end());
        int mini=INT_MAX;
        int i=0;
        int j=m-1;
        while(j<arr.size()){
            int diff=arr[j]-arr[i];
            mini=min(diff,mini);
            i++;
            j++;
        }
        return mini;
    }
    
};
int main(){
    Ans obj;
    //Testcase 1
    //vector<long long>arr={7, 3, 2, 4, 9, 12, 56};
  //  int m=3; 
  //Testcase 2
  vector<long long>arr={12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
  int m=7;
    int N=arr.size();
    cout<<obj.solve(arr,N,m);
    return 0;
}