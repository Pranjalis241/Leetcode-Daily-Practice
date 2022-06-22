class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        int n = (coordinates[0]-96) + (coordinates[1]-48);
        if(n%2!=0)
            return true;
        else
            return false;
    }
};