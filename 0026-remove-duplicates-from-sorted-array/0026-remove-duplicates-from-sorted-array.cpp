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
        set<int>::iterator it = hSet.begin();

    // Advance the iterator to the desired position
        int j=0;
        for (int x: hSet) 
        {
            nums[j++] = x;
        }
        return setSize;
    }
};
    
    // 1,1,2,2,3,3==6
    //     1,2,3,_,_,_
    //     1,2,3 === 3