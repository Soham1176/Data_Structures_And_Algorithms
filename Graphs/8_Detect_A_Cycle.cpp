class Solution {
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
        // Code here
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