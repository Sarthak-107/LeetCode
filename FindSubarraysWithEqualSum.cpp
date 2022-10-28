class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        vector<int> result;
        int flag=0;
        for(int i=1;i<nums.size();i++)
            result.push_back(nums[i-1]+nums[i]);
        
        for(int i=0;i<result.size();i++)
            for(int j=i+1;j<result.size();j++)
            {
                if(result[i]==result[j])
                {
                    flag=1;
                    return flag;
                }
            }
        return flag;
        
    }
};