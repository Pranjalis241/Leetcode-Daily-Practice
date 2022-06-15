class Solution
{
public:
    string restoreString(string s, vector<int>& indices)
    {
        string s_copy = s;
        for(int i=0; i<s.size(); i++)
            s_copy[indices[i]] = s[i];
        return s_copy;
    }
};