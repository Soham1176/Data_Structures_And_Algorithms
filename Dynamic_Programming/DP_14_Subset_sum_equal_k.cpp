// https://www.youtube.com/watch?v=s6FhG--P7z0&ab_channel=TusharRoy-CodingMadeSimple


/*
Recursive code:
#include <bits/stdc++.h>

bool F(int ind,int target,vector<int> & arr)
{
    if(target==0) return true;
    if(ind == 0) return arr[0] == target;

    bool notTaken = F(ind-1,target,arr);

    bool taken = false;
    if(arr[ind]<=target) taken = F(ind-1,target-arr[ind],arr);
    return notTaken||taken;
}


bool subsetSumToK(int n, int k, vector<int> &arr) {
   return F(n-1,k,arr);
}
*/

/*
Memoization:
#include <bits/stdc++.h>
using namespace std;

bool F(int ind,int target,vector<int> & arr,vector<vector<int>> &dp)
{
    if(target==0) return true;
    if(ind == 0) return arr[0] == target;

    if(dp[ind][target] != -1) return dp[ind][target];

    bool notTaken = F(ind-1,target,arr,dp);

    bool taken = false;
    if(arr[ind]<=target) taken = F(ind-1,target-arr[ind],arr,dp);
    return dp[ind][target] =  notTaken||taken ;
}


bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(n,vector<int>(k+1,-1));
   return F(n-1,k,arr,dp);
}
*/

/*
Tabulation:
#include <bits/stdc++.h>
bool subsetSumToK(int n, int k, vector<int> &arr) {

    vector<vector<bool>> dp(n,vector<bool>(k+1,false));

    for(int i=0; i<n; i++){
        dp[i][0] = true;
    }

    if(arr[0]<=k)
        dp[0][arr[0]] = true;

    for(int ind = 1; ind<n; ind++){
        for(int target= 1; target<=k; target++){

            bool notTaken = dp[ind-1][target];

            bool taken = false;
                if(arr[ind]<=target)
                    taken = dp[ind-1][target-arr[ind]];

            dp[ind][target]= notTaken||taken;
        }
    }

    return dp[n-1][k];


}
*/

/*
Space Optimisation:
vector<bool> prev(k+1,false);

    prev[0] = true;

    if(arr[0]<=k)
        prev[arr[0]] = true;

    for(int ind = 1; ind<n; ind++){
        vector<bool> cur(k+1,false);
        cur[0] = true;
        for(int target= 1; target<=k; target++){
            bool notTaken = prev[target];

            bool taken = false;
                if(arr[ind]<=target)
                    taken = prev[target-arr[ind]];

            cur[target]= notTaken||taken;
        }
        prev = cur;
    }

    return prev[k];
*/