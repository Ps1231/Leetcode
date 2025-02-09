class Solution {
public:
int char2num(char a) {
        switch (a) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
    int romanToInt(string s) {
        int result = 0;
        int prev = 0; // Store the last processed value

        // Reverse loop (right to left)
        for (int i = s.length() - 1; i >= 0; i--) {
            int curr = char2num(s[i]);

            if (curr < prev) {
                result -= curr; // Subtract if smaller than the previous value
            } else {
                result += curr; // Otherwise, add
            }

            prev = curr; // Update previous value
        }

        return result;

    }
};