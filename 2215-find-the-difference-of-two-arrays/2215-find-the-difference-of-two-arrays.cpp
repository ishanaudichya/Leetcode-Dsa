class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set <int> m1 (nums1.begin(), nums1.end());
        set <int> m2 (nums2.begin(), nums2.end());
        set <int> toerasem1;
        set <int> toerasem2;
        
        for(auto numb : m1){
            if(m2.find(numb)!=m2.end()){
                toerasem1.insert(numb);
                toerasem2.insert(numb);
            }
            
        }
        
        for(auto numb :toerasem1){
            m1.erase(numb);
        }
        
        for(auto numb :toerasem2){
            m2.erase(numb);
        }
        return {vector<int>(m1.begin(), m1.end()), vector<int> (m2.begin(), m2.end())};
    }
};