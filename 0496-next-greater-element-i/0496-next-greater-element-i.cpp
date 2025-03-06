class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st; // Monotonic stack to store elements
    unordered_map<int, int> nextGreater; // Map to store next greater elements

    // Step 1: Find the next greater element for each element in nums2
    for (int num : nums2) {
        // While the stack is not empty and the current number is greater than the top of the stack
        while (!st.empty() && num > st.top()) {
            nextGreater[st.top()] = num; // Map the top element to its next greater element
            st.pop(); // Remove the top element from the stack
        }
        st.push(num); // Push the current number onto the stack
    }

    // Step 2: Assign -1 to remaining elements in the stack (no next greater element)
    while (!st.empty()) {
        nextGreater[st.top()] = -1;
        st.pop();
    }

    // Step 3: Build the result for nums1 using the map
    vector<int> result;
    for (int num : nums1) {
        result.push_back(nextGreater[num]);
    }

    return result;
    }
};