class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp;
        vector<int> ans;
        int flag=0;

        for(int i=0; i<arr1.size(); i++){
            mp[arr1[i]]++;
        }

        for(int i=0; i<arr2.size(); i++){
            while(mp[arr2[i]]){
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
                flag++;
            }
        }

        for(auto i: mp){
            while(i.second>0){
                ans.push_back(i.first);
                i.second--;
            }
        }

        sort(ans.begin()+flag, ans.end());

        return ans;
    }
};