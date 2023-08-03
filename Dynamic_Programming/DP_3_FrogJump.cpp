// Gives TLE After 3 test case
// #include <bits/stdc++.h>
// int F(int n,vector<int> &heights)
// {
//     if(n == 0) return 0;

//     int SingleJ = F(n-1,heights) + abs(heights[n] - heights[n-1]);
//     int DoubleJ = INT_MAX;
//     if(n >1)
//     {
//         DoubleJ = F(n-2,heights) + abs(heights[n] - heights[n-2]);
//     }

//     return min(SingleJ,DoubleJ);
// }
// int frogJump(int n, vector<int> &heights)
// {
//     return F(n-1,heights);
// }

// Memoization Technique
// SC -> O(N) + O(N);
// TC -> O(N)
// #include <bits/stdc++.h>
// int F(int n,vector<int> &heights,vector<int> &dp)
// {
//     if(n == 0) return 0;
//     if(dp[n] != -1) return dp[n];

//     int SingleJ = F(n-1,heights,dp) + abs(heights[n] - heights[n-1]);
//     int DoubleJ = INT_MAX;
//     if(n >1)
//     {
//         DoubleJ = F(n-2,heights,dp) + abs(heights[n] - heights[n-2]);
//     }

//     return dp[n] = min(SingleJ,DoubleJ);
// }
// int frogJump(int n, vector<int> &heights)
// {
//     vector<int> dp(n+1,-1);
//     return F(n-1,heights,dp);
// }

// Tabulation Method to resolve TC->O(N),SC->O(n)
// #include <bits/stdc++.h>
// int frogJump(int n, vector<int> &heights)
// {
//     vector<int> dp(n,0);
//     dp[0] = 0;
//     for(int i=1;i<=n-1;i++)
//     {
//         int fs = dp[i-1] + abs(heights[i] - heights[i-1]);
//         int ss = INT_MAX;

//         if(i>1)
//         {
//             ss = dp[i-2] + abs(heights[i] - heights[i-2]);
//         }

//         dp[i] = min(fs,ss);

//     }
//     return dp[n-1];

// }

// Space Optimisation Method to resolve TC->O(N),SC->O(n)
// #include <bits/stdc++.h>
// int frogJump(int n, vector<int> &heights)
// {
//         int prev2 = 0;
//         int prev = 0;

//         for (int i = 1; i <= n - 1; i++)
//         {
//                 int fs = prev + abs(heights[i] - heights[i - 1]);
//                 int ss = INT_MAX;

//                 if (i > 1)
//                 {
//                         ss = prev2 + abs(heights[i] - heights[i - 2]);
//                 }

//                 int curi = min(fs, ss);
//                 prev2 = prev;
//                 prev = curi;
//         }
//         return prev;
// }

// if the Frog is jumping by the k distance then
// Normal Recusrsive call
// F(ind)
// {
//     if(ind == 0) return 0;

//     int minsteps = INT_MAX;
//     for(int j =1;j<=k;j++)
//     {
//         if(i-j > 0)
//         {
//             jump = f(ind - j) + abs(a[ind] - a[ind - j]);
//             minsteps = min(minsteps,Jump);
//         }
//     }
//     return minsteps;
// }

// Memoinzation
// F(ind,dp)
// {
//     if(ind == 0) return 0;
// dp[0] = 0;
// if(dp[ind] != -1) return dp[ind];
//     int minsteps = INT_MAX;
//     for(int j =1;j<=k;j++)
//     {
//         if(i-j > 0)
//         {
//             jump = f(ind - j) + abs(a[ind] - a[ind - j]);
//             minsteps = min(minsteps,Jump);
//         }
//     }
//     return dp[ind] = min(minsteps,Jump) ;
// }
