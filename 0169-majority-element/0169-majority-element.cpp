class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,element;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                element=nums[i];
            }
            else if(element==nums[i]){
                cnt++;
            }
            else {
                cnt--;
            }
        } 
        return element;   
    }
};