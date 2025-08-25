class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        map<int, vector<int>> mp;

        int r = mat.size();
        int c = mat[0].size();

        // Group elements by diagonals (i+j)
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                mp[i + j].push_back(mat[i][j]);
            }
        }

        // Traverse diagonals
        for (int d = 0; d < r + c - 1; d++) {
            if (d % 2 == 0) {
                // Reverse traversal for even diagonals
                reverse(mp[d].begin(), mp[d].end());
            }
            for (int val : mp[d]) {
                ans.push_back(val);
            }
        }

        return ans;
    }
};