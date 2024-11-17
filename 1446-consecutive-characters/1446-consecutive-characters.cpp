class Solution {
public:
    int maxPower(string s) {
        int cnt=0,max1=0;
        char previous=' ';
        int n=s.size();
        for(int i=0; i<n;i++)
            
        {   
            char current=s[i];
            if (current==previous) 
            {   
                cnt++;
            }
            
            else 
            { cnt=1; previous=current;}
         max1 = max(max1, cnt);
        } return max1;
        
    }
};