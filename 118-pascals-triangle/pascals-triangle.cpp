class Solution {
public:
    vector<int> logic(int n){
        vector<int> ans;

        int res = 1;
        ans.push_back(res);

        for(int i=1; i<n; i++){
            res = res*(n-i);
            res = res/(i);
            ans.push_back(res);
            // cout << res;
        }

        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i=1; i<=numRows; i++){
            ans.push_back(logic(i));
        }

        return ans;
    }
};