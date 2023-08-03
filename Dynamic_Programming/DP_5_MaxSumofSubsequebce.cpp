// Normal Recurssive call
// #include <bits/stdc++.h>
// int F(int n,vector<int> & nums)
// {
//     if(n == 0) return nums[n];
//     if(n < 0) return 0;

//     int pick = nums[n] + F(n-2,nums);
//     int notpick = 0 + F(n-1,nums);

//     return max(pick,notpick);
// }

// int maximumNonAdjacentSum(vector<int> &nums){
//    int n = nums.size();
//    return F(n-1,nums);
// }

// Memoization
// #include <bits/stdc++.h>
// int F(int n,vector<int> & nums,vector<int> &dp)
// {
//     if(n == 0) return nums[n];
//     if(n < 0) return 0;

//     if(dp[n] != -1) return dp[n];
//     int pick = nums[n] + F(n-2,nums,dp);
//     int notpick = 0 + F(n-1,nums,dp);

//     return dp[n] = max(pick,notpick);
// }

// int maximumNonAdjacentSum(vector<int> &nums){
//    int n = nums.size();
//    vector<int> dp(n,-1);
//    return F(n-1,nums,dp);
// }

// Tabulation

// #include <bits/stdc++.h>

// int maximumNonAdjacentSum(vector<int> &nums){
//    int n = nums.size();
//    int prev = nums[0];
//    int prev2 = 0;

//    for(int i =1;i<n;i++)
//    {
//        int take = nums[i];
//         if(i>1) take +=  prev2;

//         int nottake = 0 + prev;
//         int curi = max(take,nottake);
//         prev2 = prev;
//         prev = curi;
//    }
//    return prev;
// }