class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long maxReach = 0;
        int i=0;
        int ans=0;

        while(maxReach < n){
            if(i < nums.size() && nums[i] <= maxReach+1){
                maxReach += nums[i];
                i++;
            } else{
                maxReach += (maxReach+1);
                ans++;
            }
        }

        return ans;
    }
};