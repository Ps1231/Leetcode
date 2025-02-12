class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int front=-1,back=-1;
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                front=i;
                ans.push_back(front);
                break;
                
            }
            
        } 
        for (int i=nums.size()-1;i>=0;i--){
            if (nums[i]==target){
                back=i;
                ans.push_back(back);
                break;
            }
        }  
        if (ans.empty()){
            ans={-1,-1};
        }
         
        return ans;
    }
};