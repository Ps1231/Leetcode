class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        set <int> hSet;
        for (int i=0; i<nums.size();i++)
        {
            hSet.insert(nums[i]);
        }
        int setSize=hSet.size();
        int j=0;
        for (int x: hSet) 
        {
            nums[j++] = x;
        }
        return setSize;
    }
};
    
