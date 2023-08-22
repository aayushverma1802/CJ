//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool check(int i,vector<bool> &vis,vector<int>adj[],vector<bool> &dfs){
        vis[i]=true; 
        dfs[i]=true;
       
        for(auto x:adj[i]){
            if(vis[x]==false){
                bool cycle=check(x,vis,adj,dfs);
                if(cycle){
                    return true;
                }
                
            }
            else if(dfs[x]){
                return true;
            }
        }
    
    dfs[i]=false;
    return false;
}
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,false);
        vector<int>dfs(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bool f=check(i,vis,adj,dfs);
                if(f){
                    return true;
                }
                
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends