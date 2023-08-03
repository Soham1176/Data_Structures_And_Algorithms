// Refer the Question:https://practice.geeksforgeeks.org/problems/number-of-provinces/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=number_of_provinces
// Youtube:https://www.youtube.com/watch?v=ACzkVtewUYA&list=PLgUwDviBIf0oE3gA41TKO2H5bHpPd7fzn&index=7&ab_channel=takeUforward
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    private:
    void Dfs(int node,vector<int> adjLs[],int vis[])
    {
        vis[node] = 1;
        for(auto it:adjLs[node])
        {
            if(!vis[it])
            {
                Dfs(node,adjLs,vis);
            }
        }

    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {

        // Declare a list
        vector<int> adjLs[V];
        // You have to create a adjacetcy list 
        for (int i = 0; i <V; i++)
        {
            for (int j= 0; j <V; j++)
            {
                if(adj[i][j] == 1 && i != j)
                {
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }

        // create a visited array
        int vis[V] = {0};
        int cnt = 0;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                cnt++;
                Dfs(i,adjLs,vis);
            }
            
        }
        return cnt;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends