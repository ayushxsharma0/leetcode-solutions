class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        sum = 0 
        ans = -10000000

        for i in nums:
            sum += i
            if(sum > ans):
                ans = sum
            if(sum<0):
                sum = 0
        
        return ans