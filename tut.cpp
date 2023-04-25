#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
        
        
    }
    
    int N_Meeting(vector<int>start,vector<int>end,int n){
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(start[i],end[i]));
        }
        sort(v.begin(),v.end(),cmp);
        int count=1;
        int End=v[0].second;
        for(int i=0;i<n;i++){
            if(End<v[i].first){
                count++;
                
            }
            
        }
        return count;
        

    }
};
int main(){
    vector<int>start={1, 3, 0, 5, 8, 5};
    vector<int>end={2, 4, 6, 7, 9, 9};
    Solution *obj;
    int n=start.size();
    cout<<obj->N_Meeting(start,end,n);
    return 69;
}
