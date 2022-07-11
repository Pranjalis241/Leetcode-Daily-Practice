class Solution
{
public:
    string reverseWords(string s) 
    {
        int n=s.size();
        for(int i=0, j=0; i<=n; i++)
        {
            if(s[i]==' '||i==n)
            {
                if(i!=j)
                {
                    reverse(s.begin()+j, s.begin()+i);
                    j=i+1;
                }
            }
        }
        return s;
    }
};