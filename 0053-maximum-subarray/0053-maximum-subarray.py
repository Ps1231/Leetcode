import sys
class Solution(object):
    def maxSubArray(self, nums):
        maxi = -sys.maxsize-1 
        n=len(nums)
        sum = 0
        for i in range(n):
            sum += nums[i]
            if sum > maxi:
                maxi = sum
            if sum < 0:
                sum = 0

        return maxi
            