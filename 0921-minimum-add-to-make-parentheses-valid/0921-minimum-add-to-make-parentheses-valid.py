class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        open_=0
        close=0
        for ch in s:
            if ch=='(':
                open_+=1
            else :
                if open_>0:
                    open_-=1
                else:
                    close+=1
        
        return open_+close