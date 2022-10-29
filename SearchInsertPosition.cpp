class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size();
        int mid,temp;
        
        for(; ; )
        {
            temp=mid;
            mid=(start+end)/2;
            if(nums[0]>=target)
                return 0;
            if(temp==mid)
            {
                return (mid+1);
            }
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
            {
                end=mid;
            }
            else
                start=mid;
        }
            
        
    }
};