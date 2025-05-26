class Solution(object):
    def lengthOfLongestSubstring(self, s):
        if len(s) == 0:
            return 0
        maxi = 0
        hashm = set()
        l = 0
        for r in range(len(s)):  
            if s[r] in hashm:
                while l < r and s[r] in hashm:
                    hashm.remove(s[l])
                    l += 1
            hashm.add(s[r])
            maxi = max(maxi, r - l + 1)
        return maxi
        