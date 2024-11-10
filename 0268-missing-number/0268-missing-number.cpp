#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {   int n;
        int s = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < s; i++) 
            
        {   if(i==0 && nums[i]!=0)
            {
                n=0;
            }
            if (i == s - 1 && nums[i] != s)  // Check if last element is not equal to `s`
            {
                n= s;
                break;// The missing number is `s`
            }
            else if (i < s - 1 && (nums[i + 1] - nums[i]) != 1)  // Check for gap except at last element
            {
                n= nums[i] + 1;
                break;// The missing number is `nums[i] + 1`
            }
        }
        
        return n; // Just as a fallback, ideally shouldn't reach here
    }
};