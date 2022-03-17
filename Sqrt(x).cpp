class Solution
{
public:
    int mySqrt(int x)
    {
        int s = 0;
        int e = n;
        long long int ans = -1;
        long long int mid = s + (e - s) / 2;
        while (s <= e)
        {
            mid = s + (e - s) / 2;
            long long int square = mid * mid;
            if (square == n)
                return mid;
            else if (square < n)
            {
                ans = mid;
                s = mid + 1;
            }
            else
                e = mid - 1;
        }
        return ans;
    }
};