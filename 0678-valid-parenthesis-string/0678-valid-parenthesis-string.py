class Solution(object):
    def checkValidString(self, s):
        """
        :type s: str
        :rtype: bool
        """
        cnt=0
        r=0
        for c in s:
            if c == "(":
                cnt, r = cnt + 1, r + 1
            elif c == ")":
                cnt, r = cnt - 1, r - 1
            else:
                cnt, r = cnt - 1, r + 1
            if r < 0:
                return False
            if cnt < 0:
                cnt = 0
        return cnt == 0                

        