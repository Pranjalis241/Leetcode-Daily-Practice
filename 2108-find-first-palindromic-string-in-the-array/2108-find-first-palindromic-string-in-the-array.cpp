class Solution
{
public:
    string firstPalindrome(vector<string>& words)
    {
        for(int i=0;i<words.size();i++)
        {
            int n=words[i].size();
            string s=words[i];
            int p=0,q=n-1,count=0;
            for(int j=0;j<n/2+1;j++)
            {
                if(s[p]==s[q])
                {
                    p++;
                    q--;
                    count++;
                }


                else
                {
                    break;
                }
            }
            if(count==n/2+1)
            {
                return words[i];
                break;
            }
        }
        return "";
    }
};