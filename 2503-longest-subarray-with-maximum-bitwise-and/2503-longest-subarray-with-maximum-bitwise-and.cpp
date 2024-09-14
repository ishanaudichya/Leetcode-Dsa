class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi =*max_element(nums.begin(), nums.end());
        int res=0;
        int i=0;
        for(int nu:nums){
            if(maxi==nu) {
                i++;
            }else{
                res=max(res,i);
                i=0;
            }
        }

        return max(res,i);
    }
};