class Solution {
public:
    //Brute Force
    // int removeDuplicates(vector<int>& nums) 
    // {
    //     set <int> hSet;
    //     for (int i=0; i<nums.size();i++)
    //     {
    //         hSet.insert(nums[i]);
    //     }
    //     int setSize=hSet.size();
    //     int j=0;
    //     for (int x: hSet) 
    //     {
    //         nums[j++] = x;
    //     }
    //     return setSize;
    // }
    // Optimal Approch
    int removeDuplicates(vector<int>& nums) 
    {
    int i=0;
        for (int x=1;x<nums.size();x++)
        {
           if(nums[x]!=nums[i]) 
           {
               i++;
               nums[i]=nums[x];
           }
         
        }return i+1;
    }
};
    
