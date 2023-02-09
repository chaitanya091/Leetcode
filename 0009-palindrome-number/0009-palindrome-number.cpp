class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
       long long int num = x;
        long long int reverse = 0;
        
        while(num!= 0)
        {
           long long int rem = num%10;
           reverse = reverse*10 + rem;
           num = num/10; 
        }
        if(x == reverse)
        {
            return true;
        }
        else
        {
            return false;
        }
        return 0;
    }
};