class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long  long sum=0, maxi=LONG_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
                maxi=max(maxi,sum);
                if(sum<0)
                { sum =0;}
                
                
        } 
        return maxi;
    }
};