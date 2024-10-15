class Solution {
public:
    long long minimumSteps(string s) {
        long long swaps = 0; 
        int li = 0;
        int ri = s.length() - 1;
        while (li < ri) {
            if (s[li] == '1') {
                if (s[ri] == '0') {
                    swaps += (long long)(ri - li);
                    li++;
                }
                ri--;
            } else {
                if (s[ri] == '1') ri--;
                li++;
            }
        }
        return swaps;
    }
};
