class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> sol(n);
        for (int i = 0; i < n; i++)
        {
            sol[i] = nums[nums[i]];
        }
        return sol;
    }
};