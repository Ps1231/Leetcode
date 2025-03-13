class Solution {
public:
    int reverse(int x) {
    long ans = 0;
    while (x != 0) {
        int last_digit = x % 10;
        ans = ans * 10 + last_digit;
        x = x / 10;
    }
    return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
    }
};