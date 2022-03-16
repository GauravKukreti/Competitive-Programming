class Solution
{
public:
    int searchInsert(vector<int> &nums, int x)
    {
        int n = nums.size();

        if (!n)
            return 0;

        int low = 0, mid, high = n - 1;

        while (low <= high)
        {
            mid = (low + high) / 2;
            if (x < nums[mid])
                high = mid - 1;
            else if (x > nums[mid])
                low = mid + 1;
            else
                return mid;
        }
        cout << high << " " << low << endl;
        return low;
    }
};