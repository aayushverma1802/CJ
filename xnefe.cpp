#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int N =1e5;
bool vis[N];
vector<int>adj[N];
int main(){
    for(int i=0;i<N;i++){
        vis[i]=0;
    }
    //Enter the number of nodes
    int n;
    //Enter the number of edges
    int m;
    cin>>n>>m;
    //Data recived for the graphs and the connection
    int x,y;
    for(int i=0;i<m;i++){
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    queue<int>q;
    q.push(1);
    vis[1]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<endl;
        vector<int>:: iterator it;
        for(it =adj[node].begin();it!=adj[node].end();it++){
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it);

            }
        }
    }


}
