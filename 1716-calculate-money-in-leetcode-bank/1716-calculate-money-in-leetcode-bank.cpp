class Solution {
public:
    int totalMoney(int n) 
    {
        int ans=0;
        int k=0;
        while(true)
        {
            for(int i=1;i<8;i++)
            {
                ans+=i+k;
                n--;
                if(n==0)
                    return ans;
            }
            k++;
        }
    }
};