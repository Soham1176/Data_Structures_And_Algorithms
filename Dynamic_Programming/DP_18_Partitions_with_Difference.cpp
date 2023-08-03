/*
Memoization:
#include <bits/stdc++.h> 

int mod = (int)(1e9+7);
int F(int ind,int sum,vector<int>& num,vector<vector<int>> & dp)
{
    if(ind == 0)
    {
        if(sum ==0 && num[0] == 0) return 2;
        if(sum ==0 || sum == num[0] ) return 1;
        
        return 0;
    }
    
    if(dp[ind][sum] != -1 ) return dp[ind][sum];

    int Notpick = F(ind -1,sum,num,dp);
    int pick = 0;
    if(num[ind] <= sum) pick = F(ind -1,sum - num[ind],num,dp);

    return dp[ind][sum] = (Notpick + pick) % mod;

}

int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,-1));
    return F(n-1,tar,num,dp);
}


int countPartitions(int n, int d, vector<int> &arr) {
    int totalsum = 0;
    for(auto & it:arr) totalsum += it;
    if(totalsum - d <0 || (totalsum - d)% 2 !=0) return 0;

    return findWays(arr, (totalsum - d) /2 ); 

}
*/

/*
Tabulation:

#include <bits/stdc++.h> 

int mod = (int)(1e9+7);

int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,0));

    if(num[0] == 0) dp[0][0] =2;
    else dp[0][0] = 1;


    if(num[0] != 0 && num[0] <= tar) dp[0][num[0]] = 1;

    for(int ind=1;ind<n;ind++)
    {
        for(int sum = 0;sum<=tar;sum++)
        {
            int Notpick = dp[ind-1][sum];
            int pick = 0;
            if(num[ind] <= sum) pick = dp[ind-1][sum - num[ind]];
            
            dp[ind][sum] = (Notpick + pick) % mod;
        }
    }

    return dp[n-1][tar];
}


int countPartitions(int n, int d, vector<int> &arr) {
    int totalsum = 0;
    for(auto & it:arr) totalsum += it;
    if(totalsum - d <0 || (totalsum - d)% 2 !=0) return false;

    return findWays(arr, (totalsum - d) /2 ); 

}

*/


/*
Space Optimisation:
#include <bits/stdc++.h> 

int mod = (int)(1e9+7);

int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    vector<int> prev(tar +1,0);

    if(num[0] == 0) prev[0] =2;
    else prev[0] = 1;


    if(num[0] != 0 && num[0] <= tar) prev[num[0]] = 1;

    for(int ind=1;ind<n;ind++)
    {
        vector<int> cur(tar+1,0);
        for(int sum = 0;sum<=tar;sum++)
        {
            int Notpick = prev[sum];
            int pick = 0;
            if(num[ind] <= sum) pick = prev[sum - num[ind]];
            
            cur[sum] = (Notpick + pick) % mod;
        }
        prev = cur;
    }

    return prev[tar];
}


int countPartitions(int n, int d, vector<int> &arr) {
    int totalsum = 0;
    for(auto & it:arr) totalsum += it;
    if(totalsum - d <0 || (totalsum - d)% 2 !=0) return false;

    return findWays(arr, (totalsum - d) /2 ); 

}
*/