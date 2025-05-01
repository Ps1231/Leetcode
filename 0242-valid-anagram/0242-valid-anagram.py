class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        if len(s) != len(t):
            return False
        mappS = defaultdict(int)
        mappT = defaultdict(int)
        for i in range (len(s)):
            mappS[s[i]]+=1
            mappT[t[i]]+=1
        return mappS == mappT