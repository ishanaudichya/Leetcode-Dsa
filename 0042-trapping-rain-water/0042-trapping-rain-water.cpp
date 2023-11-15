class Solution {
public:


    //  int trap(vector<int>& height) {
    //     int n = height.size();
    //     int left = 0, right = n-1, rightm = 0, leftm=0, res = 0;
    //     while(left<=right){
    //         leftm = max(height[left], leftm);
    //         rightm = max(height[right], rightm);
    //         res += (leftm<rightm)? leftm-height[left++] : rightm-height[right--];
    //     }
    //     return res;
    // }

    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1, rightm = 0, leftm=0, res = 0;
        while(left<=right){
            if(height[left]<=height[right]) {
                if (height[left]>=leftm) leftm = height[left];
                else res += leftm - height[left];
                left++;
            }
            else{
                if(height[right]>=rightm) rightm = height[right];
                else res+= rightm - height[right];
                right--;
            }
        }
        return res;
    }
};