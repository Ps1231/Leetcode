class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        a=nums
        n = len(a)
        if n == 0:
            return 0

        longest = 1
        st = set()
        # put all the array elements into set
        for i in range(n):
            st.add(a[i])

        # Find the longest sequence
        for it in st:
            # if 'it' is a starting number
            if it - 1 not in st:
                # find consecutive numbers
                cnt = 1
                x = it
                while x + 1 in st:
                    x += 1
                    cnt += 1
                longest = max(longest, cnt)
        return longest
        