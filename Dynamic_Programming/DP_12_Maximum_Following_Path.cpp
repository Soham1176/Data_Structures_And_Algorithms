/*
Recursive soln
#include <bits/stdc++.h> 

int F(int i,int j,vector<vector<int>> & matrix,int n,int m)
{
    if(j<0 || j >=m) return (-1e8);
    if(i ==0) return matrix[0][j];
    int up = matrix[i][j] + F(i-1,j,matrix,n,m);
    int L_dg = matrix[i][j] + F(i-1,j-1,matrix,n,m);
    int R_dg = matrix[i][j] + F(i-1,j+1,matrix,n,m);
    return max(up,max(L_dg,R_dg));
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int maxi = -1e8;
    
    for(int j=0;j<m;j++)
    {
        maxi = max(maxi , F(n-1,j,matrix,n,m));
    }
    return maxi;
    
}
*/

/*
memoization:
#include <bits/stdc++.h> 

int F(int i,int j,vector<vector<int>> & matrix,int n,int m,vector<vector<int>> dp)
{
    if(j<0 || j >=m) return (-1e8);
    if(i ==0) return matrix[0][j];
    if(dp[i][j] != -1) return dp[i][j];

    int up = matrix[i][j] + F(i-1,j,matrix,n,m,dp);
    int L_dg = matrix[i][j] + F(i-1,j-1,matrix,n,m,dp);
    int R_dg = matrix[i][j] + F(i-1,j+1,matrix,n,m,dp);

    return dp[i][j] = max(up,max(L_dg,R_dg));
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int maxi = -1e8;

    vector<vector<int>> dp(n,vector<int>(m,-1));
    
    for(int j=0;j<m;j++)
    {
        maxi = max(maxi , F(n-1,j,matrix,n,m,dp));
    }
    return maxi;
    
}
*/

/*
Tabulation method:
#include <bits/stdc++.h> 

int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    

    vector<vector<int>> dp(n,vector<int>(m,-1));
    
    for(int j=0;j<m;j++)
    {
        dp[0][j] = matrix[0][j];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int up = matrix[i][j] + dp[i-1][j];
            
            int L_dg = matrix[i][j];
            if(j-1>=0)  L_dg += dp[i-1][j-1];
            else  L_dg += (-1e8);

            int R_dg = matrix[i][j];
            if(j+1<m) R_dg += dp[i-1][j+1];
            else R_dg += (-1e8);

            dp[i][j] = max(up,max(L_dg,R_dg)); 
        }
    }
    int maxi = -1e8;
    for(int j=0;j<m;j++)
    {
        maxi = max(maxi,dp[n-1][j]);
    }
    return maxi;
    
}
*/


/*
Space Optimisation:
#include <bits/stdc++.h> 

int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    

    vector<int> prev(n,0);
    
    for(int j=0;j<m;j++)
    {
        prev[j] = matrix[0][j];
    }

    for(int i=1;i<n;i++)
    {
        vector<int> cur(m,0);
        for(int j=0;j<m;j++)
        {
            int up = matrix[i][j] + prev[j];
            
            int L_dg = matrix[i][j];
            if(j-1>=0)  L_dg += prev[j-1];
            else  L_dg += (-1e8);

            int R_dg = matrix[i][j];
            if(j+1<m) R_dg += prev[j+1];
            else R_dg += (-1e8);

            cur[j] = max(up,max(L_dg,R_dg)); 
        }
        prev = cur;
    }
    int maxi = -1e8;
    for(int j=0;j<m;j++)
    {
        maxi = max(maxi,prev[j]);
    }
    return maxi;
    
}
*/