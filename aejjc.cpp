#include <iostream>
#include <vector>
#include <set>
using namespace std;
const int inf = 1e7;
int main()
{
    // n=number of nodes
    // m=number of edges
    int n, m;
    cin >> n >> m;
    vector<int> dist(n + 1, inf);
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        
        
    }