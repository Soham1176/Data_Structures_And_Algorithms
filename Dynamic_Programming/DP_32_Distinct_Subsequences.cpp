/*
Recursion:
class Solution {
public:

    int F(int i,int j,string s,string t)
    {
        if(j<0) return 1;
        if(i<0) return 0;

        if(s[i] == t[j]) return (F(i-1,j-1,s,t)+F(i-1,j,s,t));

        return F(i-1,j,s,t);
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        return F(n-1,m-1,s,t);
    }
};
*/

/*
Memoization:(0 -based indexing)
class Solution {
public:

    int F(int i,int j,string s,string t, vector<vector<int>> & dp)
    {
        if(j<0) return 1;
        if(i<0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i] == t[j]) return dp[i][j] = (F(i-1,j-1,s,t,dp)+F(i-1,j,s,t,dp));

        return dp[i][j] = F(i-1,j,s,t,dp);
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n,vector<int>(m+1,-1));
        return F(n-1,m-1,s,t,dp);
    }
};
*/

/*
Memoization:(1-based indexing means -1 -> 0 & n-1-> n but i->i-1 )
class Solution {
public:

    int F(int i,int j,string s,string t, vector<vector<int>> & dp)
    {
        if(j==0) return 1;
        if(i==0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i-1] == t[j-1]) return dp[i][j] = (F(i-1,j-1,s,t,dp)+F(i-1,j,s,t,dp));

        return dp[i][j] = F(i-1,j,s,t,dp);
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return F(n,m,s,t,dp);
    }
};
*/

/*
Tabulation:
class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        //base case
        for(int i=0;i<=n;i++) dp[i][0] = 1;//j=0 return 1
        for(int j=1;j<=m;j++) dp[0][j] = 0;//i=0 return 0

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                else dp[i][j] = dp[i-1][j];
            }
        }

        return dp[n][m];
    }
};

*/

/*
Space Optimisation wala code: 2 1d arrays
class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<double> prev(m+1,0),curr(m+1,0);

        //base
        prev[0] = curr[0] = 1;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1] == t[j-1]) curr[j] = prev[j-1] + prev[j];
                else curr[j] = prev[j];
            }
            prev = curr;
        }

        return (int)prev[m];
    }
};
*/

/*
Spaced OPtimization wala using only 1 1D array wala code
class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<double> prev(m+1,0);

        //base
        prev[0] = 1;

        for(int i=1;i<=n;i++)
        {
            for(int j=m;j>=1;j--)
            {
                if(s[i-1] == t[j-1]) prev[j] = prev[j-1] + prev[j];
            }
        }

        return (int)prev[m];
    }
};

*/