class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> vec(100000,0);
        int mx=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                vec[(nums[i]/2)]++;
        }
        for(int i=0;i<vec.size();i++){                    
            mx=max(mx,vec[i]);
            if(mx==vec[i])
            {   if(vec[count]==vec[i])
                 { 
                   continue;
                 }
             else
                 count=i; }
        }
            
        if(mx==0)
            return -1;
        else
            return count*2;
    }
};