class Solution {
public:
    string largestOddNumber(string num) {
        int perfect= -1;
        int n = num.size();
        for(int i=0; i<n; i++){
            if((num[i]-'0')%2==1) perfect=i;
        }
        return num.substr(0, perfect+1);
    }
};