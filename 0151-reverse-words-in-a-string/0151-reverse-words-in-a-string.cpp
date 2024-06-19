class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int l=0;
        int r=0;
        int curr=0;
        while(curr<n){
            while(curr<n && s[curr]==' ')curr++;
            if(curr==n) break;
            while(curr<n && s[curr]!=' '){
                s[r++]=s[curr++];
            }
            reverse(s.begin()+l,s.begin()+r);
            s[r++]=' ';
            l=r;
            curr++;
        }
        s.resize(r-1);
        return s;
    }
};