//{ Driver Code Starts
// refer to question : https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bfs_of_graph
// refer to : https://www.youtube.com/watch?v=-tgVpUgsQ5k&list=PLgUwDviBIf0oE3gA41TKO2H5bHpPd7fzn&index=6&ab_channel=takeUforward

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Visited array
        // As the Graph is 0-based so in visited array we made the 0th index as 1
        int vis[V] = {0};
        vis[0] = 1;
        
        //You require a queue data Structure
        queue<int> q;
        q.push(0); //to push the starting elements in queue
        
        // Requie the Vector to store the elements 
        vector<int> bfs;
        
        while(!q.empty())
        {
            // to the Queues Front element in to the Node
            // And then Pop the Element from the queue
            // And then push it into the Vector
            int node = q.front(); 
            q.pop();
            bfs.push_back(node);
            
            // At this time we have to check whether the node we poped has neighbour or not will check that in the Adjacentcy list which will be given to us
            for(auto it:adj[node])
            {
                // Basically here it will check that the node from the adjacentcy list is reached or not if not then go & do the '1' in visited array & then do the traversal
                if(!vis[it])
                {
                   vis[it] = 1;
                   q.push(it);
                }
            }
            
        }
        return bfs;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends