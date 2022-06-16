class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int lCounter=0, rCounter=0, Counter=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='R')
                rCounter++;
            else
                lCounter++;
            if(rCounter==lCounter)
                Counter++;
        }
        return Counter;
    }
};