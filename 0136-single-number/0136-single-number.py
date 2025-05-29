class Solution(object):
    def singleNumber(self, nums):
        xor1 = 0
        for num in nums:
            xor1 = xor1 ^ num
        return xor1
