#include <bits/stdc++.h>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int i = 0; // Pointer for the next position of non-zero element

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                // Swap only if nums[j] is non-zero
                swap(nums[i], nums[j]);
                i++; // Increment i for the next non-zero placement
            }
        }
    }
};
// 1   2   0   0   1   2
