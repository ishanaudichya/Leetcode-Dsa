class Solution {
public:
    int lis(int index, int prev,vector<int>& nums, int n, vector<vector<int>> &dp ){
        if(index == n) return 0;
        if(dp[index][prev+1]!=-1) return dp[index][prev+1];
        int len = lis( index+1, prev, nums,  n, dp );
        if(prev==-1 || nums[prev]< nums[index]){
            len = max(len, 1+lis(index+1, index,  nums,  n,dp));
        }
        return dp[index][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp (n, vector<int>(n+1, -1));
        return lis(0, -1, nums, n,dp);
    }
};