#include <bits/stdc++.h>
using namespace std;
// better approach 
class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {  int n=nums.size();
     vector <int> arr(n+1);
        
        for(int i=0;i<n;i++)
        {
             arr[nums[i]]++;
        }
     for (int i = 0; i <= n; i++) 
     {
        if (arr[i] == 0) 
        {
            return i;
        }
    }return -1;
    }
};