class Solution
{
public:
    int gcd(int min, int max)
    {
        if(min==0)
        {
            return max;
        }
        return gcd(max%min,min);
    }
    int findGCD(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int min = nums[0];
        int max = nums[nums.size()-1];
        return gcd(min, max);
    }
};