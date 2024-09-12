class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;

        if(s.length() != t.length()) return 0;

        for(char i: s){
            mp[i]++;
        }

        for(char i: t){
            mp[i]--;
        }

        for(auto i: mp){
            if(i.second > 0){
                return 0;
            }
        }
        
        return 1;
    }
};