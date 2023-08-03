// https://leetcode.com/problems/maximum-sum-circular-subarray/description/

// https://www.youtube.com/watch?v=wKOnptKng6s&ab_channel=CodeBashers

// int maxSubarraySumCircular(vector<int>& nums) {
//         int total_sum = 0;
//         int cursum1 = 0;
//         int cursum2 = 0;
//         int maxsum_subary = INT_MIN;
//         int minsum_subary = INT_MAX;

//         for(auto i:nums)
//         {
//             total_sum += i;
//             cursum1 += i;
//             cursum2 += i;
//             maxsum_subary = max(maxsum_subary,cursum1);
//             if(cursum1 < 0) cursum1 = 0;
//             minsum_subary = min(minsum_subary,cursum2);
//             if(cursum2 > 0) cursum2 = 0;
//         }
//         return (total_sum == minsum_subary)? maxsum_subary:max(maxsum_subary,total_sum - minsum_subary);
//     }