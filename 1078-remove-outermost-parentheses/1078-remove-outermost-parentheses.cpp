class Solution {
public:
    string removeOuterParentheses(string s) {
        int iter= 0;
        string res ;
        for( auto i : s){
            if(i=='('){
                if(iter>0){
                    res+='(';
                }
                iter++;
            }
            else{
                iter--;
                if(iter>0){
                    res+=")";
                }
            }
        }
        return res;
    }
};