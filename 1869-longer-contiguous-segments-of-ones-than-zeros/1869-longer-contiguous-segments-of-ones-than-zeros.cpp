class Solution {
public:
    bool checkZeroOnes(string s) {
        int cnt=0,cnt2=0,max2=0,max1=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            
            {cnt++;
             cnt2=0;}
            else
            {cnt2++;  
             cnt=0;}
            
            max1=max(cnt,max1);
            max2=max(cnt2,max2);
        } if(max1>max2) {return true;}
          else {return false;}
    }
};