// We are going to use adjacentcy matrix 

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m; // we have given a nodes & edges
    cin>>n>>m; 

    int adj[n+1][m+1]; //we will create adjacentcy matrix of n+1,m+1

    for (int i = 0; i<m; i++) // for is used to as me have given as  u-v edge 
    {
        int u,v; // 
        cin>>u>>v;
        adj[u][v] = 1; //in matrix we will keep u-v edges intersection as 1
        adj[v][u] = 1; //in matrix we will keep v-u edges intersection as 1
    }
    
    return 0;
}