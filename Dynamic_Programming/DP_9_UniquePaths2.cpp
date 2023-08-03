/* Recursive wala method:
#include<bits/stdc++.h>
int F(int i,int j,vector<vector<int>>& mat)
{
    if(i==0 && j==0) return 1;
    if(i>=0 && j>=0 && mat[i][j] == -1) return 0;
    if(i<0 || j<0 ) return 0;

    int up = F(i-1,j,mat);
    int lft = F(i,j-1,mat);

    return (up+lft);
}

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    return F(n-1,m-1,mat);
}
*/

/*
Memoization code:
#include<bits/stdc++.h>
int mod = (int) (1e9+7);
int F(int i,int j,vector<vector<int>>& mat,vector<vector<int>>& dp)
{
    if(i==0 && j==0) return 1;
    if(i>=0 && j>=0 && mat[i][j] == -1) return 0;
    if(i<0 || j<0 ) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    int up = F(i-1,j,mat,dp);
    int lft = F(i,j-1,mat,dp);

    return dp[i][j] = (up+lft) % mod;
}

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>> dp(n,vector<int>(m,-1));
    return F(n-1,m-1,mat,dp);
}
*/


/*
Tabulation Method :
#include<bits/stdc++.h>
int mod = (int) (1e9+7);

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    int dp[n][m];
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i ==0 && j==0) dp[i][j] = 1;
            else if(mat[i][j] == -1) dp[i][j]= 0;
            else
            {
                int up =0;
                int lft =0;

                if(i>0) up =dp[i-1][j];
                if(j>0) lft = dp[i][j-1];

                dp[i][j] = (up + lft) % mod; 
            }
        }
    }
    return dp[n-1][m-1];
}
*/

/*
Optimised soln
#include<bits/stdc++.h>
int mod = (int) (1e9+7);

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    vector<int> prev(n,0);
    for(int i =0;i<n;i++)
    {
        vector<int> cur(m,0);
        for(int j=0;j<m;j++)
        {
            if(i ==0 && j==0) cur[j] = 1;
            else if(mat[i][j] == -1) cur[j]= 0;
            else
            {
                int up =0;
                int lft =0;

                if(i>0) up =prev[j];
                if(j>0) lft = cur[j-1];

                cur[j] = (up + lft) % mod; 
            }
        }
        prev = cur;
    }
    return prev[m-1];
}
*/
