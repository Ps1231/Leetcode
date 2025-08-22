class Solution:
    def hammingWeight(self, n: int) -> int:
        binArr = []

        while n > 0:
            bit = n % 2
            binArr.append(str(bit))
            n //= 2
        count=0
        # reverse the string
        binArr.reverse()
        rr= "".join(binArr)
        for s in rr:
            if s== str(1):
                count+=1
        return count