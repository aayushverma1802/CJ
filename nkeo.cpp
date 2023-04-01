#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 1e5+2;
vector<int> adj[N];
vector<bool> vis(N, false);

class Solution
{
public:
    void func()
    {
        int n;
        int m;
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            // Enter the values from the user;
            int x, y;
            cin >> x >> y;

            // Directed Graph;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        queue<int> q;
        q.push(1);
        vis[1]=true;
        while (q.empty() == false)
        {
            int node = q.front();
            cout<<node<<endl;
            q.pop();
            for(auto x:adj[node]){
                if(vis[x]==false){
                    q.push(x);
                    vis[x]=true;
                }
            }
        }
      
    }
};
int main()
{
    Solution *obj;
    obj->func();

    return 0;
}