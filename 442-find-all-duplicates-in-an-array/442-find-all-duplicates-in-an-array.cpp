class Solution
{
public:
    vector<int> findDuplicates(vector<int>& arr)
    {
        int i=0;
        while (i<arr.size())
        {
            int correct = arr[i]-1;
            if(arr[i] != arr[correct])
            {
                int temp=arr[i];
                arr[i]=arr[correct];
                arr[correct]=temp;
            }
            else
            {
                i++;
            }
        }

        //Just find missing number
        vector<int> ans;
        for(int index=0; index<arr.size(); index++)
        {
            if(arr[index] != index+1)
            {
                ans.push_back(arr[index]);
            }
        }
        return ans;
    }
};