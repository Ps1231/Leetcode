class Solution(object):
    def moveZeroes(self, nums):
        n=0
        for i in range (len(nums)):
            if nums[i] !=0:
                nums[n],nums[i]=nums[i],nums[n]
                n=n+1
                
        