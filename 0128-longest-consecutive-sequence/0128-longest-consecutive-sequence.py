class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        seen =set(nums)
        maxi=0
        for num in seen:
            if (num-1) not in seen:
                l=1
                while(num+l) in seen:
                    l+=1
                maxi=max(l,maxi)
        return maxi
