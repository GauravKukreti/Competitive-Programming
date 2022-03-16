class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size(), maxx = INT_MIN, sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (maxx < nums[i])
                maxx = nums[i];

            sum += nums[i];

            if (sum > maxx)
                maxx = sum;

            sum = max(sum, 0);
        }

        return maxx;
    }
};

/*

Kadane's Algorithm

*/