class Solution
{
public:
    bool isPalindrome(string s)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int l=0,r=s.size()-1;
        int count = 0;
        while(l<=r)
        {
            if(!iswalnum(s[l]))
                l++;
            else if(!iswalnum(s[r]))
                r--;
            else if(s[l++] != s[r--])
                return false;
        }
        return true;
    }
};