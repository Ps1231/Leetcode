class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    sort(nums.begin(), nums.end());
    int smaller = INT_MIN;
    int cnt = 0;
    int longer = 1;
    for (int i = 0; i < n; i++) {
        if (nums[i] - 1 == smaller) {
            cnt += 1;
            smaller = nums[i];
        }
        else if (nums[i] != smaller) {
            cnt = 1;
            smaller = nums[i];
        }
        longer = max(longer, cnt);
    }
    return longer; }
};