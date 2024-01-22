class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int  n = s.size();
        unordered_set<char> charSet;
        int left=0;
        int maxL=0;
        for(int right =0; right<n;right++){
            if(charSet.count(s[right])==0){
                charSet.insert(s[right]);
                maxL = max(maxL, right - left +1);
            }
            else{
                while(charSet.count(s[right])){
                    charSet.erase(s[left]);
                    left++;
                }
                charSet.insert(s[right]);

            }
        }
        return maxL;
    }
};