class Solution {
public:
    int myAtoi(string s) {
        long long int r = 0;
    int neg = 1;
    bool ss = false, started = false;

         for (char c : s) {
        if (c == ' ' && !started && !ss) 
            continue;

        if ((c == '-' || c == '+') && !started && !ss) {
            
            if (c == '-') { neg= -1 ; }
            else{ neg= 1;}
            ss = true;
            continue;
        }
        
        if (c >= '0' && c <= '9') {
            started = true;
            r = (r * 10) + (c - '0');

            if (r > INT_MAX) 
                if (neg == 1) {return  INT_MAX; }
                else { return INT_MIN;}
        } 
        else break;
    }
    
    return r * neg;
}
    
};