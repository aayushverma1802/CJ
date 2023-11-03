#include<iostream>
//#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution{
    public:
    void dfs(int src,vector<bool>&vis,vector<int>adj[]){
        vis[src]=true;
        cout<<src<<"->";
        for(auto x:adj[src]){
            if(vis[x]==false){
                dfs(x,vis,adj);
            }
        }
    }
    vector<int> Path(vector<vector<int>>&graph){
        int n=graph.size();
        vector<bool>vis(n,false);
        vector<int>adj[n];
        for(auto x:graph){
            vector<int>data=x;
            int a=data[0];
            int b=data[1];
            //This time it is an undirected graph;
            adj[a].push_back(b);
         //   adj[b].push_back(a);
            
        }
        dfs(1,vis,adj);
        return {-1};
    }
};
int main(){
    Solution *obj;
    vector<vector<int>>graph={{1,2},{3},{3},{}};
    vector<int>temp;
    int m=graph.size();
    //Entering of the nodes and edges
    //cout<<"Entering of the data\n";
    // int n;
    // int m;
    // cin>>n>>m;
    vector<vector<int>>bab;
    for(int i=0;i<m-1;i++){
        temp.clear();
        for(int j=0;j<graph[i].size();j++){
            // int x;
            // cin>>x;
            
            temp.push_back(graph[i][j]);
        }
        bab.push_back(temp);
    }
     obj->Path(bab);
    return 69;
}
