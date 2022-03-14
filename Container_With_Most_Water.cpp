class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int n = height.size();
        int l = 0, r = n - 1, s = 0, sum = 0;
        while (l < r)
        {
            sum = (r - l) * min(height[l], height[r]);
            if (s < sum)
                s = sum;
            (height[l] < height[r]) ? (l++) : (r--);
        }
        return s;
    }
};