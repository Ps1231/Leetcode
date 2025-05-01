class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int,int> mmap;
        for(int i=0;i<nums.size();i++){
            mmap[nums[i]]++;
            if(mmap[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};