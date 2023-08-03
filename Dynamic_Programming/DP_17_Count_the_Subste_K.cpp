/*
Recursion :
#include <bits/stdc++.h> 
int F(int ind,int sum,vector<int>& num)
{
    if(sum == 0) return 1;
    if(ind == 0) return num[0] == sum;

    int Notpick = F(ind -1,sum,num);
    int pick = 0;
    if(num[ind] <= sum) pick = F(ind -1,sum - num[ind],num);

    return Notpick + pick;

}

int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    return F(n-1,tar,num);
}
*/


/*
Memoization :
#include <bits/stdc++.h> 
int F(int ind,int sum,vector<int>& num,vector<vector<int>> dp)
{
    if(sum == 0) return 1;
    if(ind == 0) return num[0] == sum;
    if(dp[ind][sum] != -1 ) return dp[ind][sum];

    int Notpick = F(ind -1,sum,num,dp);
    int pick = 0;
    if(num[ind] <= sum) pick = F(ind -1,sum - num[ind],num,dp);

    return dp[ind][sum] = Notpick + pick;

}

int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,-1));
    return F(n-1,tar,num,dp);
}
*/


/*
Tabulation:
#include <bits/stdc++.h> 

int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,0));

    for(int i=0;i<n;i++) dp[i][0] = 1;

    if(num[0] <= tar) dp[0][num[0]] = 1;

    for(int ind=1;ind<n;ind++)
    {
        for(int sum = 0;sum<=tar;sum++)
        {
            int Notpick = dp[ind-1][sum];
            int pick = 0;
            if(num[ind] <= sum) pick = dp[ind-1][sum - num[ind]];
            
            dp[ind][sum] = Notpick + pick;
        }
    }

    return dp[n-1][tar];
}

*/









/*
//When indexing Starting 0 ex. if Array is {0,0,1} => target =1,ans should be 4 but not so use the bellow 
//indx == 0 & sum == 0
#include <bits/stdc++.h>
using namespace std;

int F(int ind,int sum,vector<int>& num,vector<vector<int>> &dp)
{
    if(ind == 0)
    {
        if(sum ==0 && num[0] == 0) return 2;
        if(sum ==0 || num[0] ==sum ) return 1;
        
        return 0;
    }
    
    if(dp[ind][sum] != -1 ) return dp[ind][sum];

    int Notpick = F(ind -1,sum,num,dp);
    int pick = 0;
    if(num[ind] <= sum) pick = F(ind -1,sum - num[ind],num,dp);

    return dp[ind][sum] = Notpick + pick;

}

int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,-1));
    return F(n-1,tar,num,dp);
}
*/

/*
//When indexing Starting 0 ex. if Array is {0,0,1} => target =1,ans should be 4 but not so use the bellow 
//indx == 0 & sum == 0
int findWays(vector<int> &num, int tar)
{
    int n = num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,0));

    for(int i=0;i<n;i++) dp[i][0] = 1;

    if(num[0] <= tar) dp[0][num[0]] = 1;

    for(int ind=1;ind<n;ind++)
    {
        for(int sum = 0;sum<=tar;sum++)
        {
            int Notpick = dp[ind-1][sum];
            int pick = 0;
            if(num[ind] <= sum) pick = dp[ind-1][sum - num[ind]];
            
            dp[ind][sum] = Notpick + pick;
        }
    }

    return dp[n-1][tar];
}
*/




