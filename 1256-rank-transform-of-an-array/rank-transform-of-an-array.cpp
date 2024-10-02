class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> mp;
        vector<int> sortedarr = arr;

        sort(sortedarr.begin(), sortedarr.end());
        sortedarr.erase(unique(sortedarr.begin(), sortedarr.end()), sortedarr.end());

        for(int i=0; i<sortedarr.size(); i++){
            mp[sortedarr[i]] = i+1;
        }

        for(int i=0; i<arr.size(); i++){
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};