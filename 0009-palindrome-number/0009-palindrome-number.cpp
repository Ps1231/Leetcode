class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int cp=x;
        while(x>0){
            rev=rev*10;
            rev+=x%10;
            x=x/10;
            
        }
        return rev==cp;
    }
};