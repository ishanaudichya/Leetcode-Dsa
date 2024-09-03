class Solution {
public:
    int getLucky(string s, int k) {
        int res = 0;
        for(char c : s){
            int z = c - 'a'+1;
            while(z>0){
                res += z%10;
                z=z/10;
            }
        }
        for(int i=1; i<k;i++){
            int count = 0;
            while(res>0){
                count +=res%10;
                res=res/10;
            }
            res = count;
        }
        return res;
    }
};