class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        map <int,int> hash;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for (auto i : hash){
            if ( i.second==1){ return i.first;}
        }return -1;
    }
};