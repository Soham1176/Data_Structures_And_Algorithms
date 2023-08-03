#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maxi = INT_MIN;
    for (auto it : nums)
    {
        sum = sum + it;
        maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int maxSum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum = sum + arr[k];
    //             // cout<<arr[k]<<" ";
    //         }
    //         // cout<<endl;
    //         maxSum = max(maxSum, sum);
    //     }
    // }
    // cout << maxSum;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    return maxSubArray(nums);
    
}