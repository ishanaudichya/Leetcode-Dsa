class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0 ; i < words.size() ; i++)
        {
            int isValid = 0;
            int n = words[i].size();
            for(int j = 0 ; j < n/2 ; j++)
            {
                if(words[i][j] != words[i][n-j-1])
                {
                    isValid = 1;
                    break;
                }
            }
            if(isValid == 0)
                return words[i];
                
        }
        return "";
    }
};