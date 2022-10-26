class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        double palin=0;
        while(temp>0)
        {
            palin=(10*palin)+double(temp%10);
            temp/=10;
        }
            if(palin==x)
                return true;
            else
                return false;
        
    }
};