class Solution {
public:

    int ncr(int n, int r){

        int res = 1;
        
        for(int i=0; i<r; i++){
            res = res*(n-i);
            res = res/(i+1);
        }

        return res;
    }

    vector<int> rowgen(int n){
        vector<int> ans;

        for(int i=0; i<n; i++){
            ans.push_back(ncr(n-1, i));
        }

        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i=1; i<=numRows; i++){
            ans.push_back(rowgen(i));
        }

        return ans;
    }
};