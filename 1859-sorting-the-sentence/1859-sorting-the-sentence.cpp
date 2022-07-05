class Solution 
{
public:
    string sortSentence(string s) 
    {
        int n = s.length();
        int res = count(s.begin(),s.end(),' ');
        vector<string> v(res+2,"");
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' and s[i]<='9')
            {
                v[s[i]-'0'] = str;
                str = "";
                i++;
            }
            else
            {
                str.push_back(s[i]);
            }
        }
        string sentence="";
        for(int i=0;i<v.size();i++)
        {
            sentence+=v[i];
            if(i!=0 and i!=v.size()-1)
            {
                sentence+=' ';
            }
        }
        return sentence;
    }
};