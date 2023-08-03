// This was for unweighted graph
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int graph[N][N];
vector<int> graph1[N];


int main()
{
    int n,m;
    cin >> n>>m;
    for(int i = 0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;

        // Adjacentcy matrix wala
        graph[v1][v2] =1;
        graph[v2][v1] =1;
        // Space Complexity is O(N^2): N = 10^5;

        // Adjacentcy List - as your graph is undirected so we will have to store the element at both the places
        graph1[v1].push_back(v2); //to store the list of v1 of elements v2
        graph1[v2].push_back(v1); //to store the list of v2 as well of elemenr v1;
        // Space complexity is O(Vertex + Edges) 
    }

    // Approach 1: Advantages
    // check if i,j is connected or not 
    // if(graph[i][j] == 1)
    // {
    //   Connected
    // }
    // Space Complexity is : O(1);

    // Approach 2: 
    // check if i,j is connected or not
    // for(int child : graph2[i])
    // {
    //  if(child == j)
    //    {
    //          Connected
    //      }
    //  } 
    // Space Complexity is : O(N);
   

    
    return 0;
}