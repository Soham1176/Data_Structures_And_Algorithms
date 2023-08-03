/*
Recursive relation
#include <bits/stdc++.h>

int F(int i,int j,vector<vector<int>> &grid)
{
    if(i ==0 && j==0) return grid[i][j];
    if(i<0 || j<0) return 1e9;

    int sum_up = grid[i][j] + F(i-1,j,grid);
    int sum_lft = grid[i][j] + F(i,j-1,grid);

    return min(sum_up,sum_lft);

}


int minSumPath(vector<vector<int>> &grid) {
    int m = grid.size();
    int n = grid[0].size();

    return F(m-1,n-1,grid);
}
*/

/*
Memoization Technique
#include <bits/stdc++.h>

int F(int i,int j,vector<vector<int>> &grid,vector<vector<int>> dp)
{
    if(i ==0 && j==0) return grid[i][j];
    if(i<0 || j<0) return 1e9;

    if(dp[i][j] != -1) return dp[i][j];

    int sum_up = grid[i][j] + F(i-1,j,grid,dp);
    int sum_lft = grid[i][j] + F(i,j-1,grid,dp);

    return dp[i][j] = min(sum_up,sum_lft);

}


int minSumPath(vector<vector<int>> &grid) {
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> dp(m,vector<int>(n,-1));

    return F(m-1,n-1,grid,dp);
}
*/

/*
Space Optimised
#include <bits/stdc++.h>
int minSumPath(vector<vector<int>> &grid) {
  int m = grid.size();
  int n = grid[0].size();

    vector<int> prev(m,0);
    //int dp[m][n];
   for(int i=0;i<m;i++)
   {
       vector<int> cur(n,0);
       for(int j=0;j<n;j++)
       {
           if(i==0 && j==0) cur[j] = grid[i][j];
           else
           {
               int down =grid[i][j];
               if(i>0)down += prev[j];
               else down += 1e9;

               int rgt = grid[i][j];
               if(j>0) rgt += cur[j-1];
               else rgt += 1e9;

               cur[j] = min(down,rgt);
           }
       }
       prev = cur;
   }
   return prev[n-1];
}
*/
