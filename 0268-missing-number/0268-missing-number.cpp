class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int output=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            output +=i;
            output-=nums[i];
        }
        output+= nums.size();
        return output;
    }
};