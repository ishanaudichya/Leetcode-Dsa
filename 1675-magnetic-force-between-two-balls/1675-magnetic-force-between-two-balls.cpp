class Solution {
public:
    bool placable(vector<int>& pos, int dist, int balls) {
        int totalplaced = 1;
        int lastplaced = pos[0];
        for(int i = 1; i < pos.size(); i++) {
            if(pos[i] - lastplaced >= dist) {
                totalplaced++;
                lastplaced = pos[i];
            }
            if(totalplaced >= balls) {
                return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int l = 1; 
        int r = position.back() - position[0];  
        int ans = 0;

        while(l <= r) {
            int mid = l + (r - l) / 2;
            if(placable(position, mid, m)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};
