class Solution {
public:
    int candy(vector<int>& rating) {
        int n = rating.size();
        vector<int> given(n, 1);  

        for (int i = 1; i < n; ++i) {
            if (rating[i] > rating[i - 1]) {
                given[i] = given[i - 1] + 1;
            }
        }

        for (int i = n - 2; i >= 0; --i) {
            if (rating[i] > rating[i + 1]) {
                given[i] = max(given[i], given[i + 1] + 1);
            }
        }
       
        return accumulate(given.begin(), given.end(), 0);
    }
};