// Recursive wala code;
// #include<bits/stdc++.h>

// int F(int day,int last,vector<vector<int>> & points)
// {
//     if(day == 0)
//     {
//         int maxi = 0;
//         for(int task = 0;task<=2;task++)
//         {
//             if(task != last)
//             {
//                 maxi = max(maxi , points[0][task]);
//             }
//         }
//         return maxi;
//     }

//     int maxi = 0;
//     for(int task = 0;task<=2;task++)
//     {
//         if(task != last)
//         {
//             int point = points[day][task] + F(day-1,task,points);
//             maxi = max(maxi , point);
//         }
//     }

//     return maxi;
// }

// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     return F(n-1,3,points);
    
// }


// Memoization 
// #include<bits/stdc++.h>

// int F(int day,int last,vector<vector<int>> & points,vector<vector<int>> &dp)
// {
//     if(day == 0)
//     {
//         int maxi = 0;
//         for(int task = 0;task<=2;task++)
//         {
//             if(task != last)
//             {
//                 maxi = max(maxi , points[0][task]);
//             }
//         }
//         return maxi;
//     }

//     if(dp[day][last] != -1) return dp[day][last];
    
//     int maxi = 0;
//     for(int task = 0;task<=2;task++)
//     {
//         if(task != last)
//         {
//             int point = points[day][task] + F(day-1,task,points,dp);
//             maxi = max(maxi , point);
//         }
//     }

//     return dp[day][last] =  maxi;
// }

// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     vector<vector<int>> dp(n,vector<int>(4,-1));
//     return F(n-1,3,points,dp);
    
// }


// Most Optimised soln
// int ninjaTraining(int n, vector<vector<int>> &points)
// {
//     vector<int> prev(4,0); //create a array for only Day 0

//     prev[0] = max(points[0][1],points[0][2]);
//     prev[1] = max(points[0][0],points[0][2]);
//     prev[2] = max(points[0][0],points[0][1]);
//     prev[3] = max(points[0][0],max(points[0][1],points[0][2]));

//     for(int day=1;day<n;day++)
//     {
//         vector<int> temp(4,0);  //for each day a temp will be created
//         for(int last = 0;last<4;last++)
//         {
//             temp[last] = 0;

//             for(int task = 0;task<=2;task++)
//             {
//                 if(task != last)
//                 { //prev = dp[day-1] as previous day
//                     temp[last] = max(temp[last],points[day][task] + prev[task]); 
//                 }
//             }
//         }
//         prev = temp;
//     }
//     return prev[3];
    
// }