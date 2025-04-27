class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();

        for(int i=0; i<n; i++){ // 0, 1, 2
            int tmp = target - nums[i]; // 3, 4, 2

            if(mp.find(tmp) == mp.end()){ // 0, 0, 1
                mp[nums[i]] = i; // 3: 0, 2: 1, x
            }

            else{
                return{mp[tmp], i};
            }
        }
        return {0,0};
    }
};