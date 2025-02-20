class Solution {
public:
    int findmax(vector<int>& arr) {
        int maxi = arr[0]; 
        for (int i = 1; i < arr.size(); i++) { 
            maxi = max(arr[i], maxi);
        }
        return maxi;
    }

    long long calculateTotalHours(vector<int>& arr, int hour) {
        long long totalh = 0; 
        for (int i = 0; i < arr.size(); i++) { 
            totalh += ceil((double)(arr[i]) / (double)(hour));
        }
        return totalh;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findmax(piles);
        while (low <= high) {
            int mid = (low + high) / 2;
            long long  totalH = calculateTotalHours(piles, mid);
            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
