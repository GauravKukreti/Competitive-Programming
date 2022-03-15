class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 0 || n == 1)
            return n;

        int count = 1, old = nums[0], neww;

        for (int i = 1; i < n; i++)
        {
            neww = nums[i];
            if (neww != old)
            {
                old = neww;
                nums[count] = old;
                count += 1;
            }
        }
        return count;
    }
};