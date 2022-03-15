class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int nval = nums[i];
            if (nval != val)
                nums[count++] = nval;
        }

        return count;
    }
};