class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        mp = {}
        for i in range(n):
            diff = target - nums[i]
            if diff in mp:
                return [mp[diff],i]
            mp[nums[i]] = i
        return []
