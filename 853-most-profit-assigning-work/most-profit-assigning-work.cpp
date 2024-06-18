class Solution {
public:
    int maxProfitAssignment(vector<int>& dif, vector<int>& pf, vector<int>& wk) {
        int maxp = *max_element(dif.begin(), dif.end());
        vector<int> vec(maxp+1, 0);
        for(int i=0; i<dif.size(); i++) vec[dif[i]] = max(vec[dif[i]], pf[i]);
        for(int i=1; i<=maxp; i++) vec[i] = max(vec[i], vec[i-1]);

        int ans = 0;
        for(auto i: wk) {
            if(i > maxp) ans += vec[maxp];
            else ans += vec[i];
        }
        return ans;
    }
};