class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0; 
        int negativeCount = 0;
        int minAbsValue = INT_MAX; 
        
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                int val = matrix[i][j];
                sum += abs(val);
                if (val < 0) negativeCount++; 
                minAbsValue = min(minAbsValue, abs(val)); 
            }
        }

        if (negativeCount % 2 != 0) {
            sum -= 2 * minAbsValue;
        }

        return sum;
    }
};
