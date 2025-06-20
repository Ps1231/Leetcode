class Solution(object):
    def subarraySum(self, arr, k):
        n = len(arr)
        mpp = defaultdict(int)
        ps = 0
        cnt = 0
        mpp[0]=1
        for i in range(n) :
            ps += arr[i]
            remove = ps - k
            cnt += mpp[remove]
            mpp[ps] += 1
        return cnt
                
        