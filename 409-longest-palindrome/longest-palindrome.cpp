class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();

        if(n==1) return 1;

        bool hasodd = false;
        unordered_map<char, int> mp;
        int ans = 0;

        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        for(auto x: mp){
            if(x.second>1){
                ans += x.second - x.second%2;
            }
        }

        if(ans < n){
            ans++;
        }

        return ans;
    }
};