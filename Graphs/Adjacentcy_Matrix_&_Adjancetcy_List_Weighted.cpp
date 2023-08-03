// This was for weighted graph
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int graph[N][N];
vector<pair<int,int>> graph1[N];


int main()
{
    int n,m;
    cin >> n>>m;
    for(int i = 0;i<m;i++)
    {
        int v1,v2,wt;
        cin>>v1>>v2>> wt;

        // Approach 1 : Adjacentcy matrix wala
        graph[v1][v2] =wt;
        graph[v2][v1] =wt;
        // Space Complexity is O(N^2) N = 10^5;

        // Approach 2 : Adjacentcy List - as your graph is undirected so we will have to store the element at both the places
        graph1[v1].push_back({v2,wt}); //to store the list of v1 of elements v2 with its weight
        graph1[v2].push_back({v1,wt}); //to store the list of v2 as well of elemenr v1 with its weight;
        // Space complexity is O(Vertex + Edges) 
    }

    // Approach 1: Advantages
    // to find the weight of edge in the i,j
    // check if i,j is connected or not 
    // if(graph[i][j] == 1)
    // {
    //   Connected
    // }
    // Space Complexity is : O(1);

    // Approach 2: Disadvantage
    // check if i,j is connected or not
    // to find the weight of edge in the i,j
    // for(pair<int,int> child : graph2[i])
    // {
    //  if(child.first == j)
    //    {
    //          Connected
                // child .second -> to find the weight of the edge
    //      }
    //  } 
    // Space Complexity is : O(N);



   

    
    return 0;
}