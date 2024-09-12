class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> alphabet(26);
        for(char c:allowed){
            alphabet[c-'a']=true;
        }
        int res=0;
        for(string word : words){
            bool flag=true;
            for(char letter:word){
                if(!alphabet[letter-'a']){
                    flag=false;
                }
                 
            }
            if(flag) res++;

        }
        return res;
    }
};




