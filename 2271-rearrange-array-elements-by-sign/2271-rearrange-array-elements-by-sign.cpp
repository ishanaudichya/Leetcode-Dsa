class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        queue<int> q;
        queue<int> r;
        for(int i = 0; i<n; i++){
            int sign = nums[i]/abs(nums[i]);
            if ( sign ==1){
                q.push(nums[i]);

            }
            else if (sign == -1){
                r.push(nums[i]);
            }      
        }
        while(!q.empty() || !r.empty()){
                res.push_back(q.front());
                res.push_back(r.front());
                q.pop();
                r.pop();
           
        }
        return res;
    }
};