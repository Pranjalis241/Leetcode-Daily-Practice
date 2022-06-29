class Solution
{
public:
    int smallestEqual(vector<int>& nums)
    {
        bool flag = false;
        int res = -1;
        
        for(int i = 0; i<nums.size(); i++)
        {
            if(flag == false)
            {
              if(i % 10 == nums[i])
              {
                  res = i;
                  flag = true;
                  break;
              }
            }
        }
        return res;
    }
};