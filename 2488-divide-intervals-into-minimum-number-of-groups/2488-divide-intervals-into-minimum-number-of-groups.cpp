class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> a, b;

        for (const auto& interval : intervals) {
            a.push_back(interval[0]);
            b.push_back(interval[1]);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, res = 0;

        for (int start : a) {
            if (start > b[i]) {
                i++;
            } else {
                res++;
            }
        }

        return res;
    }
};