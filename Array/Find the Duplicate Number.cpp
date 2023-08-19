// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>  
//set    
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_set<int> s;
        for(int i=0; i<nums.size();i++)
        {
            if(s.count(nums[i])){
                return nums[i];
            }
            s.insert(nums[i]);
        }
        return -1;
    }
        //loopie:
    //      int findDuplicate(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //     for (int i = 1; i < nums.size(); i++) {
    //         if (nums[i] == nums[i - 1])
    //             return nums[i];
    //     }
    //     return -1;

    // negetivity:
    // }
    //      int findDuplicate(vector<int>& nums) {
    //     int duplicate = -1;
    //     for (int i = 0; i < nums.size(); i++) {
    //         int cur = abs(nums[i]);
    //         if (nums[cur] < 0) {
    //             duplicate = cur;
    //             break;
    //         }
    //         nums[cur] *= -1;
    //     }
        
    //     return duplicate;
    // }
};
