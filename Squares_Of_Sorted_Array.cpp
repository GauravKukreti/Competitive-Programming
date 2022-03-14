class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> sol(n);
        int l = 0, r = n - 1;

        for (int i = n - 1; i >= 0; i--)
        {
            int sql = nums[l] * nums[l];
            int sqr = nums[r] * nums[r];

            if (sql > sqr)
            {
                sol[i] = sql;
                l += 1;
            }
            else
            {
                sol[i] = sqr;
                r -= 1;
            }
        }
        return sol;
    }
};