class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

    vector<int> arr3(m + n);
    int left = 0, right = 0, index = 0;
    while (left < m && right < n) {
        if (nums1[left] <= nums2[right]) {
            arr3[index] = nums1[left];
            left++, index++;
        }
        else {
            arr3[index] = nums2[right];
            right++, index++;
        }
    }
    while (left < m) {
        arr3[index++] = nums1[left++];
    }
    while (right < n) {
        arr3[index++] = nums2[right++];
    }
    for (int i = 0; i < n + m; i++) {
         nums1[i] = arr3[i];
        
    }
}
};