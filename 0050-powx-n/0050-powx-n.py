class Solution(object):
    def myPow(self, x, n):
        ans = 1.0
        nn = n
        if n == 0:
            return 1.0
        if n<0:
            return 1/ self.myPow(x,-n)
        half = self.myPow(x , n//2)
        if n%2==0:
            return half * half
        else:
            return half * half  * x