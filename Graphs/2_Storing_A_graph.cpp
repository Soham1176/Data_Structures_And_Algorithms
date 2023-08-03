//Using a Adjacentcy List


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    vector<int> adj[n+1];
    
    // space complexity is O(E)
    for(int i = 0;i<m;i++)
    {
        int u,v;
        /// u ------> v
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}