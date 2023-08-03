/*
Recurssion:
#include <bits/stdc++.h> 
using namespace std;

int F(int ind,int W,vector<int> &wt,vector<int>& val)
{
	if(ind ==0)
	{
		if(wt[0] <= W) return val[0];
		return 0;
	}
	int Notpick = 0 + F(ind-1,W,wt,val);
	int pick = INT_MIN;
	if(wt[ind] <= W) pick = val[ind] + F(ind-1,W-wt[ind],wt,val);

	return max(Notpick,pick);
}



int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return F(n-1,maxWeight,weight,value);
}
*/

/*
Memoization:
#include <bits/stdc++.h> 
using namespace std;

int F(int ind,int W,vector<int> &wt,vector<int>& val,vector<vector<int>> &dp)
{
	if(ind ==0)
	{
		if(wt[0] <= W) return val[0];
		return 0;
	}
	if(dp[ind][W] != -1) return dp[ind][W];
	int Notpick = 0 + F(ind-1,W,wt,val,dp);
	int pick = INT_MIN;
	if(wt[ind] <= W) pick = val[ind] + F(ind-1,W-wt[ind],wt,val,dp);

	return dp[ind][W] = max(Notpick,pick);
}



int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,-1));
	return F(n-1,maxWeight,weight,value,dp);
}

*/

/*
Tabulation:
#include <bits/stdc++.h> 
using namespace std;
int knapsack(vector<int> wt, vector<int> val, int n, int maxWeight) 
{
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));
	
	for(int Wt = wt[0];Wt<=maxWeight;Wt++) dp[0][Wt]=val[0];

	for(int ind =1;ind<n;ind++)
	{
		for(int w =0;w<=maxWeight;w++)
		{
			int Notpick = 0 + dp[ind-1][w];
			int pick = INT_MIN;
			if(wt[ind] <= w) pick = val[ind] + dp[ind-1][w-wt[ind]];
			dp[ind][w] = max(Notpick,pick);
		}
	}
	return dp[n-1][maxWeight];
}

*/


/*
Space Optimisation:
#include <bits/stdc++.h> 
using namespace std;
int knapsack(vector<int> wt, vector<int> val, int n, int maxWeight) 
{
	vector<int> prev(maxWeight+1,0);
	
	for(int Wt = wt[0];Wt<=maxWeight;Wt++) prev[Wt]=val[0];

	for(int ind =1;ind<n;ind++)
	{
		vector<int> cur(maxWeight+1,0);
		for(int w =0;w<=maxWeight;w++)
		{
			int Notpick = 0 + prev[w];
			int pick = INT_MIN;
			if(wt[ind] <= w) pick = val[ind] + prev[w-wt[ind]];
			cur[w] = max(Notpick,pick);
		}
		prev = cur;
	}
	return prev[maxWeight];
}
*/


/*
Knapsack Metod using only one array will override the values from right to left taking the ref. of the left values.
int knapsack(vector<int> wt, vector<int> val, int n, int maxWeight) 
{
	vector<int> prev(maxWeight+1,0);
	
	for(int Wt = wt[0];Wt<=maxWeight;Wt++) prev[Wt]=val[0];

	for(int ind =1;ind<n;ind++)
	{
		for(int w= maxWeight;w>=0;w--)
		{
			int Notpick = 0 + prev[w];
			int pick = INT_MIN;
			if(wt[ind] <= w) pick = val[ind] + prev[w-wt[ind]];
			prev[w] = max(Notpick,pick);
		}
	}
	return prev[maxWeight];
}

*/