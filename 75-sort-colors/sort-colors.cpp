class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v;

        int n = nums.size();
        int j = 0;

        if(nums[j] == 0){
            j++;
        }

        for(int i=1; i<n; i++){
            if(nums[i] == 0){
                swap(nums[j], nums[i]);
                j++;
            }
        }

        for(int i=j; i<n; i++){
            if(nums[i] == 1){
                swap(nums[j], nums[i]);
                j++;
            }
        }

        for(int i=j; i<n; i++){
            if(nums[i] == 2){
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};