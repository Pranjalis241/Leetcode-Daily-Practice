class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int xorEle=start;
        for(int i=1;i<n;i++)
        {
            int nextEle = start+2*i;
            xorEle = xorEle ^ nextEle;
        }
        return xorEle;
    }
};