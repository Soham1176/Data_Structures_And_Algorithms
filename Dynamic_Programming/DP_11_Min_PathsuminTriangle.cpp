/*
Recursive : 
#include <bits/stdc++.h> 
int F(int i,int j,vector<vector<int>>& triangle,int n)
{
	if(i == n-1) return triangle[n-1][j];

	int bottom = triangle[i][j] + F(i+1,j,triangle,n);
	int diagonal = triangle[i][j] + F(i+1,j+1,triangle,n);
	return min(bottom ,diagonal);
}


int minimumPathSum(vector<vector<int>>& triangle, int n){
	return F(0,0,triangle,n);
}
*/

/*
Memoization : 
#include <bits/stdc++.h> 
int F(int i,int j,vector<vector<int>>& triangle,int n,vector<vector<int>> dp)
{
	if(i == n-1) return triangle[n-1][j];
	if(dp[i][j] != -1) return dp[i][j];

	int bottom = triangle[i][j] + F(i+1,j,triangle,n,dp);
	int diagonal = triangle[i][j] + F(i+1,j+1,triangle,n,dp);
	return dp[i][j] = min(bottom ,diagonal);
}


int minimumPathSum(vector<vector<int>>& triangle, int n){
	vector<vector<int>> dp(n,vector<int>(n,-1));
	return F(0,0,triangle,n,dp);
}
*/

/*
Tabulation:
#include <bits/stdc++.h> 
int minimumPathSum(vector<vector<int>>& triangle, int n){
	vector<vector<int>> dp(n,vector<int>(n,0));
	for(int j=0;j<n;j++)
	{
		dp[n-1][j] = triangle[n-1][j];
	}

	for(int i=n-2;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			int d = triangle[i][j] + dp[i+1][j];
			int dg = triangle[i][j] + dp[i+1][j+1];
			dp[i][j] = min(d,dg);	
		}
	}
	return dp[0][0];
	
}
*/

/*
Space Optimised :
#include <bits/stdc++.h> 
int minimumPathSum(vector<vector<int>>& triangle, int n){
	vector<int> prev(n,0);
	for(int j=0;j<n;j++)
	{
		prev[j] = triangle[n-1][j];
	}

	for(int i=n-2;i>=0;i--)
	{
		vector<int> cur(n,0);
		for(int j=0;j<=i;j++)
		{
			int d = triangle[i][j] +prev[j];
			int dg = triangle[i][j] + prev[j+1];
			cur[j] = min(d,dg);	
		}
		prev = cur;
	}
	return prev[0];
	
}
*/