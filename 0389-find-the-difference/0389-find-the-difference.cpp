class Solution {
public:
    char findTheDifference(string s, string t) {
        int xor1=0;
        int n=t.size();
        for (int i=0;i<n;i++)
        {
            xor1^=s[i]^t[i];
        } return xor1;
    }
};