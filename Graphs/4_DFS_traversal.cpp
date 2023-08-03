//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private :
        void Dfs(int node,vector<int> adj[],int vis[],vector<int> &ls)
        {
            // In visited array make the starting node as 1
            // & then push it into the list we created
            vis[node] = 1;
            ls.push_back(node);
            
            // Now you have to traverse for the depth of the Neighbours so
            for(auto it:adj[node])
            {
                if(!vis[it])
                {
                    // to go in the depth we had recursive call 
                    Dfs(it,adj,vis,ls);
                }
            }
        }
    
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        // Create a visited array
        int vis[V] = {0};
        
        //Start Element;
        int start = 0; 
        
        // Create a list to store the dfs Traversal
        vector<int> ls;
        
        // Call the Dfs Functions
        Dfs(start,adj,vis,ls);
        return ls;
        
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends