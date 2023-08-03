/*
REcursive
#include <bits/stdc++.h> 
int F(int ind,int Wt,vector<int> &val, vector<int> &wt)
{
    if(ind ==0) return (Wt/wt[0])*(val[ind]);

    int notTake =0+F(ind-1,Wt,val,wt);
    int Take = INT_MIN;
    if(wt[ind] <= Wt) Take = val[ind] + F(ind,Wt-wt[ind],val,wt);

    return max(Take,notTake);    
}

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    return F(n-1,w,profit,weight);
}

*/

/*
Memoization:
#include <bits/stdc++.h> 
int F(int ind,int Wt,vector<int> &val, vector<int> &wt,vector<vector<int>> &dp)
{
    if(ind ==0) return (Wt/wt[0])*(val[ind]);

    if(dp[ind][Wt] != -1) return dp[ind][Wt];
    int notTake =0+F(ind-1,Wt,val,wt,dp);
    int Take = INT_MIN; 
    
    if(wt[ind] <= Wt) Take = val[ind] + F(ind,Wt-wt[ind],val,wt,dp);

    return dp[ind][Wt] = max(Take,notTake);    
}

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    vector<vector<int>> dp(n,vector<int>(w+1,-1));
    return F(n-1,w,profit,weight,dp);
}
*/

/*
tabulation:
#include <bits/stdc++.h> 
int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    vector<vector<int>> dp(n,vector<int>(w+1,0));

    for(int W =0;W<=w;W++) dp[0][W] = ((int)( W / weight[0]))*(profit[0]);

    for(int ind =1;ind<=n-1;ind++)
    {
        for(int Wt= 0;Wt<=w;Wt++)
        {
            int notTake = 0 + dp[ind-1][Wt];
            int Take = INT_MIN; 
            if(weight[ind] <= Wt) Take = profit[ind] + dp[ind][Wt-weight[ind]];
            dp[ind][Wt] = max(Take,notTake);  
        }
    }
    
    return dp[n-1][w];
}
*/

/*
Space OPtimization:

#include <bits/stdc++.h> 

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight)
{
    vector<int> prev(w+1,0);

    for(int W =0;W<=w;W++) prev[W] = ((int)( W / weight[0]))*(profit[0]);

    for(int ind =1;ind<=n-1;ind++)
    {
        vector<int> curr(w+1,0);
        for(int Wt= 0;Wt<=w;Wt++)
        {
            int notTake = 0 + prev[Wt];
            int Take = INT_MIN; 
            if(weight[ind] <= Wt) Take = profit[ind] + curr[Wt-weight[ind]];
            curr[Wt] = max(Take,notTake);  
        }
        prev = curr;
    }
    
    return prev[w];
}

*/