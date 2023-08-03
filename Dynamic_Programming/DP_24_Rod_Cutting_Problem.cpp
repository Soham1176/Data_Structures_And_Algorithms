/*
Recursion:
#include<bits/stdc++.h>
using namespace std;

int F(int ind,int N,vector<int> &price)
{
    if(ind ==0) return (N*price[0]);
    int notTake = 0 + F(ind-1,N,price);
    int Take = INT_MIN;
    int rodlenght = ind + 1;
    if(rodlenght <= N ) Take = price[ind] + F(ind,N-rodlenght,price);

    return dp[ind][N] = max(notTake,Take);

}
int cutRod(vector<int> &price, int n)
{
    int N = price.size();
    return F(N-1,n,price);
}

*/

/*
Memoization:
#include<bits/stdc++.h>
using namespace std;

int F(int ind,int N,vector<int> &price,vector<vector<int>> &dp)
{
    if(ind ==0) return (N*price[0]);
    if(dp[ind][N] != -1) return dp[ind][N];
    int notTake = 0 + F(ind-1,N,price,dp);
    int Take = INT_MIN;
    int rodlenght = ind + 1;
    if(rodlenght <= N ) Take = price[ind] + F(ind,N-rodlenght,price,dp);

    return dp[ind][N] = max(notTake,Take);

}
int cutRod(vector<int> &price, int n)
{
    int N = price.size();
    vector<vector<int>> dp(N,vector<int>(N+1,-1));
    return F(N-1,n,price,dp);
}
*/

/*
Tabulation:
#include<bits/stdc++.h>
using namespace std;

int cutRod(vector<int> &price, int n)
{
    int N = price.size();
    vector<vector<int>> dp(N,vector<int>(N+1,0));

    for(int N =0;N<=n;N++) dp[0][N] = N*price[0];

    for(int ind =1;ind<=n-1;ind++)
    {
        for(int N =0;N<=n;N++)
        {
            int notTake = 0 + dp[ind -1][N];
            int Take = INT_MIN;
            int rodlenght = ind + 1;
            if(rodlenght <= N ) Take = price[ind] + dp[ind][N-rodlenght];
            dp[ind][N] = max(notTake,Take);
        }
    }
    return dp[N-1][n];
}
*/

/*
Space optimisation:

#include<bits/stdc++.h>
using namespace std;

int cutRod(vector<int> &price, int n)
{
    int N = price.size();
    vector<int> prev(n+1,0);

    for(int N =0;N<=n;N++) prev[N] = N*price[0];

    for(int ind =1;ind<=n-1;ind++)
    {
        for(int N =0;N<=n;N++)
        {
            int notTake = 0 + prev[N];
            int Take = INT_MIN;
            int rodlenght = ind + 1;
            if(rodlenght <= N ) Take = price[ind] + prev[N-rodlenght];
            prev[N] = max(notTake,Take);
        }
    }
    return prev[n];
}


*/