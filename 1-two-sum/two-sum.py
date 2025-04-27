class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)

        mp = {}

        for i in range(n):
            tmp = target - nums[i]

            if tmp not in mp:
                mp[nums[i]] = i
            else:
                return[mp[tmp], i]

        return[]

