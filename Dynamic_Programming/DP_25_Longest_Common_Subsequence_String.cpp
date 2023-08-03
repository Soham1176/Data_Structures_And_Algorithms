/*
Recursive:
#include<bits/stdc++.h>
using namespace std;

int F(int i , int j,string &s,string &t)
{
	if(i < 0 || j < 0 ) return 0;

	//Matching
	if(s[i] == t[j]) return 1 + F(i-1,j-1,s,t);

	//not matching
	return  = max(F(i-1,j,s,t),F(i,j -1,s,t));
}

int lcs(string s, string t)
{
	int n = s.size();
	int m = t.size();
	return F(n-1,m-1,s,t);
}

*/


/*
Memoization:
#include<bits/stdc++.h>
using namespace std;

int F(int i , int j,string &s,string &t,vector<vector<int>> &dp)
{
	if(i < 0 || j < 0 ) return 0;

	if(dp[i][j] != -1) return dp[i][j];
	//Matching
	if(s[i] == t[j]) return dp[i][j] = 1 + F(i-1,j-1,s,t,dp);

	//not matching
	return dp[i][j] = max(F(i-1,j,s,t,dp),F(i,j -1,s,t,dp));
}
int lcs(string s, string t)
{
	int n = s.size();
	int m = t.size();

	vector<vector<int>> dp(n,vector<int>(m,-1));
	return F(n-1,m-1,s,t,dp);
}
*/

/*
Memoization using Shifting index
#include<bits/stdc++.h>
using namespace std;

int F(int i , int j,string &s,string &t,vector<vector<int>> &dp)
{
	if(i ==0 || j ==0 ) return 0;

	if(dp[i][j] != -1) return dp[i][j];
	//Matching
	if(s[i-1] == t[j-1]) return dp[i][j] = 1 + F(i-1,j-1,s,t,dp);

	//not matching
	return dp[i][j] = max(F(i-1,j,s,t,dp),F(i,j -1,s,t,dp));
}

int lcs(string s, string t)
{
	int n = s.size();
	int m = t.size();

	vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
	return F(n,m,s,t,dp);
}

*/