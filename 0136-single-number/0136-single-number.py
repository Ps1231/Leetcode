class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        xor1 = 0
        for num in nums:
            xor1 = xor1 ^ num
        return xor1