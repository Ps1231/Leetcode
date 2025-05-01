class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        mapp = defaultdict(int) 

        for i in nums:
            mapp[i]+=1
            if (mapp[i]>1):
                return True
        return False