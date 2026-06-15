class Solution:
    def countAndSay(self, n: int) -> str:
        ans='1'
        for i in range (1,n):
            cnt=1
            current=''
            for j in range (1, len(ans)):
                if ans[j]==ans[j-1]:
                    cnt+=1
                else:
                    current+= str(cnt)+ ans[j-1]
                    cnt=1
            current+= str(cnt)+ans[-1]
            ans=current
        return ans

