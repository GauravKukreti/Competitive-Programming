class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++)
        {
            int diff = target - nums[i];
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] == diff)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};