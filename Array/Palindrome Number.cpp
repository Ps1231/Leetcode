class Solution 
{
public:
    bool isPalindrome(int x) 
    {       
        int original = x;
        long int rev = 0;
        while(x>0)
        {
            rev = x%10 + rev*10;
            x= x/10;
        }
        return rev==original ? true : false;
    }
};
