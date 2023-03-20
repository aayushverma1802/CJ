#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<climits>

using namespace std;
class Ans{
    public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return  a.second<b.second;
    }
    int N_meetings(vector<int>&start,vector<int>&end,int n){
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            pair<int,int>p=make_pair(start[i],end[i]);
            v.push_back(p);
        }
       sort(v.begin(),v.end(),cmp);
        
        int count=1;
        int lvl=v[0].second;
        for(int i=0;i<n;i++){
            if(lvl<v[i].first){
                count++;
                lvl=v[i].second;
            }
        }
        return count;
    }
};
int main(){
    vector<int>s={1, 3, 0, 5, 8, 5};
    vector<int>e={2, 4, 6, 7, 9, 9};
    int n;
    n=s.size();
    Ans *obj;
    int ans=obj->N_meetings(s,e,n);
    cout<<"Total no of Meetings:- "<<ans;
    return 69;
    
    
}