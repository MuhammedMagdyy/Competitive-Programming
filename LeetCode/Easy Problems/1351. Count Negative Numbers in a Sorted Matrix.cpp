class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ctnNeg = 0, m = grid.size();
        for(int i = 0; i < m; ++i) {
            int n = grid[i].size();
            for(int j = 0; j < n; ++j) {
                if (grid[i][j] < 0) {
                    ctnNeg++;
                }
            }
        }
        return ctnNeg;
    }
};