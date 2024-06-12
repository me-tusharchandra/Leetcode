class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;

        int tmp = 0;

        for(int i=0; i<nums.size(); i++){

            tmp = target - nums[i];

            if(mp.find(tmp) == mp.end()){
                mp[nums[i]] = i;
            }
            else{
                ans.push_back(mp[tmp]);
                ans.push_back(i);
                return ans;
            }
        }

        return ans;
    }
};