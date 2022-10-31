class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length=digits.size()-1;
        if(digits[length]!=9)
          digits[length]+=1;
        else
        {
        while(digits[length]==9)
        {
            if(length==0)
            {   
               digits.insert(digits.begin(),1);
                digits[length+1]=0;
                return digits;
                
            }
            digits[length]=0;
            length--;    
        }
        digits[length]++;
        }
        return digits;
    }
};