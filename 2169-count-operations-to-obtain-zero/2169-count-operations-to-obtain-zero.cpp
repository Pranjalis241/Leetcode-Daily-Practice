class Solution
{
public:
    int countOperations(int num1, int num2)
    {
        int count=0;
        while(true)
        {
            if(num1 == 0 || num2 == 0)
            {
                return count;
            }
            if(num1 >= num2)
            {
                num1 = num1 - num2;
                count++;
            }
            else if(num1 <= num2)
            {
                num2 = num2 - num1;
                count++;
            }
        }
    }
};