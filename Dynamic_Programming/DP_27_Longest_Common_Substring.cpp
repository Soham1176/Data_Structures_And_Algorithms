/*
Tabulation:
#include <bits/stdc++.h> 
int lcs(string &str1, string &str2){
	int n = str1.size();
	int m = str2.size();

	vector<vector<int>> dp(n+1,vector<int>(m+1,0));
	
	//Base case
	for(int j =0;j<=m;j++) dp[0][j] = 0;
	for(int i =0;i<=n;i++) dp[i][0] = 0;
	int ans =0;
	//copy the recurence
	for(int i =1;i<=n;i++)
	{
		for(int j =1;j<=m;j++)
		{
			//Matching
			if(str1[i-1] == str2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];

			//not matching
			else dp[i][j] = 0;

			ans = max(ans,dp[i][j]);
		}
	}
	return ans;
}
*/

/*
SPace optimisation:
#include <bits/stdc++.h> 
int lcs(string &str1, string &str2){
	int n = str1.size();
	int m = str2.size();

	vector<int> prev(m+1,0),curr(m+1,0);

	int ans =0;
	//copy the recurence
	for(int i =1;i<=n;i++)
	{
		for(int j =1;j<=m;j++)
		{
			//Matching
			if(str1[i-1] == str2[j-1]) curr[j] = 1 + prev[j-1];

			//not matching
			else curr[j] = 0;

			ans = max(ans,curr[j]);
		}
		prev = curr;
	}
	return ans;
}

*/