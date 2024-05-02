class Solution {
public:
    int findMaxK(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int i=0; 
        int j=nums.size()-1;

        while(i<j){
            if(abs(nums[i]) == nums[j] && nums[j]>0 && nums[i]<0){
                return nums[j];
            }
            if(nums[j] > abs(nums[i])){
                j--;
            }
            else{
                i++;
            }
        }

        return -1;
    }
};