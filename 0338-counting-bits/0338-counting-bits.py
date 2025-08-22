class Solution:
    def countBits(self, n: int) -> List[int]:
        l=[]
        for i in range(n+1):
            binArr = []
            while i > 0:
                bit = i % 2
                binArr.append(str(bit))
                i //= 2
            count=0
            rr= "".join(binArr)
            for s in rr:
                if s== str(1):
                    count+=1
            l.append(count)
        return l