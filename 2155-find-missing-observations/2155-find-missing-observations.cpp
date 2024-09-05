class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int total = 0;
        int m = rolls.size();
        for(int it : rolls){
            total+=it;
        }
        int remain = mean*(m+n) - total;
        int init = remain/n;
        if (remain<0 || remain>6*n || init == 0) return {};
        vector<int> res(n,init);
        remain= remain - n*init;
        int i=0;
        while(remain!=0){
            res[i]++;
            remain--;
            i++;
        }
        return res;
        

    }
};