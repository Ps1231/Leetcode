class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0,sum2=0;
        for (char c : s) 
        {sum1 += int(c);}
        for (char d : t) 
        { sum2+= int(d);}
        return char(sum2-sum1);
    }
};