#include <bits/stdc++.h> 
void CreateAdjaList(unordered_map<int,set<int>> adjList,vector<pair<int, int>> edges)
{
    for(int i =0;i<edges.size();i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

// void PrintAdjaList(unordered_map<int,list<int>> adjList)
// {
//     for(auto it:adjList)
//     {
//         cout<<it.first<<" ->";
//         for(auto i:it.second)
//         {
//             cout<<i<<" ,";
//         }cout<<endl;
//     }
// }


void Bfs( unordered_map<int,set<int>> adjList,unordered_map<int,bool> vis,vector<int> ans,int node)
{
    // ek Queue Lagte
    queue<int> q;
    q.push(node);

    // As we have pushed the node means its visited
    vis[node] = 1;

    while(!q.empty())
    {
        // As the Element is at the Front of thw queue
        int FrontNode = q.front();
        q.pop();

        // You have to store the Frontnode to print
        ans.push_back(FrontNode);

        // Go to the Neighbour Nodes so
        for(auto it:adjList[FrontNode])
        {
            if(!vis[it])
            {
                q.push(it);
                vis[it] = 1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Create a Adjacentcy list
    unordered_map<int,set<int>> adjList;

    // To store the Bfs vector in ans
    vector<int> ans;

    // To create a visited array 
    unordered_map<int,bool> vis;

    // Created a Adjacentcy List
    CreateAdjaList(adjList,edges);

    // PrintAdjaList(adjList);

    // to apply bfs You have to go on the Nodes na
    for(int i =0;i<vertex;i++)
    {
        // Check kar ki tu tyanode parant gelay aahe ki naahi jar nasel gela tar BFS ne traverse kar
        if (!vis[i]) {
          Bfs(adjList, vis, ans, i);
        }
    }
    return ans;
}
