#include <bits/stdc++.h>
using namespace std;
// better approach 
class Solution 
{
public:
    int missingNumber(vector<int>& nums) 
    {   int n =nums.size();
        int sum=(( n*(n+1))/2);
     int sum2=0;
        for (int i=0;i<n;i++)
        {
            sum2= sum2+nums[i];
            
        }
     int m=sum-sum2;
     return m;
    }
   
};