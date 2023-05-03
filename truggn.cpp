class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool check(int src,vector<int>adj[],int V,vector<bool>&vis){
        queue<int>q;
        vector<int>parent(V,-1);
        q.push(src);
        vis[src]=true;
        while(q.empty()==false){
            int n=q.front();
            q.pop();
            for(auto x:adj[n]){
                
                if(vis[x]==false){
                    q.push(x);
                    vis[x]==true;
                    parent[x]=src;
                    
                }
                else if(vis[x]==true and parent[src]!=x){
                    return true;
                        
                }
                    
            }
                
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>vis(V,false);
        vector<bool>parent(V,false);
        bool ans;
        for(int i=0;i<V;i++){
            if(vis[i]==false){
                ans= check(i,adj,V,vis);       
                if(ans){
                    return true;
                    
                }
            }
        }
 
        return false;
    }
};