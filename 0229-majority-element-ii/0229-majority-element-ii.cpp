class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
       
        vector  <int>res;
        int c1=0;
        int c2=0;
        int r1=0;
        int r2=0;
        for(auto i : nums){
            if(c1==0 && i!=r2){
                r1=i;
                c1++;
            }
            else if(c2 ==0 && i!=r1){
                r2=i;
                c2++;
            }
            else if(i==r1){
                c1++;
            }
        
            else if(i==r2){
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
     
        c1 = 0;
        c2 = 0;
        for(auto i : nums){
            if(i==r1){
                c1++;
            }else if(i==r2){
                c2++;
            }
        }
         if(c1>n/3){
            res.push_back(r1);
        }
        if(c2>n/3){
            res.push_back(r2);
        }
        return res;

    }
};