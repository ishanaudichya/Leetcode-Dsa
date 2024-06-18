class Solution {
public:
    int myAtoi(string s) {
        int len = s.size();
        int i = 0;
        int sign = 1;
        long num=0;
        while(s[i]==' '){
            i++;
        }
        if(s[i]=='+'){
            i++;
        }
        else if(s[i]=='-'){
            sign=-1;
            i++;
        }
        while(i<len){
            if(s[i]>='0' &&s[i]<='9'){
                num = num*10 + (s[i]-'0');
                if(num>INT_MAX && sign==-1){
                    return INT_MIN;
                }
                else if(num>INT_MAX && sign==1){
                    return INT_MAX;
                }
                i++;
            }
            else return num*sign;
        }
             return num*sign;
    }
};