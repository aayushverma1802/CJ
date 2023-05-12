#include<iostream>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool dfs(int node,vector<int>adj[],vector<bool>&vis,vector<bool>&par){
        vis[node]=true;
        for(auto x :adj[node]){
            if(vis[x]==false){
                
                par[node]=x;
                dfs(x,adj,vis,par);
            }
            if(vis[x]==true and par[x]!=node){
                return true;
            }
        }
        return false;
    }
    int isCyclic(vector<int>adj[],int n,int V){
        vector<bool>vis(n,false);
        vector<bool>par(n,false);
        for(int i=0;i<n;i++){
            if(vis[i]!=true){
                return dfs(i,adj,vis,par);
            }
        }
        return false;
    }
    
};
int main(){    
    cout<<"Hello\n";
    int n,m;
    //Entering of the edges  and nodes
    cin>>n>>m;
    
    int mat[n][m]={
    {1}, 
    {0, 2, 4}, 
    {1, 3}, 
    {2, 4}, 
    {1, 3}};
    vector<int>adj[n];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            adj[i].push_back(j);
        }
    }
    Solution *obj;
    obj->isCyclic(adj,n,m);

    return 69;
    
}