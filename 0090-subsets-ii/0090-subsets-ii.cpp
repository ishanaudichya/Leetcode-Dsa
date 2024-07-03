class Solution {
public:
void subs(vector<int>& nums, vector<vector<int>>& res, vector<int>& sub, int idx, int n) {
        res.push_back(sub);
        for(int i=idx;i<n;i++){
            if(i!=idx && nums[i]==nums[i-1]){
                continue;
            }
            sub.push_back(nums[i]);
            subs(nums, res, sub,i+1,n);
            sub.pop_back();
        }
        return;
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        vector<int> sub;
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        subs(nums, res, sub, 0, n);
        return res;
    }
};