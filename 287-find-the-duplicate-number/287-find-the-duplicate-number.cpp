class Solution
{
public:
    int findDuplicate(vector<int>& arr)
    {
        int i=0;
        while(i<arr.size())
        {
            int correct=arr[i]-1;
            if(arr[i] != arr[correct])
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
        
        for(int index=0; index<arr.size(); index++)
        {
            if(arr[index] != index+1)
            {
                return arr[index];
            }
        }
        return -1;
    }
};