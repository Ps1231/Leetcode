class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    
    {   int n=nums.size();
        if(n==1){return 0;}
        if(n==2){
            if(nums[0]>nums[1]) return 0;
            else return 1;
        }
        if(n>=2 && nums[0]>nums[1]){ return 0;}
        if(n>=2 && nums[n-1]>nums[n-2]){ return n-1;}
         // THIS IS DONE THROUGH LINEAR SEARCH HENCE NOT O (LOG N) complexity 
        // for(int i=1;i<n-1;i++)
        // {   
        //      if (nums[i] > nums[i - 1] && ( nums[i] > nums[i + 1])) {
        //         return i;}
        // }
        int start = 1;
        int end = n-2;
        while(start <= end) {
            int mid = start + (end - start)/2;
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) return mid;
            else if(nums[mid] < nums[mid-1]) end = mid - 1;
            else if(nums[mid] < nums[mid+1]) start = mid + 1;
        }
        return -1;
        
    }
};  