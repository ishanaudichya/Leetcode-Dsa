class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> hashmap(k, 0);
        
        for(int nums : arr){
            int remainder = (nums % k + k) % k; 
            hashmap[remainder]++;
        }
        
        if(hashmap[0] % 2 != 0) return false;
        
        for(int i = 1; i <= k / 2; i++) {
            if(hashmap[i] != hashmap[k - i]) return false;
        }
        
        return true;
    }
};
