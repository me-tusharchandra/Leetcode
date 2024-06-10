class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> expected;

        map<int, int> mp;
        int ans = 0;

        for(int i=0; i<n; i++){
            mp[heights[i]]++;
        }

        for(auto i: mp){
            while(i.second != 0){
                expected.push_back(i.first);
                i.second--;
            }
        }

        for(int i=0; i<n; i++){
            if(heights[i] == expected[i]) continue;
            else ans++;
        }

        return ans;
    }
};