class Solution
{
public:
    int dominantIndex(vector<int>& nums)
    {
        int max=INT_MIN;
        int index=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                index=i;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(max!=nums[i])
            if(max>=2*nums[i])
                continue;
            else
                return -1;
        }
        
        return index;
    }
};