class Solution(object):
    def rearrangeArray(self, nums):
        mini = []
        maxi = []
        
        for num in nums:
            if num < 0:
                mini.append(num)
            else:
                maxi.append(num)
        
        result = []
        i = j = 0
        turn = True 
        while i < len(maxi) and j < len(mini):
            if turn:
                result.append(maxi[i])
                i += 1
            else:
                result.append(mini[j])
                j += 1
            turn = not turn

        result.extend(maxi[i:])
        result.extend(mini[j:])
        
        return result
