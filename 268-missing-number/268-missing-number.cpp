class Solution
{
public:
    int missingNumber(vector<int>& arr)
    {
        int i=0;
        while(i < arr.size())
        {
            int correct = arr[i];
            if(arr[i] < arr.size() && arr[i] != arr[correct])
            {
                int temp = arr[i];
                arr[i] = arr[correct];
                arr[correct] = temp;
            }
            else
            {
                i++;
            }
        }
        //Search for the missing number
        for(int index = 0; index < arr.size(); index++)
        {
            //Case 1
            if(arr[index] != index)
            {
                return index;
            }
        }
        //Case 2
        return arr.size();
    }
};