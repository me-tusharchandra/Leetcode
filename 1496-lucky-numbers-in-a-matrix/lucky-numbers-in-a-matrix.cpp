class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> mins(matrix.size());
        vector<int> maxs(matrix[0].size());
        vector<int> ans;

        for(int i=0; i<matrix.size(); i++){
            int mini = INT_MAX;
            for(int j=0; j<matrix[0].size(); j++){
                mini = min(matrix[i][j], mini);
            }
            mins[i] = mini;
        }

        for(int i=0; i<matrix[0].size(); i++){
            int maxi = INT_MIN;
            for(int j=0; j<matrix.size(); j++){
                maxi = max(maxi, matrix[j][i]);
            }
            maxs[i] = maxi;
        }

        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == mins[i] && matrix[i][j] == maxs[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
        }

        return ans;
    }
};