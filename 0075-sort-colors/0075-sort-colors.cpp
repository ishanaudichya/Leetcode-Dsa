class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int white = 0;
        for(auto i : nums){
            if(i==0){
                red++;
            }
            else if(i==1){
                white++;
            }
        }
        for(int i=0;i<red;i++){
            nums[i]=0;
        }
        for(int i=red;i<white+red;i++){
            nums[i]=1;
        }
        for(int i=red+white;i<nums.size();i++){
            nums[i]=2;
        }
        
    }
};