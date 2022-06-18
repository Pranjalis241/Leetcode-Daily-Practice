class Solution
{
public:
    int longestValidParentheses(string s)
    {
        int n = s.size();
        int sumL = 0, sumR = 0;
        
        for (int i=0, j=n-1; i < n; i++, j--)
        {
            // backwards iterator
            if (s[j] == '(')
            {
                if (!sumR)
                    s[j] = '-';
                else
                    sumR--;
            } 
            else 
            {
                sumR++;
            }
            // forwards iterator
            if (s[i] == ')')
            {
                if (!sumL)
                    s[i] = '-';
                else
                    sumL--;
            } 
            else 
            {
                sumL++;
            }
        }
        
        sumL = 0, sumR = 0;
        for (int i = 0; i < n; i++)
        {
            if (!(s[i] - '-'))
            {
                sumL = 0;
            } 
            else 
            {
                sumL++;
                sumR = max(sumR,sumL);
            }
        }
        
        return sumR;
    }
};