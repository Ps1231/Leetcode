class Solution {
public:
    double myPow(double x, int n) {
        long long z = n;
        if (z< 0) {
        x = 1 / x;
        z = -z;
        }
        if (z == 0) return 1;
            double half = myPow(x, z / 2);
        return (z% 2) ? x * half * half: half * half;
    }
};