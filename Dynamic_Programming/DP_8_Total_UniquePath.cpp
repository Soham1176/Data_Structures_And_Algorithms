// Recursive Way TC -> O(2^(m*n)) , SC-> O((m-1) + (n-1));
// #include <bits/stdc++.h> 
// int F(int i, int j)
// {

// 	if(i == 0 && j==0) return 1;
// 	if(i<0 || j<0) return 0;

// 	int up = F(i-1,j);
// 	int lft = F(i,j-1);

// 	return (up + lft);
// }
// int uniquePaths(int m, int n) {
// 	return F(m-1,n-1);
// }

// Memoiztion Way TC -> O(m*n) , SC-> O((m-1) + (n-1)) + O(N*M);
// #include <bits/stdc++.h> 
// int F(int i, int j,vector<vector<int>> & dp)
// {

// 	if(i == 0 && j==0) return 1;
// 	if(i<0 || j<0) return 0;

// 	if(dp[i][j] != -1) return dp[i][j];
// 	int up = F(i-1,j,dp);
// 	int lft = F(i,j-1,dp);

// 	return dp[i][j] = (up + lft);
// }
// int uniquePaths(int m, int n) {
// 	vector<vector<int>> dp(m,vector<int>(n,-1));
// 	return F(m-1,n-1,dp);
// }

// Tabulation Way TC -> O(m*n) , SC-> O(N*M);

// for(int i=0; i<m ;i++){
//       for(int j=0; j<n; j++){
          
//           //base condition
//           if(i==0 && j==0){
//               dp[i][j]=1;
//               continue;
//           }
          
//           int up=0;
//           int left = 0;
          
//           if(i>0) 
//             up = dp[i-1][j];
//           if(j>0)
//             left = dp[i][j-1];
            
//           dp[i][j] = up+left;
//       }
//   }
  
//   return dp[m-1][n-1];
// }

// Space Optimisation:SC->O(N)
// #include <bits/stdc++.h> 
// int uniquePaths(int m, int n) {
// 	vector<int> prev(n,0);
//     for(int i=0; i<m; i++){
//         vector<int> temp(n,0);
//         for(int j=0; j<n; j++){
//             if(i==0 && j==0){
//                 temp[j]=1;
//                 continue;
//             }
            
//             int up=0;
//             int left =0;
            
//             if(i>0)
//                 up = prev[j];
//             if(j>0)
//                 left = temp[j-1];
                
//             temp[j] = up + left;
//         }
//         prev = temp;
//     }
    
//     return prev[n-1];
// }

// Recursive
#include <bits/stdc++.h>

using namespace std;

int countWaysUtil(int i, int j, vector<vector<int> > &dp) {
  if(i==0 && j == 0)
    return 1;
  if(i<0 || j<0)
    return 0;
  if(dp[i][j]!=-1) return dp[i][j];
    
  int up = countWaysUtil(i-1,j,dp);
  int left = countWaysUtil(i,j-1,dp);
  
  return dp[i][j] = up+left;
  
}

int countWays(int m, int n){
    vector<vector<int> > dp(m,vector<int>(n,-1));
    return countWaysUtil(m-1,n-1,dp);
    
}

int main() {

  int m=3;
  int n=2;
  
  cout<<countWays(m,n);
}

// --------------Tabulation
#include <bits/stdc++.h>

using namespace std;

int countWaysUtil(int m, int n, vector<vector<int> > &dp) {
  for(int i=0; i<m ;i++){
      for(int j=0; j<n; j++){
          
          //base condition
          if(i==0 && j==0){
              dp[i][j]=1;
              continue;
          }
          
          int up=0;
          int left = 0;
          
          if(i>0) 
            up = dp[i-1][j];
          if(j>0)
            left = dp[i][j-1];
            
          dp[i][j] = up+left;
      }
  }
  
  return dp[m-1][n-1];

  
}

int countWays(int m, int n){
    vector<vector<int> > dp(m,vector<int>(n,-1));
    return countWaysUtil(m,n,dp);
    
}

int main() {

  int m=3;
  int n=2;
  
  cout<<countWays(m,n);
}

// Space optimised
#include <bits/stdc++.h>

using namespace std;

int countWays(int m, int n){
    vector<int> prev(n,0);
    for(int i=0; i<m; i++){
        vector<int> temp(n,0);
        for(int j=0; j<n; j++){
            if(i==0 && j==0){
                temp[j]=1;
                continue;
            }
            
            int up=0;
            int left =0;
            
            if(i>0)
                up = prev[j];
            if(j>0)
                left = temp[j-1];
                
            temp[j] = up + left;
        }
        prev = temp;
    }
    
    return prev[n-1];
    
}

int main() {

  int m=3;
  int n=2;
  
  cout<<countWays(m,n);
}