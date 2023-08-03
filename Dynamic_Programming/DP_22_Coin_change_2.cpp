
/*
Recursive
long F(int ind,int target,int *a)
{
    if(ind == 0)
    {
        return (target % a[0] == 0);
    }

    long notTake = F(ind -1,target,a);
    long Take = 0;
    if(a[ind] <= target) Take = F(ind,target - a[ind],a);

    return (notTake+Take);
}


long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<int,int>>
    return F(n-1,value,denominations);
}
*/

/*
Memoization
#include<bits/stdc++.h>

long F(int ind,int target,int *a,vector<vector<long>> &dp)
{
    if(ind == 0)
    {
        return (target % a[0] == 0);
    }
    if(dp[ind][target] != -1) return dp[ind][target];

    long notTake = F(ind -1,target,a,dp);
    long Take = 0;
    if(a[ind] <= target) Take = F(ind,target - a[ind],a,dp);

    return dp[ind][target] = (notTake+Take);
}


long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long>> dp(n,vector<long>(value+1,-1));
    return F(n-1,value,denominations,dp);
}
*/

/*
Tabulation
#include<bits/stdc++.h>

long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long>> dp(n,vector<long>(value+1,0));

    //Base
    for(int T =0;T<=value;T++)
    {
        dp[0][T] = (T % denominations[0] == 0);
    }

    for(int ind = 1;ind<=n-1;ind++)
    {
        for(int T =0;T<=value;T++)
        {
            long notTake = dp[ind -1][T];
            long Take = 0;
            if(denominations[ind] <= T) Take = dp[ind][T - denominations[ind] ];

            dp[ind][T] = (notTake+Take);
        }
    }

    return dp[n-1][value];
}
*/

/*
Optimisation
#include<bits/stdc++.h>

long countWaysToMakeChange(int *denominations, int n, int value)
{


    vector<long> prev(value+1,0);
    //Base
    for(int T =0;T<=value;T++)
    {
        prev[T] = (T % denominations[0] == 0);
    }

    for(int ind = 1;ind<=n-1;ind++)
    {
        vector<long> curr(value+1,0);
        for(int T =0;T<=value;T++)
        {
            long notTake = prev[T];
            long Take = 0;
            if(denominations[ind] <= T) Take = curr[T - denominations[ind] ];

           curr[T] = (notTake+Take);
        }
        prev = curr;
    }

    return prev[value];
}

*/
