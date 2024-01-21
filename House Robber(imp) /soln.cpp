
// **Top-Down(Code 1)**
class Solution {
public:
    vector<int> dp;
    int maxRobbery(int i, vector<int>& nums){
        if(i < 0) return 0;

        if(dp[i] != -1) return dp[i];

        int ans = max(nums[i] + maxRobbery(i-2, nums), maxRobbery(i-1, nums));
        return dp[i] = ans;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        dp = vector<int>(n+1, -1);
        return maxRobbery(n-1, nums);
    }
};

// **Bootom-Up(Code 2)**

// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> dp = vector<int>(n+1, 0);
//         dp[0] = nums[0];
//         if(n ==1) return dp[0];

//         dp[1] = max(nums[0], nums[1]);
//         for(int i=2; i<n; i++){
//             dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
//         }
//         return dp[n-1];
//     }
// };

// **Space optimization(Code 3)**
// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         // vector<int> dp = vector<int>(n+1, 0);
//         int prev2 = nums[0];
//         // dp[0] = nums[0];
//         if(n ==1) return prev2;

//         int prev1 = max(nums[0], nums[1]);
//         for(int i=2; i<n; i++){
//             int cur = max(nums[i] + prev2, prev1);
//             prev2 = prev1;
//             prev1 = cur;
//         }
//         return prev1;
//     }
// };
