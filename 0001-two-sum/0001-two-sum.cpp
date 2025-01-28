class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
         int n = nums.size();
         int rem;
        unordered_map <int,int> mmap;
        for(int i=0;i<n;i++){
            rem=target-nums[i];
            if(mmap.find(rem)!=mmap.end()){
                return {i, mmap[rem]};
            }
            mmap[nums[i]]=i;
        } return{};
    }
};