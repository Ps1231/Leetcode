class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int total = m + n;
        int gap = (total / 2) + (total % 2); // Initial gap

        auto nextGap = [](int gap) {
            return (gap <= 1) ? 0 : (gap / 2) + (gap % 2);
        };

        while (gap > 0) {
            int i = 0;

            // Comparing elements in nums1
            for (; i + gap < m; i++) {
                if (nums1[i] > nums1[i + gap]) {
                    swap(nums1[i], nums1[i + gap]);
                }
            }

            // Comparing elements between nums1 and nums2
            int j = gap > m ? gap - m : 0;
            for (; i < m && j < n; i++, j++) {
                if (nums1[i] > nums2[j]) {
                    swap(nums1[i], nums2[j]);
                }
            }

            // Comparing elements in nums2
            for (j = 0; j + gap < n; j++) {
                if (nums2[j] > nums2[j + gap]) {
                    swap(nums2[j], nums2[j + gap]);
                }
            }

            gap = nextGap(gap);
        }

        // Copy nums2 to nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};
