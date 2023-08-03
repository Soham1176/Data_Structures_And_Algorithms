private:
    bool Bfs(int node,vector<int> &vis,vector<int> adj[])
    {
        
        vis[node] = 1;
        int root = -1;
        queue<pair<int,int>> q;
        q.push({node,root});
        
        while(!q.empty())
        {
            int node = q.front().first;
            int parentf = q.front().second;
            
            q.pop();
            
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it] = 1;
                    q.push({it,node});
                }
                else if(vis[it]==1 && (parentf != it))
                {
                   return 1; 
                }
            }
        }
        return 0;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
       //int start = 0;
       vector<int> vis(V,0);
       for(int i=0;i<V;i++)
       {
           if(!vis[i])
           {
               if(Bfs(i,vis,adj)==1) return true;
           }
       }
       return false;
    }
};


// //{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    bool Bfs(int node,vector<int> vis,vector<int> adj[])
    {
        
        vis[node] = 1;
        int root = -1;
        queue<pair<int,int>> q;
        q.push({node,root});
        
        while(!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            
            q.pop();
            
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    vis[it] = 1;
                    q.push({it,node});
                }
                
                else if(parent == 1 && vis[it] == 1)
                {
                   return 1; 
                }
            }
        }
        return 0;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
       vector<int> vis(V,0);
        for(int i =0;i<V;i++)
        {
            if(!vis[i])
            {
                if(Bfs(i,vis,adj) == 1) return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends