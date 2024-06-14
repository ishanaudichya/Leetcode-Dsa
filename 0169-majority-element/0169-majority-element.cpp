class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=nums[0];
        int count = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==res){
                count++;
            }
            else if(nums[i]!=res && count==0){
                res=nums[i];
                count++;
            }
            else{
                count--;
            }
        }
        return res;
    }
};