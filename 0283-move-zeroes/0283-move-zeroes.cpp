class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>temp (nums.size(),0);
        int k=0;
        for(int i =0; i<nums.size();i++){
            if(nums[i]!=0){
                temp[k] = nums[i];
                k++;
            }
        }
        swap(nums, temp);
    }
};