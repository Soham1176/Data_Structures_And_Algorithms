/*
recursive:
#include <bits/stdc++.h>
using namespace std;
bool F(int i,int j,string &s,string&t)
{
    if(i<0 && j<0) return true;
    if(i<0 && j>=0) return false;
    if(j<0 && i>=0)
    {
        for(int z=0;z<=i;z++)
        {
            if(s[z] != '*') return false;
        }
        return true;
    } 

    if(s[i] == t[j] || s[i] == '?')
    {
        return F(i-1,j-1,s,t);
    }
    if(s[i] =='*')
    {
        return F(i-1,j,s,t) | F(i,j-1,s,t);
    }
    return false;
}
bool wildcardMatching(string s, string t)
{
    int n = s.size();
    int m = t.size();
    F(n-1,m-1,s,t);
}
*/
//Tabulation:
#include <bits/stdc++.h>
using namespace std;

bool isAllStars(string & S1, int i) {
  for (int j = 0; j <= i; j++) {
    if (S1[j] != '*')
      return false;
  }
  return true;
}

bool wildcardMatchingUtil(string & S1, string & S2, int i, int j, vector < vector < bool >> & dp) {

  //Base Conditions
  if (i < 0 && j < 0)
    return true;
  if (i < 0 && j >= 0)
    return false;
  if (j < 0 && i >= 0)
    return isAllStars(S1, i);

  if (dp[i][j] != -1) return dp[i][j];

  if (S1[i] == S2[j] || S1[i] == '?')
    return dp[i][j] = wildcardMatchingUtil(S1, S2, i - 1, j - 1, dp);

  else {
    if (S1[i] == '*')
      return wildcardMatchingUtil(S1, S2, i - 1, j, dp) || wildcardMatchingUtil(S1, S2, i, j - 1, dp);
    else return false;
  }
}

bool wildcardMatching(string & S1, string & S2) {

  int n = S1.size();
  int m = S2.size();

  vector < vector < bool >> dp(n, vector < bool > (m, -1));
  return wildcardMatchingUtil(S1, S2, n - 1, m - 1, dp);

}

int main() {

  string S1 = "ab*cd";
  string S2 = "abdefcd";

  if (wildcardMatching(S1, S2))
    cout << "String S1 and S2 do match";
  else cout << "String S1 and S2 do not match";
}

//Tabulation:
#include <bits/stdc++.h>

using namespace std;

bool isAllStars(string & S1, int i) {

  // S1 is taken in 1-based indexing
  for (int j = 1; j <= i; j++) {
    if (S1[j - 1] != '*')
      return false;
  }
  return true;
}

bool wildcardMatching(string & S1, string & S2) {

  int n = S1.size();
  int m = S2.size();

  vector < vector < bool >> dp(n + 1, vector < bool > (m, false));

  dp[0][0] = true;

  for (int j = 1; j <= m; j++) {
    dp[0][j] = false;
  }
  for (int i = 1; i <= n; i++) {
    dp[i][0] = isAllStars(S1, i);
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {

      if (S1[i - 1] == S2[j - 1] || S1[i - 1] == '?')
        dp[i][j] = dp[i - 1][j - 1];

      else {
        if (S1[i - 1] == '*')
          dp[i][j] = dp[i - 1][j] || dp[i][j - 1];

        else dp[i][j] = false;
      }
    }
  }

  return dp[n][m];

}

int main() {

  string S1 = "ab*cd";
  string S2 = "abdefcd";

  if (wildcardMatching(S1, S2))
    cout << "String S1 and S2 do match";
  else cout << "String S1 and S2 do not match";
}

/*
//Space optimized
#include <bits/stdc++.h>

using namespace std;

bool isAllStars(string & S1, int i) {

  // S1 is taken in 1-based indexing
  for (int j = 1; j <= i; j++) {
    if (S1[j - 1] != '*')
      return false;
  }
  return true;
}

bool wildcardMatching(string & S1, string & S2) {

  int n = S1.size();
  int m = S2.size();

  vector < bool > prev(m + 1, false);
  vector < bool > cur(m + 1, false);

  prev[0] = true;

  for (int i = 1; i <= n; i++) {
    cur[0] = isAllStars(S1, i);
    for (int j = 1; j <= m; j++) {

      if (S1[i - 1] == S2[j - 1] || S1[i - 1] == '?')
        cur[j] = prev[j - 1];

      else {
        if (S1[i - 1] == '*')
          cur[j] = prev[j] || cur[j - 1];

        else cur[j] = false;
      }
    }
    prev = cur;
  }

  return prev[m];

}

int main() {

  string S1 = "ab*cd";
  string S2 = "abdefcd";

  if (wildcardMatching(S1, S2))
    cout << "String S1 and S2 do match";
  else cout << "String S1 and S2 do not match";
}

*/