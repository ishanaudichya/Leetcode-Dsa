class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));
        prime[1] = false;
        prime[0] = false;

        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        vector<vector<int>> ans; 
        for(int i=2;i <= (n-1);i++){
            int j = n - i; 
            if(prime[i] && prime[j] && i <= j){
                vector<int> temp = {i,j}; 
                ans.push_back(temp);
            }
        }
        return ans;
    }
};