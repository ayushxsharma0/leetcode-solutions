class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zero,one,two = 0,0,0

        for i in nums:
            if(i==0):
                zero += 1
            elif i==1:
                one+= 1
            else:
                two += 1
        
        i =0
        while(zero):
            nums[i] = 0
            i+=1
            zero -= 1
        while(one):
            nums[i]= 1
            i+= 1
            one-=1
        while(two):
            nums[i] = 2
            i+=1
            two-= 1
            

        