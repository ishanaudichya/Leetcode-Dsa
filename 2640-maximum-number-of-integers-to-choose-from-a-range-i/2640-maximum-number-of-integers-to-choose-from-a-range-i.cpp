class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> map2(banned.begin(), banned.end());
        long long sum=0;
        int res = 0;
        for(int i=1; i<=n; i++){
            if(map2.count(i)) continue;
            sum+=i;
            if(sum>maxSum) break;
            res++;
        }
        return res;
    }
};