class Solution {
public:
    bool isPalin(string s, int a, int b){
        while(a<b){
            if(s[a++]!=s[b--]){
                return false;
            }
        }
        return true;
    }
    void recursion(int index, string s , vector<string> &curr,vector<vector<string>> &res ){
        if(index==s.size()){
            res.push_back(curr);
            return;
        }
        for(int i=index; i<s.size(); ++i){
            if(isPalin(s, index, i)){
                curr.push_back(s.substr(index, i-index+1));
                recursion(i+1, s, curr, res);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> curr;
        recursion(0, s, curr, res);
        return res;
    }
};