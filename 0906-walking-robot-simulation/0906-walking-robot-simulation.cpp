class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0, y = 0;
        int maxi = 0;
        vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int directionval = 0;

        set<pair<int, int>> obs;
        for (const auto& it : obstacles) {
            obs.insert({it[0], it[1]});
        }

        for (int command : commands) {
            if (command == -1) {
                directionval = (directionval + 1) % 4; 
            } else if (command == -2) {
                directionval = (directionval + 3) % 4;  
            } else {
                for (int i = 0; i < command; ++i) {
                    int a = x + dir[directionval].first;
                    int b = y + dir[directionval].second;

                    if (obs.find({a, b}) == obs.end()) {
                        x = a;
                        y = b;
                        maxi = max(maxi, x * x + y * y);
                    } else{
                        break;
                    }
                }
            }
        }
        return maxi;
    }
};
