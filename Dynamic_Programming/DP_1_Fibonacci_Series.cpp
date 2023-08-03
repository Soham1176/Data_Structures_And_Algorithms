#include <bits/stdc++.h>
using namespace std;

// This is Memoization Technique TC->O(N) , SC -> O(N) + O(N)
int F(int n, vector<int> &dp)
{
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = F(n - 1, dp) + F(n - 2, dp);
}

// For the tabulation TC->O(N) , SC -> O(N)
int F_1(int n, vector<int> &dp)
{
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    int ans_1, ans_2;
    ans_1 = F(n, dp);
    cout << ans_1 << endl;
    ans_2 = F_1(n, dp);
    cout << ans_2 << endl;

    // For most optimised Soln TC->O(N) , SC -> O(1)
    vector<int> dp_1(n + 1);
    int prev2 = 0;
    int prev = 1;
    for (int i = 2; i <= n; i++)
    {
        dp_1[i] = prev2 + prev;
        prev2 = prev;
        prev = dp_1[i];
    }

    cout << prev;
}