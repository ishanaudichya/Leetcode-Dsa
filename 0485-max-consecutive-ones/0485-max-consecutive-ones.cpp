class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int res = 0;
        for(int i=0; i<n;i++){
            if (nums[i]==1){
                j++;
            }
            else{
                j=0;
            }
            res = max(res,j);
        }
        return res;
    }
};