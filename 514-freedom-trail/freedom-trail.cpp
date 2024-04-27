class Solution {
public:
        int dp[101][101];
        int countSteps(int ringIndex, int keyIndex, int len){
        int acw = abs(ringIndex - keyIndex);
        int cw = len - acw;
        return min(cw, acw);
    }

    int solve(int ringIndex, int keyIndex, const string &ring, const string &key){
        int ans = -1; // Initialize with a value that represents no valid solution

        if (keyIndex == key.length()) {
            return 0;
        }

        if(dp[ringIndex][keyIndex] != -1) return dp[ringIndex][keyIndex];

        for(int i = 0; i < ring.length(); i++) {
            if(ring[i] == key[keyIndex]){
                int totalSteps = solve(i, keyIndex + 1, ring, key) + 1 + countSteps(ringIndex, i, ring.length());
                if (ans == -1 || totalSteps < ans) {
                    ans = totalSteps;
                }
            }
        }
        return dp[ringIndex][keyIndex] = ans;
    }

    int findRotateSteps(string ring, string key) {
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, ring, key);
    }
};
